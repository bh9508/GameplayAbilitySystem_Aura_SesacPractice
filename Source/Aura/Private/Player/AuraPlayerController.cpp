// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/AuraPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "../../Public/Interaction/EnemyInterface.h"

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;

}

void AAuraPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();
}

void AAuraPlayerController::CursorTrace()
{
	FHitResult CursorHit;
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
	if (!CursorHit.bBlockingHit) return;

	LastActor = ThisActor;
	ThisActor = CursorHit.GetActor();

	/**
	Line trace from cursor - Several Scenarios
	A. LastActor is null && ThisActor is null : 
		Do nothing
	B. LastActor is null && ThisActor is valid : 
		Hovering for this actor first time! (first frame, so highlight ThisActor)
	C. LastActor is valid && ThisActor is null : 
		We are no longer Hovering. (last frame, so unhighlight LastActor)
	D. Both Actors are valid, but LastActor != ThisActor : 
		Hovering one - and Hovering Different! (unhighlight LastActor and highlight ThisActor)
	E. Both Actors are valid, but the same Actor : 
		Hovering continue. (Do nothing)
	**/

	if (LastActor == nullptr)
	{
		if (ThisActor != nullptr)
		{
			// Case B
			ThisActor->HighlightActor();
		}
		else
		{
			// Case A
		}
	}
	else // LastActor is valid
	{
		if (ThisActor == nullptr)
		{
			// Case C
			LastActor->UnHighlightActor();
		}
		else // both are valid
		{
			if (LastActor != ThisActor)
			{
				// Case D
				LastActor->UnHighlightActor();
				ThisActor->HighlightActor();
			}
			else
			{
				// Case E
			}
		}
	}

	
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(AuraContext);
	
	UEnhancedInputLocalPlayerSubsystem* Subsystem = 
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (Subsystem)
	{
		Subsystem->AddMappingContext(AuraContext, 0);
	}

	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	// Cursor Settings
	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);

}

void AAuraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = 
		CastChecked<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);

}

void AAuraPlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();

	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	// Forward Vector based on YawRotation vector 
	// FRotationMatrix: ĳ������ �߽��� (0,0,0)�� ��Ȳ���� �� �࿡ ���� �󸶳� ȸ���Ǿ� �ִ��� ��Ÿ��. 
	// ���⼭ X�࿡ �ش��ϴ� ���� ĳ���Ͱ� �ٶ󺸴� �����̴�. (�𸮾��� ���� �� ����: X���� ���Ĺ�, Y���� �¿� ���� )
	// GetUnitAxis: ����� ��ǥ��鿡�� �ڽ��� ã�� ���� ���� ������ '����'�� �������� �Լ�.(Unit vector length = 1)
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	// why not assert? 
	// move is potentially called every frame, so might be called early before the controll pawn is valid. 
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}
}


