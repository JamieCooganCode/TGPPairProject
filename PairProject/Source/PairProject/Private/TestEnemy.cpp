// Fill out your copyright notice in the Description page of Project Settings.

#include "TestEnemy.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATestEnemy::ATestEnemy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestEnemy::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATestEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Movement(DeltaTime);
	Attack(DeltaTime);
}

void ATestEnemy::Movement(float deltaTime)
{
	FVector movementDirection = this->GetActorLocation() - thePlayer->GetActorLocation();
	if (movementDirection.Size() <= sightRange)
	{
		movementDirection.Normalize();
		SetActorRelativeLocation(FVector(this->GetActorLocation().X + movementDirection.X, this->GetActorLocation().Y + movementDirection.Y, this->GetActorLocation().Z + movementDirection.Z));
	}
}

void ATestEnemy::Attack(float deltaTime)
{

}



