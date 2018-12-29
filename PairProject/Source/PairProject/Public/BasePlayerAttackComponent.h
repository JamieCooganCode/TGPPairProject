// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BasePlayerAttackComponent.generated.h"

class UBoxComponent;
class StaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PAIRPROJECT_API UBasePlayerAttackComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBasePlayerAttackComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack_Collider")
		UBoxComponent * AttackCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sword")
		UStaticMeshComponent * SwordMesh;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//void OnBeginOverlap(class AActor* otheractor);
	
};
