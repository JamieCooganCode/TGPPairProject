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
	float _damage = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Stats")
	float _movementSpeed = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Stats")
	float _rotationSpeed = 3.0f;
	UPROPERTY(EditAnywhere, Category = "Stats")
	float _sightRange;
	UPROPERTY(EditAnywhere, Category = "Attack")
	AActor* _attackTarget;
	UPROPERTY(EditAnywhere, Category = "Attack")
	float _attackRange;
	UPROPERTY(EditAnywhere, Category = "Attack")
	float _attackCooldown;
	UPROPERTY(EditAnywhere, Category = "Attack")
	float _timeSinceLastAttack; 

	

	//////////////////////////////
	UStaticMeshComponent* _movementComponent;
	UPROPERTY(EditAnywhere, Category = "Stats")
	UStaticMesh* _movementComponentMesh;
	UPROPERTY(EditAnywhere, Category = "Stats")
	class USphereComponent* _sightSphere;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TSubclassOf<class UBaseAttack> _attackComponent;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Move(float deltaTime, FVector directionToTarget);
	virtual void Attack(float deltaTime, FVector directionToTarget);
	virtual void Rotate(float deltaTime, FVector desiredForwardVector, float leniance = 10.0f);
	virtual void DealDamage(float damageDealt);
	virtual Team GetTeam();

	//Animation Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
		bool _attacking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
		float _currentMovementSpeed;
	
};
