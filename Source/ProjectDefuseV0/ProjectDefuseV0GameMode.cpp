// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectDefuseV0GameMode.h"
#include "ProjectDefuseV0Character.h"
#include "UObject/ConstructorHelpers.h"

AProjectDefuseV0GameMode::AProjectDefuseV0GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
