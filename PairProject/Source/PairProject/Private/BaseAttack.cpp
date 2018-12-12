// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseAttack.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/Actor.h"
#include "PairProject/Public/IAttackable.h"

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
	this->OnComponentBeginOverlap.AddDynamic(this, &UBaseAttack::OverlapTriggered);
	timeExisted = 0.0f;
	// ...
	
}


// Called every frame
void UBaseAttack::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	timeExisted += DeltaTime;
	if (timeExisted >= _attackDuration)
	{
		this->DestroyComponent();
	}
	// ...
}

void UBaseAttack::OverlapTriggered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr)
	{
		IIAttackable* actor;
		if ((actor = Cast<IIAttackable>(OtherActor)) != nullptr)
		{
			IIAttackable* me;
			if ((me = Cast<IIAttackable>(this->GetOwner())) != nullptr)
			{
				if (me->GetTeam() != actor->GetTeam())
				{
					actor->DealDamage(_attackDamage);
				}
			}
			else
			{
				actor->DealDamage(_attackDamage);
			}
		}
	}
}

