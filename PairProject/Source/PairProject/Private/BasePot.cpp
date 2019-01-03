// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePot.h"
#include "Components/SphereComponent.h"

// Sets default values
ABasePot::ABasePot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PotCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Pot_Collider"));
}

// Called when the game starts or when spawned
void ABasePot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasePot::SpawnPickup()
{

}

void ABasePot::Remove()
{
	this->Destroy();
}