#include "BlockVerde.h"

ABlockVerde::ABlockVerde()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Mesh/block.Block'"));
	BlockMesh->SetStaticMesh(Mesh.Object);
}

void ABlockVerde::BeginPlay()
{
	Super::BeginPlay();
	CrearBlock();
	BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BlockMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
}

void ABlockVerde::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockVerde::CrearBlock()
{
	BlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Material_3.Material_3'"));
	BlockMesh->SetMaterial(1, BlockMaterial);
}
