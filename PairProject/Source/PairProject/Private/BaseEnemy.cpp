// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseEnemy.h"
#include "PairProject/Public/IAttackable.h"
#include "PairProject/Public/BaseAttack.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	_movementComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MovementComponent"));
	RootComponent = _movementComponent;
}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	if (_movementComponentMesh != nullptr)
	{
		_movementComponent->SetStaticMesh(_movementComponentMesh);
	}
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (_attackTarget != nullptr)
	{
		FVector directionToTarget = _attackTarget->GetActorLocation() - this->RootComponent->GetComponentLocation();
		if (directionToTarget.Size() <= _attackRange)
		{
			Attack(DeltaTime, directionToTarget);
		}
		else
		{
			Move(DeltaTime, directionToTarget);
		}

		Rotate(DeltaTime, directionToTarget, 10.0f);
	}
}

void ABaseEnemy::Move(float deltaTime, FVector directionToTarget)
{
	directionToTarget.Normalize();
	FVector myPosition = this->RootComponent->GetComponentLocation();
	FVector newPosition = myPosition + (directionToTarget * _movementSpeed);
	this->SetActorLocation(FMath::VInterpTo(this->GetActorLocation(), newPosition, deltaTime, 2.0f));
}

void ABaseEnemy::Attack(float deltaTime, FVector directionToTarget)
{
	if (_timeSinceLastAttack > _attackCooldown)
	{
		UClass* test = _attackComponent;
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

IIAttackable::Team ABaseEnemy::GetTeam()
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