// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"

// Sets default values
AZombie::AZombie()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ZombieMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));
	//ZombieMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);//no permite que ningun otro objeto pase sobre el
	//ZombieMesh->SetSimulatePhysics(true);//Activa la simulacion fisica
	//ZombieMesh->OnComponentBeginOverlap.AddDynamic(this, &AZombie::OnOverlapBeginFunction);

	RootComponent = ZombieMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	//Carga el mesh o aset ZombiemEshAsset en ZombieMesh
	ZombieMesh->SetStaticMesh(ZombieMeshAsset.Object);

	ZombieMesh->SetRelativeScale3D(FVector(1.3f, 1.3f, 1.3f));


	velocidad = 50.0f;
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();

	this->SetLifeSpan(30.0f);

}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector LActual = this->GetActorLocation();

	FVector LocalizacionObjetivo = FVector(LActual.X, -1200.0f, LActual.Z);//Cambia la ubicaionobjetiva segun tus nesesidades
	//Calcula la Direccion y distancia al objetivo
	FVector Direccion = (LocalizacionObjetivo - this->GetActorLocation()).GetSafeNormal();

	//FVector Direccion = (LocalizacionObjetivo - this->GetActorLocation()).GetSafeNormal();

	//Calcula la distancia de al objetivo
	float DistanciaAlObjetivo = FVector::Dist(LocalizacionObjetivo, this->GetActorLocation());

	//Calcula el desplazamiento a este frame
	float DeltaMove = velocidad * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove >= DistanciaAlObjetivo) {
		//Si el desplazamiento exede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(LocalizacionObjetivo);
	}
	else {
		//mueve el objetivo en la direccion calculada
		this->AddActorWorldOffset(Direccion * DeltaMove);
	}

}

void AZombie::Destruir()
{
	Destroy();
}

