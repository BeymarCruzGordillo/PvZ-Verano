// Copyright Epic Games, Inc. All Rights Reserved.

#include "PvZ_BGameMode.h"
#include "PvZ_BPawn.h"
#include "Plant.h"
#include "Zombie.h"
#include "Observer_Principal.h"
#include "State_Principal.h"
#include "ZombieAbanderado.h"
#include "ZombiePatriota.h"

APvZ_BGameMode::APvZ_BGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APvZ_BPawn::StaticClass();
}

void APvZ_BGameMode::BeginPlay()
{
	Super::BeginPlay();

	AObserver_Principal* Observer = GetWorld()->SpawnActor<AObserver_Principal>(AObserver_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	AState_Principal* State = GetWorld()->SpawnActor<AState_Principal>(AState_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AObserver_Principal* Observer = GetWorld()->SpawnActor<AObserver_Principal>(AObserver_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);


	////Se crean las plantas dinamicamente-----------------------------------------------------------------------------------------------------------------------------
	//FVector SpawnLocationPlant = FVector(-800.0f, -600.0f, 160.0f);
	//FVector SpawnLocationPlantTemp = SpawnLocationPlant;


	//for (int i = 0; i < 5; i++) {
	//	SpawnLocationPlantTemp.X += 170;
	//	for (int j = 0; j < 2; j++) {
	//		SpawnLocationPlantTemp.Y += 120;
	//		APlant* NuevoPlant = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);
	//		vectorPlants.Add(NuevoPlant);
	//		//	SpawnLocationPlant = SpawnLocationPlantTemp;
	//	}
	//	SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;
	//}


	////Se crean los Zombie dinamicamente------------------------------------------------------------------------------------------------------------------
	////Definiendo la posicion de los zombies
	//FVector SpawnLocationZombie = FVector(-800.0f, 1600.0f, 160.0f);//Ubicacion

	////Genera 5 Zombies
	//for (int i = 0; i < 5; i++) {
	//	//Defina una posicion temporal para cada zombie X
	//	SpawnLocationZombie.X += 170;
	//	//Aparcion de los zombies
	//	NuevoZombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
	//	NuevoZombie->velocidad = FMath::RandRange(70.0f, 120.0f);//Genera un numero aleatorio
	//	Zombies.Add(NuevoZombie);//Agrega el zombie al array
	//}


	////Zombies SpawnZombies------------------------------------------------------------------------------------------------------------------
	//// Establece un temporizador para llamar repetidamente a la función 'Spawn' del objeto 'APvZ_LABSGameMode'
	//// Cada 2 segundos, el temporizador activará la función de spawn.
	//FTimerHandle Temporizador;
	//UWorld* const World = GetWorld();
	//World->GetTimerManager().SetTimer(Temporizador, this, &APvZ_BGameMode::SpawnZombies, 15, true);

}

void APvZ_BGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void APvZ_BGameMode::SpawnZombies()
{
	//Zombie------------------------------------------------------------------------------------------------------------------
	//Definiendo la posicion de los zombies
	FVector SpawnLocationZombie = FVector(-800.0f, 1600.0f, 160.0f);//Ubicacion
	//Genera 5 Zombies
	for (int i = 0; i < 5; i++) {
		//Defina una posicion temporal para cada zombie X
		SpawnLocationZombie.X += 170;
		//Aparcion de los zombies
		NuevoZombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		NuevoZombie->velocidad = FMath::RandRange(70.0f, 120.0f);//Genera un numero aleatorio
		Zombies.Add(NuevoZombie);//Agrega el zombie al array
	}

}


