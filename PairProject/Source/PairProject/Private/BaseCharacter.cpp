// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/BoxComponent.h"
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
	_team = _startTeam;
	Super::BeginPlay();
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!frozen)
	{
		if (movingToPosition)
		{
			MoveToPosition(localPositionToGoTo);
			AddMovementInput(DirectionToGo, CurrentVelocity.Y * DeltaTime);

			if (CheckIfClose())
				movingToPosition = false;
		}
		else
		{
			AddMovementInput(GetActorForwardVector(), CurrentVelocity.Y * DeltaTime);
			AddMovementInput(GetActorRightVector(), CurrentVelocity.X * DeltaTime);
		}	
	}
	
	frozenTimer += 1;
	if (frozenTimer >= 200)
	{
		frozen = false;
		frozenTimer = 0;
	}
		
	
	FTransform t = CameraSpringArm->GetRelativeTransform();
	FRotator r = t.GetRotation().Rotator();
	r.Yaw += 2 * CameraInput.X; //yaw scale

	CameraSpringArm->SetRelativeRotation(FRotator(r.Pitch, r.Yaw, 0));
	
	FRotator newPitchRotation = CameraSpringArm->GetComponentRotation(); //in and out : works
	newPitchRotation.Pitch = FMath::Clamp(newPitchRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
	CameraSpringArm->SetWorldRotation(newPitchRotation);

	if (Attacking)
	{
		CurrentAttack = basic;
		Attacking = false;
	}
	else
	{
		CurrentAttack = none;
	}
		

	if (StartButtonHit)
		StartButtonHit = false;

	if (BackButtonHit)
		BackButtonHit = false;


	if (AttackList.Len() == 5)
	{
		if (AttackList.Find("Y"))
		{
			if (AttackList.Find("XXXXY"))
			{
				CurrentAttack = comboTwo;
			}
			else if (AttackList.Find("XXXY"))
			{
				CurrentAttack = comboOne;
			}
			else
			{
				CurrentAttack = YAttack;
			}
		}

		AttackList.Empty();
	}

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

void ABaseCharacter::FreezePlayerInPlace()
{
	//set movement to zero for 3 seconds
	UE_LOG(LogTemp, Error, TEXT("FROZEN"));
	CurrentVelocity.X = 0.0f;
	CurrentVelocity.Y = 0.0f;
	frozen = true;
}


void ABaseCharacter::PositionToMoveTo(FVector position)
{
	isPossessed = false;
	localPositionToGoTo = position;
	movingToPosition = true;
}

void ABaseCharacter::MoveToPosition(FVector position) //fix this
{
	FVector keepDirection;
	
	if (GetActorLocation().Y > position.Y)
	{
		DirectionToGo.Y = -1;
	}
	else
	{
		DirectionToGo.Y = 1;
	}

	if (GetActorLocation().X > position.X)
	{
		DirectionToGo.X = -1;
	}
	else
	{
		DirectionToGo.X = 1;
	}
	
	if (abs(position.X - GetActorLocation().X) > abs(position.Y - GetActorLocation().Y))
	{
		DirectionToGo.Y = DirectionToGo.Y * abs((position.Y - GetActorLocation().Y)/(position.X - GetActorLocation().X));
	}
	else
	{
		DirectionToGo.X = DirectionToGo.X * abs((position.X - GetActorLocation().X) / (position.X - GetActorLocation().X));
	}

	//speed is constant
	CurrentVelocity.X = 150;
	CurrentVelocity.Y = 150;

	//movingToPosition = true;
	DirectionToGo.Z = GetActorForwardVector().Z;
}

bool ABaseCharacter::CheckIfClose()
{
	if ((sqrt(pow((GetActorLocation().X - localPositionToGoTo.X), 2) + pow((GetActorLocation().Y - localPositionToGoTo.Y), 2))) <= 20)
	{
		CurrentVelocity.X = 0;
		CurrentVelocity.Y = 0;
		return true;
	}
	else
	{
		return false;
	}
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
	CurrentVelocity.Y = value * -150;
}

void ABaseCharacter::MoveRight(float value)
{
	CurrentVelocity.X = value * 150;
	CurrentRotation = value;
}

void ABaseCharacter::YawCamera(float value)
{
	CameraInput.X = value;
}

void ABaseCharacter::PitchCamera(float value)
{
	CameraInput.Y = value;
}

void ABaseCharacter::TakeDamage(float attackValue)
{
	CurrentHealth -= attackValue;

	if (CurrentHealth <= 0)
	{
		//done in the level blueprint so UI can be accessed
	}
} 

void ABaseCharacter::IncreaseCurrentHealth(float value)
{
	CurrentHealth += value;

	if (CurrentHealth > MaxHealth)
		CurrentHealth = MaxHealth;
}

void ABaseCharacter::IncreaseCurrentStamina(float value)
{
	CurrentStamina += value;

	if (CurrentStamina > MaxStamina)
		CurrentStamina = MaxStamina;
}

void ABaseCharacter::IncreseCurrentMana(float value)
{
	CurrentMana += value;

	if (CurrentMana > MaxMana)
		CurrentMana = MaxMana;
}

void ABaseCharacter::DecreaseCurrentHealth(float value)
{
	CurrentHealth -= value;

	if (CurrentHealth < 0)
		CurrentHealth = 0;
}

void ABaseCharacter::DecreaseCurrentStamina(float value)
{
	CurrentStamina -= value;
	if (CurrentStamina < 0)
		CurrentStamina = 0;
}

void ABaseCharacter::DecreaseCurrentMana(float value)
{
	CurrentMana -= value;

	if (CurrentMana < 0)
		CurrentMana = 0;
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
	BackButtonHit = true;
}

void ABaseCharacter::StartButtonDown()
{
	StartButtonHit = true;
}

void ABaseCharacter::XButtonDown()
{
	Attacking = true;
	AttackList.Append("X");
}

void ABaseCharacter::YButtonDown()
{
	AttackList.Append("Y");
}

void ABaseCharacter::BButtonDown()
{
	AttackList.Append("B");
	CurrentAttack = SpecialB;
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

//IAttackable Interface Stuff
void ABaseCharacter::DealDamage(float damageDealt)
{
	this->DecreaseCurrentHealth(damageDealt);
}

Team ABaseCharacter::GetTeam()
{
	return _team;
}