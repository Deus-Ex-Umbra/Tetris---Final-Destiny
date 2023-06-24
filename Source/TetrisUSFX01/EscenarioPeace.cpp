// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioPeace.h"

AEscenarioPeace::AEscenarioPeace()
{
	NombreEscenario = "NotExistWorld";
	LimitePiezasMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LimitePiezasMesh"));
	EscenarioMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscenarioMaterial"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> LimiteMesh(TEXT("StaticMesh'/Game/Mesh/Borde.Borde'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EscenarioNMesh(TEXT("StaticMesh'/Game/Mesh/Shape_Plane.Shape_Plane'"));
	LimitePiezasMesh->SetStaticMesh(LimiteMesh.Object);
	EscenarioMesh->SetStaticMesh(EscenarioNMesh.Object);
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/M_Glass.M_Glass'"));
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioSoledad_Mat.EscenarioSoledad_Mat'"));
}

void AEscenarioPeace::BeginPlay()
{
	Super::BeginPlay();
	CrearEscenario();
}

void AEscenarioPeace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FString AEscenarioPeace::ObtenerNombreEscenario()
{
	return NombreEscenario;
}

void AEscenarioPeace::CrearEscenario()
{
	LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
	EscenarioMesh->SetMaterial(0, EscenarioMaterial);
	EscenarioMesh->SetRelativeLocation(FVector(50.0f, 0.0f, 100.0f));
	EscenarioMesh->SetWorldScale3D(FVector(3.0f, 4.0f, 1.0f));
	EscenarioMesh->SetRelativeRotation(FRotator(90.0f, 90.0f, 90.0f));
	LimitePiezasMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}
