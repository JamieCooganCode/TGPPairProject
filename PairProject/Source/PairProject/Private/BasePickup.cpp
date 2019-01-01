// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePickup.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABasePickup::ABasePickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	pickupCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Pickup_Collider"));
	pickupModel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("pickup_Model"));

}

// Called when the game starts or when spawned
void ABasePickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasePickup::AfterPickedUp()
{
	this->Destroy();
}