// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerProjectGameMode.h"
#include "MultiplayerProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerProjectGameMode::AMultiplayerProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AMultiplayerProjectGameMode::HostLANGame()
{
	GetWorld()->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonMap?listen");
}

void AMultiplayerProjectGameMode::JoinLANGame()
{
	APlayerController *PC = GetGameInstance()->GetFirstLocalPlayerController();
	if (PC != NULL)
	{
		PC->ClientTravel("192.168.1.105", TRAVEL_Absolute);
	}
}
