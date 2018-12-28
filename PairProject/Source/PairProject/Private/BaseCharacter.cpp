// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerBodyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Player Body"));
	CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	ThirdPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Third Camera"));

	CameraSpringArm->SetupAttachment(PlayerBodyMeshComponent);
	CameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(-35.0f, 0.0f, 0.0f));
	CameraSpringArm->TargetArmLength = 600.0f;

	ThirdPersonCameraComponent->SetupAttachment(CameraSpringArm, USpringArmComponent::SocketName);

	CurrentHealth = MaxHealth;
	CurrentStamina = MaxStamina;
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GetActorForwardVector() then GetActorRightVector() ThirdPersonCameraComponent->GetForwardVector() ThirdPersonCameraComponent->GetRightVector()
	AddMovementInput(GetActorForwardVector(), CurrentVelocity.X * DeltaTime);
	AddMovementInput(GetActorRightVector(), CurrentVelocity.Y * DeltaTime);

	
	FTransform t = CameraSpringArm->GetRelativeTransform();
	FRotator r = t.GetRotation().Rotator();
	r.Yaw += 2 * CameraInput.X; //yaw scale

	CameraSpringArm->SetRelativeRotation(FRotator(r.Pitch, r.Yaw, 0));
	
	FRotator newPitchRotation = CameraSpringArm->GetComponentRotation(); //in and out : works
	newPitchRotation.Pitch = FMath::Clamp(newPitchRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
	CameraSpringArm->SetWorldRotation(newPitchRotation);

	if (Attacking)
		Attacking = false;
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Right Thumbstick Vertical", this, &ABaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Right Thumbstick Horizontal", this, &ABaseCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Left ThumbStick Vertical", this, &ABaseCharacter::PitchCamera);
	PlayerInputComponent->BindAxis("Left Thumbstick Horizontal", this, &ABaseCharacter::YawCamera);

	PlayerInputComponent->BindAction("Left Trigger", IE_Pressed, this, &ABaseCharacter::LeftTriggerDown);
	PlayerInputComponent->BindAction("Left Bumber", IE_Pressed, this, &ABaseCharacter::LeftBumberDown);

	PlayerInputComponent->BindAction("Up D-Pad", IE_Pressed, this, &ABaseCharacter::UpDPadDown);
	PlayerInputComponent->BindAction("Right D-Pad", IE_Pressed, this, &ABaseCharacter::RightDPadDown);
	PlayerInputComponent->BindAction("Down D-Pad", IE_Pressed, this, &ABaseCharacter::DownDPadDown);
	PlayerInputComponent->BindAction("Left D-Pad", IE_Pressed, this, &ABaseCharacter::LeftDPadDown);

	PlayerInputComponent->BindAction("Back Button", IE_Pressed, this, &ABaseCharacter::BackButtonDown);
	PlayerInputComponent->BindAction("Start Button", IE_Pressed, this, &ABaseCharacter::StartButtonDown);

	PlayerInputComponent->BindAction("X Button", IE_Pressed, this, &ABaseCharacter::XButtonDown);
	PlayerInputComponent->BindAction("Y Button", IE_Pressed, this, &ABaseCharacter::YButtonDown);
	PlayerInputComponent->BindAction("B Button", IE_Pressed, this, &ABaseCharacter::BButtonDown);
	PlayerInputComponent->BindAction("A Button", IE_Pressed, this, &ABaseCharacter::AButtonDown);

	PlayerInputComponent->BindAction("Right Bumper", IE_Pressed, this, &ABaseCharacter::RightBumperDown);
	PlayerInputComponent->BindAction("Right Trigger", IE_Pressed, this, &ABaseCharacter::RightTriggerDown);
}

void ABaseCharacter::SetUpCameraArm()
{	
	CameraSpringArm->AttachToComponent(PlayerBodyMeshComponent, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName);
}

void ABaseCharacter::SetUpCamera()
{			
	ThirdPersonCameraComponent->AttachToComponent(CameraSpringArm, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName);
}

void ABaseCharacter::MoveForward(float value)
{
	CurrentVelocity.X = value * -100;
}

void ABaseCharacter::RotatePlayer()
{
	
}

void ABaseCharacter::MoveRight(float value)
{
	CurrentVelocity.Y = value * 100;
}

void ABaseCharacter::YawCamera(float value)
{
	CameraInput.X = value;
}

void ABaseCharacter::PitchCamera(float value)
{
	CameraInput.Y = value;
}

void ABaseCharacter::LeftTriggerDown()
{

}

void ABaseCharacter::LeftBumberDown()
{

}

void ABaseCharacter::UpDPadDown()
{

}

void ABaseCharacter::RightDPadDown()
{

}

void ABaseCharacter::DownDPadDown()
{

}

void ABaseCharacter::LeftDPadDown()
{

}

void ABaseCharacter::BackButtonDown()
{

}

void ABaseCharacter::StartButtonDown()
{

}

void ABaseCharacter::XButtonDown()
{
	Attacking = true;
}

void ABaseCharacter::YButtonDown()
{

}

void ABaseCharacter::BButtonDown()
{

}

void ABaseCharacter::AButtonDown()
{

}

void ABaseCharacter::RightBumperDown()
{

}

void ABaseCharacter::RightTriggerDown()
{

}
