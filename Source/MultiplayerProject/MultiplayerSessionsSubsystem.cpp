// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionsSubsystem.h"

UMultiplayerSessionsSubsystem::UMultiplayerSessionsSubsystem()
{
	PrintString("MSS Constructor");
}

void UMultiplayerSessionsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	PrintString("MSS Initialize");
}

void UMultiplayerSessionsSubsystem::Deinitialize()
{
	Super::Deinitialize();
	UE_LOG(LogTemp, Warning, TEXT("MSS Deinitialize"));
}

void UMultiplayerSessionsSubsystem::PrintString(const FString& String)
{
	GEngine->AddOnScreenDebugMessage(-1,
		5.f, FColor::Red,
		FString::Printf(TEXT("%s"), *String));
}
