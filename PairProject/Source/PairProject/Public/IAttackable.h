// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IAttackable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIAttackable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PAIRPROJECT_API IIAttackable
{
	GENERATED_BODY()
public:
	enum Team
	{
		blue = 0,
		red,
		yellow
	};
protected:
	Team _team;
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void DealDamage(float damageDealt) = 0;
	virtual Team GetTeam() = 0;
};
