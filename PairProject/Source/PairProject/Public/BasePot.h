// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePot.generated.h"


class USphereComponent;


UCLASS()
class PAIRPROJECT_API ABasePot : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void SpawnPickup();
	
	UFUNCTION(BlueprintCallable)
		void Remove();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USphereComponent * PotCollider;
};
