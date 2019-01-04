// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "FreezeEnemy.generated.h"

/**
 * 
 */
UCLASS()
class PAIRPROJECT_API AFreezeEnemy : public ABaseEnemy
{
	GENERATED_BODY()
public:
	AFreezeEnemy();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void Move(float deltaTime, FVector directionToTarget);
	virtual void Attack(float deltaTime, FVector directionToTarget);
	virtual void Rotate(float deltaTime, FVector desiredForwardVector, float leniance = 10.0f);
	virtual void DealDamage(float damageDealt);
	virtual Team GetTeam();

	virtual void OverlapTriggered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
