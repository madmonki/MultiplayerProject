// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBox.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AMyBox::AMyBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ReplicatedValue = 100.f;
	// bReplicates = true;
}

// Called when the game starts or when spawned
void AMyBox::BeginPlay()
{
	Super::BeginPlay();

	SetReplicates(true);
	SetReplicatingMovement(true);

	if (HasAuthority())
	{
		GetWorld()->GetTimerManager().
		SetTimer(TestTimer, this, &AMyBox::DecreaseReplicatedValue,
			2.f, false);
	}
}

// Called every frame
void AMyBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	if (HasAuthority())
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Server"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, TEXT("Client"));
	}
	*/

	// Same thing with above
	/*if (GetLocalRole() == ROLE_Authority)
	{
		
	}
	*/
	
}

void AMyBox::OnRep_ReplicatedVar()
{
	if (HasAuthority())
	{
		FVector NewLocation = GetActorLocation() + FVector(0.f, 0.f, 200.f);
		SetActorLocation(NewLocation);
		
		/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
		TEXT("Server: OnRep_ReplicatedVar"));*/
	}
	else
	{
		/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
		FString::Printf(TEXT("Client %d: OnRep_ReplicatedVar"), UE::GetPlayInEditorID()));*/
	}
}

void AMyBox::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyBox, ReplicatedValue);
}

void AMyBox::DecreaseReplicatedValue()
{
	if (HasAuthority())
	{
		ReplicatedValue -= 1.f;
		OnRep_ReplicatedVar();
		if (ReplicatedValue > 0.f)
		{
			GetWorld()->GetTimerManager().
			SetTimer(TestTimer, this, &AMyBox::DecreaseReplicatedValue,
			2.f, false);
		}
	}
}