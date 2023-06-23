#include "BlockCeleste.h"

ABlockCeleste::ABlockCeleste()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Mesh/block.Block'"));
	BlockMesh->SetStaticMesh(Mesh.Object);
}

void ABlockCeleste::BeginPlay()
{
	Super::BeginPlay();
	CrearBlock();
	BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BlockMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
}

void ABlockCeleste::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockCeleste::CrearBlock()
{
	BlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Material_0.Material_0'"));
	BlockMesh->SetMaterial(1, BlockMaterial);
}


