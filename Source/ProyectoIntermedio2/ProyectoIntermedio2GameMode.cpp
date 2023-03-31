// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProyectoIntermedio2GameMode.h"
#include "ProyectoIntermedio2Character.h"
#include "UObject/ConstructorHelpers.h"

AProyectoIntermedio2GameMode::AProyectoIntermedio2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
