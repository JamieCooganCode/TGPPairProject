// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PairProject/Public/IAttackable.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEnemy.generated.h"

UCLASS()
class PAIRPROJECT_API ABaseEnemy : public AActor, public IIAttackable     
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "Stats")
	float _health;
	UPROPERTY(EditAnywhere, Category = "Stats")
	float _damage;
	UPROPERTY(EditAnywhere, Category = "Stats")
	float _movementSpeed;
	UPROPERTY(EditAnywhere, Category = "Attack")
	AActor* _attackTarget;
	UPROPERTY(EditAnywhere, Category = "Attack")
	float _attackRange;
	
	UStaticMeshComponent* _movementComponent;
	UPROPERTY(EditAnywhere, Category = "Mesh")
	UStaticMesh* _movementComponentMesh;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TSubclassOf<class UBaseAttack> _attackComponent;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Move(float deltaTime, FVector directionToTarget);
	virtual void Attack(float deltaTime, FVector directionToTarget);
	virtual void DealDamage(float damageDealt);
	virtual Team GetTeam();
	
};
