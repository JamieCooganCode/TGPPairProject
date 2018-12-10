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
		float angleToTarget = Dot3(this->GetActorForwardVector(), directionToTarget);
		if (directionToTarget.Size() <= _attackRange && angleToTarget < 20.0f && angleToTarget > -20.0f)
		{
			Attack(DeltaTime, directionToTarget);
		}
		else
		{
			Move(DeltaTime, directionToTarget);
		}
	}
}

void ABaseEnemy::Move(float deltaTime, FVector directionToTarget)
{
	directionToTarget.Normalize();
	FVector myPosition = this->RootComponent->GetComponentLocation();
	FVector newPosition = myPosition + (directionToTarget * _movementSpeed);
	this->SetActorLocation(FMath::VInterpTo(this->GetActorLocation(), newPosition, deltaTime, 2.0f));
	//TODO: ROTATE TO TARGET
}

void ABaseEnemy::Attack(float deltaTime, FVector directionToTarget)
{
	UClass* test = _attackComponent;
	UBaseAttack* attack = NewObject<UBaseAttack>(this, _attackComponent);
	attack->AttachTo(RootComponent);
	attack->SetRelativeLocation(FVector(_attackRange, 0.0f, 0.0f));
	attack->RegisterComponent();
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