// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PairProject/Public/IAttackable.h"
#include "BaseCharacter.generated.h"

class StaticMeshComponenet;
class UCharacterMovementComponent;
class UBoxComponent;

UENUM(BlueprintType)
enum AttackType
{
	none UMETA(DisplayName = "None"),
	basic UMETA(DisplayName = "basic"),
	comboOne UMETA(DisplayName = "comboOne"),
	comboTwo UMETA(DisplayName = "comboTwo"),
	SpecialB UMETA(DisplayName = "SpecialB"),
	Block UMETA(DisplayName = "Block"),
	YAttack UMETA(DisplayName = "Yattack"),
};

UCLASS()
class PAIRPROJECT_API ABaseCharacter : public ACharacter, public IIAttackable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

	UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Management")
		bool isPossessed = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player current Attack")
		TEnumAsByte<AttackType> CurrentAttack = none;

	FString AttackList;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	const float MaxHealth = 20.0f;
	const float MaxMana = 10.0f;
	const float MaxStamina = 10.0f;
	const float BasicAttackDamage = 5.0f;
	const float SpecialAttackDamage = 10.0f;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Input")
		bool StartButtonHit = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Input")
		bool AButtonHit = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Movement")
		FVector CurrentVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Movement")
		float CurrentRotation = 0;

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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Attacks")
		bool Attacking;


	UFUNCTION(BlueprintCallable)
		void TakeDamage(float attackValue);


	void MoveToPosition(FVector position); //improve

	UFUNCTION(BlueprintCallable)
	void IncreaseCurrentHealth(float value);

	UFUNCTION(BlueprintCallable)
	void IncreseCurrentMana(float value);

	UFUNCTION(BlueprintCallable)
	void IncreaseCurrentStamina(float value);

	UFUNCTION(BlueprintCallable)
	void DecreaseCurrentHealth(float value);

	UFUNCTION(BlueprintCallable)
	void DecreaseCurrentMana(float value);

	UFUNCTION(BlueprintCallable)
	void DecreaseCurrentStamina(float value);

	UFUNCTION(BlueprintCallable)
		void FreezePlayerInPlace();



	// IAttackable Interface Stuff
	UPROPERTY(EditAnywhere, Category = "IAttackable")
	Team _startTeam;
	virtual void DealDamage(float damageDealt);
	virtual Team GetTeam();
};
