// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayerAttackComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values for this component's properties
UBasePlayerAttackComponent::UBasePlayerAttackComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	AttackCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Attack_Collider"));
	SwordMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sword_Mesh"));

	AttackCollider->InitBoxExtent(FVector(32.0f, 32.0f, 32.0f));
	AttackCollider->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	AttackCollider->BodyInstance.SetCollisionProfileName("Overlap blade");
	AttackCollider->SetGenerateOverlapEvents(true);
}


// Called when the game starts
void UBasePlayerAttackComponent::BeginPlay()
{
	Super::BeginPlay();

	
	
}


// Called every frame
void UBasePlayerAttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

