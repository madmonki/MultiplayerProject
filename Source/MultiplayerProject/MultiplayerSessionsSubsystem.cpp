// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionsSubsystem.h"
#include "OnlineSubsystem.h"

UMultiplayerSessionsSubsystem::UMultiplayerSessionsSubsystem()
{
	// PrintString("UMultiplayerSessionsSubsystem Constructor");
}

void UMultiplayerSessionsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
	if (OnlineSubsystem)
	{
		FString SubsystemName = OnlineSubsystem->GetSubsystemName().ToString();
		PrintString(SubsystemName);
		SessionInterface =
			OnlineSubsystem->GetSessionInterface();
		if (SessionInterface.IsValid())
		{
			PrintString("Session Interface is valid");
		}
	}
	// PrintString("UMultiplayerSessionsSubsystem::Initialize");
}

void UMultiplayerSessionsSubsystem::Deinitialize()
{
	Super::Deinitialize();

	// SessionInterface.Reset();
	// UE_LOG(LogTemp, Warning, TEXT("UMultiplayerSessionsSubsystem::Deinitialize"));
}

void UMultiplayerSessionsSubsystem::PrintString(const FString& String)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
		FString::Printf(TEXT("%s"), *String));
}
