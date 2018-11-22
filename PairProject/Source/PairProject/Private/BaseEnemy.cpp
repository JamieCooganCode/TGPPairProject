// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseEnemy.h"
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
	//DO ATTACK THING
}


void ABaseEnemy::DealDamage(float damageDealt)
{
	_health -= damageDealt;
	if (_health <= 0.0f)
	{
		this->Destroy();
	}
}