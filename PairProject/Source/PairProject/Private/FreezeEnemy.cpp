// Fill out your copyright notice in the Description page of Project Settings.

#include "FreezeEnemy.h"
#include "PairProject/Public/BaseCharacter.h"

void AFreezeEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFreezeEnemy::Move(float deltaTime, FVector directionToTarget)
{
	Super::Move(deltaTime, directionToTarget);
}

void AFreezeEnemy::Attack(float deltaTime, FVector directionToTarget)
{
	if (Cast<ABaseCharacter>(_attackTarget))
	{
		//TODO: Call Player Freeze Function.
	}
}

void AFreezeEnemy::Rotate(float deltaTime, FVector desiredForwardVector, float leniance = 10.0f)
{
	Super::Rotate(deltaTime, desiredForwardVector, leniance);
}

void AFreezeEnemy::DealDamage(float damageDealt)
{
	Super::DealDamage(damageDealt);
}

Team AFreezeEnemy::GetTeam()
{
	return Super::GetTeam();
}

void AFreezeEnemy::OverlapTriggered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<ABaseCharacter>(OtherActor) != nullptr)
	{
		IIAttackable* overlapped = Cast<IIAttackable>(OtherActor);
		if (overlapped->_team != this->_team)
		{
			if (_attackTarget == nullptr || overlapped->_prioritory > Cast<IIAttackable>(_attackTarget)->_prioritory)
			{
				_attackTarget = OtherActor;
			}
		}
	}
}
