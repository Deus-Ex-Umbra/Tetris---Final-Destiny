#include "BlockEspecial.h"

ABlockEspecial::ABlockEspecial()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Mesh/BlockLoco.BlockLoco'"));
	BlockMesh->SetStaticMesh(Mesh.Object);
	Tiempo = 0.0f;
	TiempoMagico = 0.0f;
	TiempoControl = 0.0f;
	NewMaterials = {
		LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/M_Glass.M_Glass'")),
		LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Hielo_Mat.Hielo_Mat'")),
		LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Fuego_Mat.Fuego_Mat'")),
		LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Foto_pared_de_fuego_ardiente_Mat.Foto_pared_de_fuego_ardiente_Mat'")),
		LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Aire_Mat.Aire_Mat'")),
		LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/CorazonYZ_Mat.CorazonYZ_Mat'")),
		LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Material_5.Material_5'")),
		LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Material_005.Material_005'"))
	};
	BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BlockMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
}

void ABlockEspecial::BeginPlay()
{
	Super::BeginPlay();
	CrearBlock();
}

void ABlockEspecial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Tiempo >= 0.4f) {
		BlockMesh->SetMaterial(FMath::RandRange(0, 1), NewMaterials[FMath::RandRange(0, NewMaterials.Num() - 1)]);
		Tiempo = 0.0f;
	}
	if (TiempoMagico >= 2.5f) {
		FVector LocationActual = this->GetActorLocation();
		FVector NuevaLocacion = (LocationActual.Y >= 40.0f || LocationActual.Y <= -40.0f) ? ((LocationActual.Z >= 190.0f || LocationActual.Z <= 10.0f) ? LocationActual : LocationActual + FVector(0.0f, 0.0f, FMath::RandRange(-1, 1) * 10)) : LocationActual + FVector(0.0f, FMath::RandRange(-1, 1) * 10, FMath::RandRange(-1, 1) * 10);			this->SetActorLocation(NuevaLocacion);
		TiempoMagico = 0.0f;
	}
	TiempoMagico += DeltaTime;
	Tiempo += DeltaTime;
}

void ABlockEspecial::CrearBlock()
{
	BlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("MMaterial'/Game/Mesh/M_Glass.M_Glass'"));
	BlockMesh->SetMaterial(1, BlockMaterial);
}
