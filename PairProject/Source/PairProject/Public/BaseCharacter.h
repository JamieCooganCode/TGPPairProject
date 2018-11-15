// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

//class StaticMeshComponenet;
//class UCharacterMovementComponent;

UCLASS()
class PAIRPROJECT_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	//UCharacterMovementComponent* CharacterMovementCopmonenet = GetCharacterMovement();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(EditAnywheere, BlueprintReadWrite, Category = "Player_Movement")
		//FVector CurrentVelocity;

	//UPROPERTY(VisibleAnywhere)
		//UStaticMeshComponent * PlayerBodyMeshComponenet;

	//Controller Input functions
	virtual void MoveForward(float value);
	virtual void MoveRight(float value);

	virtual void LeftTriggerDown();
	virtual void LeftBumberDown();
	virtual void UpDPadDown();
	virtual void RightDPadDown();
	virtual void DownDPadDown();
	virtual void LeftDPadDown();
	virtual void BackButtonDown();
	virtual void StartButtonDown();
	virtual void XButtonDown();
	virtual void YButtonDown();
	virtual void BButtonDown();
	virtual void AButtonDown();
	virtual void RightBumperDown();
	virtual void RightTriggerDown();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
