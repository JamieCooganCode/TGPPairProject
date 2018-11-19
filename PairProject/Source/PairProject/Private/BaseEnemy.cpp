// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseEnemy.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	thePlayer = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseEnemy::Movement(float deltaTime)
{

}

void ABaseEnemy::Attack(float deltaTime)
{

}