// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MyProject5GameMode.h"
#include "MyProject5HUD.h"
#include "MyProject5Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject5GameMode::AMyProject5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyProject5HUD::StaticClass();
}
