// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameFramework/Actor.h"
#include "BaseEnemy.h"
#include "BasePlayerWeapon.generated.h"


class UBoxComponent;
class StaticMeshComponent;

UCLASS()
class PAIRPROJECT_API ABasePlayerWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePlayerWeapon();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack_Collider")
		UBoxComponent * AttackCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sword")
		UStaticMeshComponent * SwordMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float WeaponDamage;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void OnBeginSwordOverlap(TArray<AActor*> otheractors);
};
