#include "BlockRojo.h"

ABlockRojo::ABlockRojo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/Mesh/block.Block'"));
	BlockMesh->SetStaticMesh(Mesh.Object);
}

void ABlockRojo::BeginPlay()
{
	Super::BeginPlay();
	BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BlockMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	CrearBlock();
}

void ABlockRojo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockRojo::CrearBlock()
{
	BlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Material_6.Material_6'"));
	BlockMesh->SetMaterial(1, BlockMaterial);
}
