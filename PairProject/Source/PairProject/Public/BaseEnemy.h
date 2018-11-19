// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEnemy.generated.h"

class ACharacter;

UCLASS()
class PAIRPROJECT_API ABaseEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseEnemy();

	UPROPERTY(EditAnywhere, Category = "Stats")
	int damage;
	UPROPERTY(EditAnywhere, Category = "Stats")
	int health;
	UPROPERTY(EditAnywhere, Category = "Stats")
	float sightRange;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	ACharacter* thePlayer;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Movement(float deltaTime);
	virtual void Attack(float deltaTime);
	
	
};
