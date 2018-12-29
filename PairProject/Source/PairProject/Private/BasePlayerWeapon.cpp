// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayerWeapon.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABasePlayerWeapon::ABasePlayerWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AttackCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Attack_Collider"));
	SwordMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sword_Mesh"));
}

// Called when the game starts or when spawned
void ABasePlayerWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePlayerWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

