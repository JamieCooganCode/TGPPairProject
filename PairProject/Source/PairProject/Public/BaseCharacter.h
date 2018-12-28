// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class StaticMeshComponenet;
class UCharacterMovementComponent;


UCLASS()
class PAIRPROJECT_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

	UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Management")
		bool isPossessed = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	const float MaxHealth = 20.0f;
	const float MaxMana = 10.0f;
	const float MaxStamina = 10.0f;
	const float BasicAttackDamage = 5.0f;
	const float SpecialAttackDamage = 10.0f;
	
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Attacks")
		bool Attacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Movement")
		FVector CurrentVelocity;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent * PlayerBodyMeshComponent;

	//third person camera
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCameraComponent* ThirdPersonCameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USpringArmComponent* CameraSpringArm;


	//Camera Methods
	FVector2D CameraInput;
	void PitchCamera(float axisValue);
	void YawCamera(float axisValue);

	UFUNCTION(BlueprintCallable, Category = "Camera_SetUp")
		void SetUpCamera();

	UFUNCTION(BlueprintCallable, Category = "Camera_SetUp")
		void SetUpCameraArm();

	UFUNCTION(BlueprintCallable, Category = "Camera_SetUp")
		void RotatePlayer();


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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Statistics")
		float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Statistics")
		float CurrentMana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Statistics")
		float CurrentStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Statistics")
		float CurrentAttackDamage;
	

	void MoveToPosition(FVector position);
};
