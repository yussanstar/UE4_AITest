// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_AITestGameMode.h"
#include "UE4_AITestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_AITestGameMode::AUE4_AITestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
