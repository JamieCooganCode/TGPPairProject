// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "TestEnemy.generated.h"

/**
 * 
 */
UCLASS()
class PAIRPROJECT_API ATestEnemy : public ABaseEnemy
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	ATestEnemy();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Movement(float deltaTime);
	virtual void Attack(float deltaTime);
	
	
};
