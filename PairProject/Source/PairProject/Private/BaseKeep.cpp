// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseKeep.h"
#include "Components/BoxComponent.h"

// Sets default values
ABaseKeep::ABaseKeep()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	KeepWall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall"));
	KeepBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
}

// Called when the game starts or when spawned
void ABaseKeep::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseKeep::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

