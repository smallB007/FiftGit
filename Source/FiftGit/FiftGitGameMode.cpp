// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "FiftGit.h"
#include "FiftGitGameMode.h"
#include "FiftGitHUD.h"
#include "FiftGitCharacter.h"

AFiftGitGameMode::AFiftGitGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFiftGitHUD::StaticClass();
}
