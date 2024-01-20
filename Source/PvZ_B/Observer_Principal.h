// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombieAbanderado.h"
#include "Observer_Principal.generated.h"

UCLASS()
class PVZ_B_API AObserver_Principal : public AActor
{
	GENERATED_BODY()

public:
	AObserver_Principal();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;



	void SpawnZombiesPatriota();
	void SpawnZombies();
};