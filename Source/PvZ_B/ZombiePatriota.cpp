// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombiePatriota.h"
#include "ZombieAbanderado.h"
#include "Publicador.h"



AZombiePatriota::AZombiePatriota()
{

	PrimaryActorTick.bCanEverTick = true;

	ZombieMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));


	RootComponent = ZombieMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));

	ZombieMesh->SetStaticMesh(ZombieMeshAsset.Object);

	ZombieMesh->SetRelativeScale3D(FVector(1.3f, 1.3f, 1.3f));


	velocidad = 50.0f;
}


void AZombiePatriota::BeginPlay()
{
	Super::BeginPlay();

}

void AZombiePatriota::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector LActual = this->GetActorLocation();

	FVector LocalizacionObjetivo = FVector(LActual.X, -1200.0f, LActual.Z);

	FVector Direccion = (LocalizacionObjetivo - this->GetActorLocation()).GetSafeNormal();

	float DistanciaAlObjetivo = FVector::Dist(LocalizacionObjetivo, this->GetActorLocation());

	float DeltaMove = velocidad * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove >= DistanciaAlObjetivo) {
		this->SetActorLocation(LocalizacionObjetivo);
	}
	else {
		this->AddActorWorldOffset(Direccion * DeltaMove);
	}

}



void AZombiePatriota::Destroyed()
{
	Super::Destroyed();
	//Mensaje de error si el zombie no existe
	if (!ZombieAbanderado) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): El zombie no existe, asegurate que sea inicializado."));
		return;
	}
	//Desuscribirse del publicador si el zombie es destruido
	ZombieAbanderado->DeSuscribirse(this);
}

void AZombiePatriota::Actualizar(APublicador* Publicador)
{
	//Ejecuta su rutina o acciones
	Tranformacion();


}

void AZombiePatriota::Tranformacion()
{
	//Mensaje de error si el zombie no existe
	if (!ZombieAbanderado) {
		UE_LOG(LogTemp, Error, TEXT("Tranformacion():El zombie no existe, asegurate que sea inicializado."));
		return;
	}
	//Get the current time of the Clock Tower
	FString Estado = ZombieAbanderado->GetEstado();

	if (!Estado.Compare("Calmado"))
	{
		//Ejecuta sus acciones estando calmado
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado es %s, El zombie patriota esta tranquilo"), *Estado));
		velocidad = 10;

	}
	else if (!Estado.Compare("Enojado"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado es %s, El zombie patriota esta enojado"), *Estado));
		velocidad = 200.0f;

	}
}

void AZombiePatriota::DefinirZombie(AZombieAbanderado* myZombieAbanderado)
{
	//Mensaje de error si el zombie no existe
	if (!myZombieAbanderado) {
		UE_LOG(LogTemp, Error, TEXT("DefinirZombie(): myZombiePatriota es nulo, asegurate que fue inicializado."));
		return;
	}
	//Set the Clock Tower and Subscribe to that
	ZombieAbanderado = myZombieAbanderado;
	ZombieAbanderado->Suscribirse(this);

}


