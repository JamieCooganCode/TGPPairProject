// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/World.h"

void AMyPlayerController::Tick(float delta)
{
	Super::Tick(delta);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABaseCharacter::StaticClass(), characterArray); //fiinds all player
	
	//PossessPlayer();
	if (characterArray.Num() != 0)
	{
		possessedCharacter = FindPossesedPlayer();
		SendPlayerToLocation(FVector(1000.0f, 0.0f, 0.0f));
	}
	
}

void AMyPlayerController::PossessPlayer() //hardcode currently
{
	APawn *pawn = Cast<APawn>(characterArray[0]);
	Possess(pawn);

	ABaseCharacter *currentPlayer = Cast<ABaseCharacter>(characterArray[0]);
	currentPlayer->isPossessed = true;
}

ABaseCharacter* AMyPlayerController::FindPossesedPlayer()
{
	for (int i = 0; i < characterArray.Num(); i++) 
	{
		ABaseCharacter *currentPlayer = Cast<ABaseCharacter>(characterArray[i]);

		if (currentPlayer->isPossessed == true)
			return currentPlayer;
	}

	return NULL;
}

void AMyPlayerController::SetupInputComponent(UInputComponent* PlayerInputComponent) //isnt called
{
	Super::SetupInputComponent();
	PlayerInputComponent->BindAction("Up D-Pad", IE_Pressed, this, &AMyPlayerController::UpDPadDown);	
	printf("setup");
}

void AMyPlayerController::UpDPadDown()
{
	printf("up hit");
	UnPossess();

	APawn *pawn = Cast<APawn>(characterArray[1]);
	Possess(pawn);
}

void AMyPlayerController::SendPlayerToLocation(FVector position)
{
	ABaseCharacter *currentPlayer = Cast<ABaseCharacter>(characterArray[1]);
	currentPlayer->MoveToPosition(position);
}