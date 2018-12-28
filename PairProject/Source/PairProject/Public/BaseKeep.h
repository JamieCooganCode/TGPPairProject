// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseKeep.generated.h"

class StaticMeshComponent;
class UBoxComponent;

UCLASS()
class PAIRPROJECT_API ABaseKeep : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseKeep();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* KeepWall;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UBoxComponent* KeepBoxCollider;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
