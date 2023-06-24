#include "EscenarioDivine.h"

AEscenarioDivine::AEscenarioDivine()
{
	NombreEscenario = "Divine";
	LimitePiezasMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LimitePiezasMesh"));
	EscenarioMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscenarioMaterial"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> LimiteMesh(TEXT("StaticMesh'/Game/Mesh/Borde.Borde'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EscenarioNMesh(TEXT("StaticMesh'/Game/Mesh/Shape_Plane.Shape_Plane'"));
	LimitePiezasMesh->SetStaticMesh(LimiteMesh.Object);
	EscenarioMesh->SetStaticMesh(EscenarioNMesh.Object);
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Foto_pared_de_fuego_ardiente_Mat.Foto_pared_de_fuego_ardiente_Mat'"));
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioInfierno_Mat.EscenarioInfierno_Mat'"));
}

void AEscenarioDivine::BeginPlay()
{
	Super::BeginPlay();
	CrearEscenario();
}

void AEscenarioDivine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FString AEscenarioDivine::ObtenerNombreEscenario()
{
	return NombreEscenario;
}

void AEscenarioDivine::CrearEscenario()
{
	LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
	EscenarioMesh->SetMaterial(0, EscenarioMaterial);
	EscenarioMesh->SetRelativeLocation(FVector(50.0f, 0.0f, 100.0f));
	EscenarioMesh->SetWorldScale3D(FVector(3.0f, 4.0f, 1.0f));
	EscenarioMesh->SetRelativeRotation(FRotator(90.0f, 90.0f, 90.0f));
	LimitePiezasMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}
