// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleLevelGameMode.h"
#include "PuzzleLevelCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzleLevelGameMode::APuzzleLevelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
