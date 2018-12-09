// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseAttack.h"
#include "Components/PrimitiveComponent.h"

// Sets default values for this component's properties
UBaseAttack::UBaseAttack()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UBaseAttack::BeginPlay()
{
	Super::BeginPlay();
	this->SetGenerateOverlapEvents(true);
	// ...
	
}


// Called every frame
void UBaseAttack::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	this->OnComponentBeginOverlap.AddDynamic(this, &UBaseAttack::OverlapTriggered);

	// ...
}

void UBaseAttack::OverlapTriggered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

