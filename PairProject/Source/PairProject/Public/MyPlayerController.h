// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BaseCharacter.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PAIRPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

	TArray<AActor*> characterArray;
	
public:

	UPROPERTY(BlueprintReadWrite)
		ABaseCharacter * possessedCharacter;

	UFUNCTION(BlueprintCallable)
		ABaseCharacter* FindPossesedPlayer();

	UFUNCTION(BlueprintCallable)
		void PossessPlayer();

	virtual void Tick(float DeltaTime) override;

	void SetupInputComponent(class UInputComponent* PlayerInputComponent);

	void UpDPadDown();

	void SendPlayerToLocation(FVector location);
};
