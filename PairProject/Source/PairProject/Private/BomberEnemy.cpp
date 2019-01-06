// Fill out your copyright notice in the Description page of Project Settings.

#include "PairProject/Public/IAttackable.h"
#include "PairProject/Public/BaseAttack.h"
#include "BomberEnemy.h"

ABomberEnemy::ABomberEnemy() : ABaseEnemy()
{

}

void ABomberEnemy::Tick(float DeltaTime)
{
	if (!_exploding)
	{
		Super::Tick(DeltaTime);
	}
	else
	{
		_explosionCountdown -= DeltaTime;
		if (_explosionCountdown <= 0.0f)
		{
			UBaseAttack* attack = NewObject<UBaseAttack>(this, _attackComponent);
			attack->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
			attack->SetRelativeLocation(FVector(_attackRange, 0.0f, 0.0f));
			attack->RegisterComponent();
		}
	}
}

void ABomberEnemy::Move(float deltaTime, FVector directionToTarget)
{
	Super::Move(deltaTime, directionToTarget);
}

void ABomberEnemy::Attack(float deltaTime, FVector directionToTarget)
{
	_exploding = true;
	_attacking = true;
}

void ABomberEnemy::Rotate(float deltaTime, FVector desiredForwardVector, float leniance)
{
	Super::Rotate(deltaTime, desiredForwardVector, leniance);
}

void ABomberEnemy::DealDamage(float damageDealt)
{
	Super::DealDamage(damageDealt);
}

Team ABomberEnemy::GetTeam()
{
	return Super::GetTeam();
}



