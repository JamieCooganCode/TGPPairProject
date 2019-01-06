// Fill out your copyright notice in the Description page of Project Settings.

#include "SuicideAttack.h"


void USuicideAttack::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	timeExisted += DeltaTime;
	if (timeExisted >= _attackDuration)
	{
		this->GetOwner()->Destroy();
		this->DestroyComponent();
	}
}