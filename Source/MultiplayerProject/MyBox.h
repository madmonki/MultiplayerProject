// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyBox.generated.h"

UCLASS()
class MULTIPLAYERPROJECT_API AMyBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(ReplicatedUsing = OnRep_ReplicatedVar, BlueprintReadWrite)
	float ReplicatedValue;

	UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedVar();

	void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	void DecreaseReplicatedValue();
	FTimerHandle TestTimer;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCExplode();

	UPROPERTY(EditAnywhere)
	UParticleSystem* ExplosionEffect;
};
