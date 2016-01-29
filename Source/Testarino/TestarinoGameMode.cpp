// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Testarino.h"
#include "TestarinoGameMode.h"
#include "TestarinoHUD.h"
#include "TestarinoCharacter.h"

ATestarinoGameMode::ATestarinoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestarinoHUD::StaticClass();
}
