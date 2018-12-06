// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerBodyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Player Body"));
	PlayerCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));

	//AutoPossessPlayer = EAutoReceiveInput::Player0; //https://docs.unrealengine.com/en-us/Gameplay/HowTo/PossessPawns/Blueprints

	FVector CameraPos;
	CameraPos.X = 200.0f;
	CameraPos.Y = 0.0f;
	CameraPos.Z = 160.0f;
	FVector newCameraPos = PlayerBodyMeshComponent->GetComponentLocation() - CameraPos;
	PlayerCameraComponent->SetWorldLocation(newCameraPos);
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

	AddMovementInput(GetActorForwardVector(), CurrentVelocity.X * DeltaTime);
	AddMovementInput(GetActorRightVector(), CurrentVelocity.Y * DeltaTime);
	MoveCamera();
}


void ABaseCharacter::MoveCamera()
{
	FVector newCameraLocation = PlayerBodyMeshComponent->GetComponentLocation() - CameraPos;// -CameraPos;
	PlayerCameraComponent->SetWorldLocation(newCameraLocation);
}

void ABaseCharacter::SetCameraFacing()
{
	FVector CameraCurrentPos = PlayerCameraComponent->GetComponentLocation();
	FVector PlayerCurrentPos = PlayerBodyMeshComponent->GetComponentLocation();
	FVector CameraToPlayer = PlayerCurrentPos - CameraCurrentPos;

	//PlayerCameraComponent->SetWorldRotation(CameraToPlayer);
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Right Thumbstick Vertical", this, &ABaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Right Thumbstick Horizontal", this, &ABaseCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Left Thumbstick Vertical", this, &ABaseCharacter::ZoomCamera);
	PlayerInputComponent->BindAxis("Left Thumbstick Horizontal", this, &ABaseCharacter::RotateCamera);

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

void ABaseCharacter::MoveForward(float value)
{
	CurrentVelocity.X = value * 100;
}

void ABaseCharacter::MoveRight(float value)
{
	CurrentVelocity.Y = value * 100;
}

void ABaseCharacter::ZoomCamera(float value)
{

}

void ABaseCharacter::RotateCamera(float value)
{

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
