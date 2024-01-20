// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAbanderado.h"

AZombieAbanderado::AZombieAbanderado()
{
	PrimaryActorTick.bCanEverTick = true;

	ZombieMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));

	RootComponent = ZombieMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));

	ZombieMesh->SetStaticMesh(ZombieMeshAsset.Object);

	ZombieMesh->SetRelativeScale3D(FVector(1.3f, 1.3f, 1.3f));


	velocidad = 50.0f;
}

void AZombieAbanderado::BeginPlay()
{
	Super::BeginPlay();
}

void AZombieAbanderado::Tick(float DeltaTime)
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

void AZombieAbanderado::EstadoCambiado()
{
	//Cuando el estado a cambiado, este Zombie Abanderado (que es un Publicador) notifica a todos los suscriptores que el estado a cambiado
	NotificarSuscriptores();

}

void AZombieAbanderado::DefinirEstado(FString myEstado)
{
	//Define el estado del zombie según un parametro pasado y advierte que el estado a cambiado
	Estado = myEstado;
	EstadoCambiado();
}

