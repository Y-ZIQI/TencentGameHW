// Copyright Epic Games, Inc. All Rights Reserved.

#include "android1GameMode.h"
#include "android1Character.h"
#include "UObject/ConstructorHelpers.h"

Aandroid1GameMode::Aandroid1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
