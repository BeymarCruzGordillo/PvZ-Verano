// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"

// Sets default values
APlant::APlant()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	Primar  yActorTick.bCanEverTick = true;


	PlantMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	/*PlantMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	PlantMesh->SetSimulatePhysics(true);*/
	//// Habilita la colisión para interacciones de consulta y física en el componente PlantMesh
	//PlantMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = PlantMesh;
	auto PlantMeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	PlantMesh->SetStaticMesh(PlantMeshAsset.Object);

	// Establece la escala de masa del componente PlantMesh a 1000 unidades
	PlantMesh->SetMassScale(NAME_None, 1000.f);


	velocidad = 0.2f;
}

// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
    