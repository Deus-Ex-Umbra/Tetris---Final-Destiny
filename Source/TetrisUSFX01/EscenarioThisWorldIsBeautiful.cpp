// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioThisWorldIsBeautiful.h"

AEscenarioThisWorldIsBeautiful::AEscenarioThisWorldIsBeautiful()
{
	NombreEscenario = "ThisWorldIsBeautiful";
	LimitePiezasMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LimitePiezasMesh"));
	EscenarioMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscenarioMaterial"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> LimiteMesh(TEXT("StaticMesh'/Game/Mesh/Borde.Borde'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EscenarioNMesh(TEXT("StaticMesh'/Game/Mesh/Shape_Plane.Shape_Plane'"));
	LimitePiezasMesh->SetStaticMesh(LimiteMesh.Object);
	EscenarioMesh->SetStaticMesh(EscenarioNMesh.Object);
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioPeace_Mat.EscenarioPeace_Mat'"));
}

void AEscenarioThisWorldIsBeautiful::BeginPlay()
{
	Super::BeginPlay();
	CrearEscenario();
}

void AEscenarioThisWorldIsBeautiful::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FString AEscenarioThisWorldIsBeautiful::ObtenerNombreEscenario()
{
	return NombreEscenario;
}

void AEscenarioThisWorldIsBeautiful::CrearEscenario()
{
	LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
	EscenarioMesh->SetMaterial(0, EscenarioMaterial);
	EscenarioMesh->SetRelativeLocation(FVector(50.0f, 0.0f, 100.0f));
	EscenarioMesh->SetWorldScale3D(FVector(3.0f, 4.0f, 1.0f));
	EscenarioMesh->SetRelativeRotation(FRotator(90.0f, 90.0f, 90.0f));
	LimitePiezasMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}
