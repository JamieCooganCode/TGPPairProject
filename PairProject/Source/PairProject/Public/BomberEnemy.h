// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "BomberEnemy.generated.h"

/**
 * 
 */
UCLASS()
class PAIRPROJECT_API ABomberEnemy : public ABaseEnemy
{
	GENERATED_BODY()
public:
	ABomberEnemy();
	virtual void Tick(float DeltaTime) override;
	virtual void Move(float deltaTime, FVector directionToTarget);
	virtual void Attack(float deltaTime, FVector directionToTarget);
	virtual void Rotate(float deltaTime, FVector desiredForwardVector, float leniance = 10.0f);
	virtual void DealDamage(float damageDealt);
	virtual Team GetTeam();

	bool _exploding;
	float _explosionCountdown = 3.0f;
};
