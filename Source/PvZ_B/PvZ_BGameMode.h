// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Plant.h"
#include "Zombie.h"

#include "PvZ_BGameMode.generated.h"

UCLASS(MinimalAPI)
class APvZ_BGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APvZ_BGameMode();



	TArray<APlant*> vectorPlants;

	AZombie* NuevoZombie;

	TArray<AZombie*> Zombies;

	void SpawnZombies();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};



