#include "BlockTransparente.h"

ABlockTransparente::ABlockTransparente()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Mesh/BlockTransparente.BlockTransparente'"));
	BlockMesh->SetStaticMesh(Mesh.Object);
}

void ABlockTransparente::BeginPlay()
{
	Super::BeginPlay();
	CrearBlock();
	BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BlockMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
}

void ABlockTransparente::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockTransparente::CrearBlock()
{
	BlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/M_Glass.M_Glass'"));
	BlockMesh->SetMaterial(1, BlockMaterial);
}
