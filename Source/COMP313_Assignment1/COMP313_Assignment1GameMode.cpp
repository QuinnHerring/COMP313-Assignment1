// Copyright Epic Games, Inc. All Rights Reserved.

#include "COMP313_Assignment1GameMode.h"
#include "COMP313_Assignment1Character.h"
#include "UObject/ConstructorHelpers.h"

ACOMP313_Assignment1GameMode::ACOMP313_Assignment1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
