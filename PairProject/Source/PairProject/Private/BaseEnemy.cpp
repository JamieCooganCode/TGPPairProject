// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseEnemy.h"
#include "PairProject/Public/IAttackable.h"
#include "PairProject/Public/BaseAttack.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SphereComponent.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	_movementComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MovementComponent"));
	RootComponent = _movementComponent;
	_sightSphere = CreateDefaultSubobject<USphereComponent>(FName("SightSphere"));
	_sightSphere->SetupAttachment(RootComponent);
	_sightSphere->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemy::OverlapTriggered);
	_sightSphere->SetGenerateOverlapEvents(true);
	_sightSphere->SetCollisionProfileName("OverlapAllButIgnoreMe");
}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	if (_movementComponentMesh != nullptr)
	{
		_movementComponent->SetSkeletalMesh(_movementComponentMesh);
	}
	_sightSphere->SetSphereRadius(_sightRange);
	_team = _startTeam;
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (_attackTarget != nullptr)
	{
		if (_attackTarget2 != nullptr)
		{
			FVector temp, temp2;
			temp = this->RootComponent->GetComponentLocation() - _attackTarget->GetActorLocation();
			temp2 = this->RootComponent->GetComponentLocation() - _attackTarget2->GetActorLocation();
			if (temp.Size() > temp2.Size())
			{
				AActor* tempActor = _attackTarget;
				_attackTarget = _attackTarget2;
				_attackTarget2 = tempActor;
			}
		}
		FVector directionToTarget = _attackTarget->GetActorLocation() - this->RootComponent->GetComponentLocation();
		if (directionToTarget.Size() < _sightRange)
		{
			if (directionToTarget.Size() <= _attackRange)
			{
				Attack(DeltaTime, directionToTarget);
				_currentMovementSpeed = 0.0f;
			}
			else
			{
				Move(DeltaTime, directionToTarget);
			}
		}

		Rotate(DeltaTime, directionToTarget, 10.0f);
	}
	else if (_attackTarget2 != nullptr)
	{
		_attackTarget = _attackTarget2;
	}

	if (_timeSinceLastAttack > _attackCooldown + 0.5f)
	{
		_attacking = false;
	}
}

void ABaseEnemy::Move(float deltaTime, FVector directionToTarget)
{
	directionToTarget.Normalize();
	FVector myPosition = this->RootComponent->GetComponentLocation();
	FVector newPosition = myPosition + (directionToTarget * _movementSpeed);
	this->SetActorLocation(FMath::VInterpTo(this->GetActorLocation(), newPosition, deltaTime, 2.0f));
	_currentMovementSpeed = _movementSpeed;
}

void ABaseEnemy::Attack(float deltaTime, FVector directionToTarget)
{
	if (_timeSinceLastAttack > _attackCooldown)
	{
		_attacking = true;
		UBaseAttack* attack = NewObject<UBaseAttack>(this, _attackComponent);
		attack->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
		attack->SetRelativeLocation(FVector(_attackRange, 0.0f, 0.0f));
		attack->RegisterComponent();
		_timeSinceLastAttack = 0.0f;
	}
	else
	{
		_timeSinceLastAttack += deltaTime;
	}
}


void ABaseEnemy::DealDamage(float damageDealt)
{
	_health -= damageDealt;
	if (_health <= 0.0f)
	{
		this->Destroy();
	}
}

Team ABaseEnemy::GetTeam()
{
	return _team;
}

void ABaseEnemy::Rotate(float deltaTime, FVector desiredForwardVector, float leniance)
{
	float angle = acos((Dot3(desiredForwardVector, this->GetActorForwardVector())) / (desiredForwardVector.Size() * this->GetActorForwardVector().Size()));
	float angleByRight = acos((Dot3(desiredForwardVector, this->GetActorRightVector())) / (desiredForwardVector.Size() * this->GetActorRightVector().Size()));
	if (angleByRight > (PI/2))
	{
		angle *= -1;
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Angle: %f"), angle);
	FRotator rotation = FRotator(0.0f, 0.0f, 0.0f);
	rotation.Yaw += ((angle) * deltaTime * _rotationSpeed);
	this->AddActorLocalRotation(rotation);
}

void ABaseEnemy::OverlapTriggered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<IIAttackable>(OtherActor) != nullptr)
	{
		IIAttackable* overlapped = Cast<IIAttackable>(OtherActor);
		if (overlapped->_team != this->_team)
		{
			if (_attackTarget == nullptr || overlapped->_prioritory > Cast<IIAttackable>(_attackTarget)->_prioritory)
			{
				_attackTarget = OtherActor;
			}
		}
	}
}
