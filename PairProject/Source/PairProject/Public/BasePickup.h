// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePickup.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class PAIRPROJECT_API ABasePickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePickup();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "pickup_collider")
		USphereComponent * pickupCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent * pickupModel;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void AfterPickedUp();
	
};
