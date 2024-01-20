// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer_Principal.h"
#include "ZombieAbanderado.h"
#include "ZombiePatriota.h"
// Sets default values
AObserver_Principal::AObserver_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AObserver_Principal::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle Temporizador;
	UWorld* const World = GetWorld();


	AZombiePatriota* ZPatriota = GetWorld()->SpawnActor<AZombiePatriota>(AZombiePatriota::StaticClass(), FVector(-800.0f, 1600.0f, 160.0f), FRotator::ZeroRotator);

	World->GetTimerManager().SetTimer(Temporizador, this, &AObserver_Principal::SpawnZombies, 7, false);






	//AZombieAbanderado* ZAbanderado = GetWorld()->SpawnActor<AZombieAbanderado>(AZombieAbanderado::StaticClass(), FVector(-800.0f, 1600.0f, 160.0f), FRotator::ZeroRotator);

}

// Called every frame
void AObserver_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AObserver_Principal::SpawnZombiesPatriota() {
	AZombiePatriota* ZPatriota = GetWorld()->SpawnActor<AZombiePatriota>(AZombiePatriota::StaticClass(), FVector(-800.0f, 1600.0f, 160.0f), FRotator::ZeroRotator);
}

void AObserver_Principal::SpawnZombies()
{
	AZombieAbanderado* ZombieAbanderado = GetWorld()->SpawnActor<AZombieAbanderado>(AZombieAbanderado::StaticClass(), FVector(-800.0f, 1600.0f, 160.0f), FRotator::ZeroRotator);
	AZombiePatriota* ZombiePatriota = GetWorld()->SpawnActor<AZombiePatriota>(AZombiePatriota::StaticClass(), FVector(-800.0f, 1900.0f, 160.0f), FRotator::ZeroRotator);
	ZombiePatriota->DefinirZombie(ZombieAbanderado);
	ZombieAbanderado->DefinirEstado("Enojado");
	ZombiePatriota->Tranformacion();

}


