// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Suscriptor.h"
#include "ZombieAbanderado.h"
#include "ZombiePatriota.generated.h"

UCLASS()
class PVZ_B_API AZombiePatriota : public AActor, public ISuscriptor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombiePatriota();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UStaticMeshComponent* ZombieMesh;
	float velocidad;





private:
	//El zombie de este suscriptor
	UPROPERTY()
		AZombieAbanderado* ZombieAbanderado;

public:
	//Llamado cuando el suscriptor es destruido
	virtual void Destroyed() override;
	//Llamado cuando el publicador cambia su estado para ejecutar su rutina
	virtual void Actualizar(class APublicador* Publicador) override;
	//Ejecuta la rutina de este suscriptor
	virtual void Tranformacion();
	//Define el zombie de este suscriptor
	void DefinirZombie(AZombieAbanderado* myZombieAbanderado);

};
