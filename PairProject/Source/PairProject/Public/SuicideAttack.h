// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAttack.h"
#include "SuicideAttack.generated.h"

/**
 * 
 */
UCLASS()
class PAIRPROJECT_API USuicideAttack : public UBaseAttack
{
	GENERATED_BODY()
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
