// Copyright Epic Games, Inc. All Rights Reserved.

#include "PvZ_BGameMode.h"
#include "PvZ_BPawn.h"

APvZ_BGameMode::APvZ_BGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APvZ_BPawn::StaticClass();
}

