// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/World.h"

void AMyPlayerController::Tick(float delta)
{
	Super::Tick(delta);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABaseCharacter::StaticClass(), characterArray);

	for (int i = 0; i < sizeof(characterArray); i++) //this currently causes breakpoint
	{
		ABaseCharacter *currentPlayer = Cast<ABaseCharacter>(characterArray[i]);

		if (currentPlayer->isPossessed == true)
			possessedCharacter = currentPlayer;
	}
}
