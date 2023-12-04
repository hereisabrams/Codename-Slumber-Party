// Copyright Epic Games, Inc. All Rights Reserved.

#include "CodenameSlumberPartyGameMode.h"
#include "CodenameSlumberPartyPlayerController.h"
#include "CodenameSlumberPartyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACodenameSlumberPartyGameMode::ACodenameSlumberPartyGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACodenameSlumberPartyPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}