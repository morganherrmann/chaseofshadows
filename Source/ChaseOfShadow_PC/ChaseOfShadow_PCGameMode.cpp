// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChaseOfShadow_PCGameMode.h"
#include "ChaseOfShadow_PCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChaseOfShadow_PCGameMode::AChaseOfShadow_PCGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
