// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/World.h"

void AMyPlayerController::Tick(float delta)
{
	Super::Tick(delta);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABaseCharacter::StaticClass(), characterArray); //finds all player

	KeepOnePosition = FVector(14, 3350, 0);
	KeepTwoPosition = FVector(4529, -2007, 0);
	KeepThreePosition = FVector(-2268, -3539, 0);

	//PossessPlayer();
	if (characterArray.Num() != 0)
	{
		possessedCharacter = FindPossesedPlayer();
		//SendPlayerToLocation(FVector(1000.0f, 0.0f, 0.0f));
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

		if (currentPlayer->isPossessed == false)
			nonPossessedPlayer = i;

		if (currentPlayer->isPossessed == true)
		{
			if (i == 0)
			{
				nonPossessedPlayer = 1;
			}
			else
			{
				nonPossessedPlayer = 0;
			}
			
			return currentPlayer;
		}
			
	}

	return NULL;
}

ABaseCharacter* AMyPlayerController::FindNonPossessedPlayer()
{
	for (int i = 0; i < characterArray.Num(); i++)
	{
		ABaseCharacter *currentPlayer = Cast<ABaseCharacter>(characterArray[i]);
		if (currentPlayer->isPossessed == false)
		{
			return currentPlayer;
		}
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
	ABaseCharacter *currentPlayer = Cast<ABaseCharacter>(characterArray[nonPossessedPlayer]);
	currentPlayer->PositionToMoveTo(position);
}

void AMyPlayerController::SendPlayerToKeep(int keepNumber)
{
	switch (keepNumber)
	{

	case 0:
		SendPlayerToLocation(KeepOnePosition);
		break;

	case 1:
		SendPlayerToLocation(KeepTwoPosition);
		break;

	case  2:
		SendPlayerToLocation(KeepThreePosition);
		break;

	default:
		break;
	}
}