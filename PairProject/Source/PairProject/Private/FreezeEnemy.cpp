// Fill out your copyright notice in the Description page of Project Settings.

#include "FreezeEnemy.h"
#include "Components/SphereComponent.h"
#include "PairProject/Public/BaseCharacter.h"


AFreezeEnemy::AFreezeEnemy() : ABaseEnemy()
{
}
void AFreezeEnemy::BeginPlay()
{
	_team = _startTeam;
	Super::BeginPlay();
}

void AFreezeEnemy::Tick(float DeltaTime)
{
	if (_attackTarget != nullptr)
	{
		if (_attackTarget2 != nullptr)
		{
			FVector temp, temp2;
			temp = this->RootComponent->GetComponentLocation() - _attackTarget->GetActorLocation();
			temp2 = this->RootComponent->GetComponentLocation() - _attackTarget2->GetActorLocation();
			if (temp.Size() > temp2.Size())
			{
				AActor* tempActor = _attackTarget;
				_attackTarget = _attackTarget2;
				_attackTarget2 = tempActor;
			}
		}
		FVector directionToTarget = _attackTarget->GetActorLocation() - this->RootComponent->GetComponentLocation();
		if (directionToTarget.Size() < _sightRange)
		{
			Rotate(DeltaTime, directionToTarget, 10.0f);
			float angle = acos((Dot3(directionToTarget, this->GetActorForwardVector())) / (directionToTarget.Size() * this->GetActorForwardVector().Size()));
			if (angle < 0.261799f)
			{

				if (directionToTarget.Size() <= _attackRange)
				{
					Attack(DeltaTime, directionToTarget);
					_currentMovementSpeed = 0.0f;
				}
				else
				{
					Move(DeltaTime, directionToTarget);
				}
			}
		}
	}
}

void AFreezeEnemy::Move(float deltaTime, FVector directionToTarget)
{
	Super::Move(deltaTime, directionToTarget);
}

void AFreezeEnemy::Attack(float deltaTime, FVector directionToTarget)
{
	if (Cast<ABaseCharacter>(_attackTarget))
	{
		if (_timeSinceLastAttack > _attackCooldown)
		{
			Cast<ABaseCharacter>(_attackTarget)->FreezePlayerInPlace();
			_timeSinceLastAttack = 0.0f;
		}
		else
		{
			_timeSinceLastAttack += deltaTime;
		}
	}
}

void AFreezeEnemy::Rotate(float deltaTime, FVector desiredForwardVector, float leniance)
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
				UE_LOG(LogTemp, Error, TEXT("Found Target"));
				_attackTarget = OtherActor;
			}
		}
	}
}
