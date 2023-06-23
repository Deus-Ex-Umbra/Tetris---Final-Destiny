#include "BlockMorado.h"

ABlockMorado::ABlockMorado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Mesh/block.Block'"));
	BlockMesh->SetStaticMesh(Mesh.Object);
}

void ABlockMorado::BeginPlay()
{
	Super::BeginPlay();
	CrearBlock();
	BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BlockMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
}

void ABlockMorado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockMorado::CrearBlock()
{
	BlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Material_5.Material_5'"));
	BlockMesh->SetMaterial(1, BlockMaterial);
}