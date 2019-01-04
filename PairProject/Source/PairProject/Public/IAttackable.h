// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IAttackable.generated.h"

UENUM(BlueprintType)
enum class Team : uint8
{
	blue = 0 UMETA(DisplayName = "Blue"),
	red = 1 UMETA(DisplayName = "Red"),
	yellow = 2 UMETA(DisplayName = "Yellow")
};

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
	
protected:
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	Team _team;
	//The higher the prioritory, the more important it is to attack.
	int _prioritory = 0;
	virtual void DealDamage(float damageDealt) = 0;
	virtual Team GetTeam() = 0;
};
