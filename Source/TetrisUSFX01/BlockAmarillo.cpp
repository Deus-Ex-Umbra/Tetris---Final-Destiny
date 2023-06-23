#include "BlockAmarillo.h"

ABlockAmarillo::ABlockAmarillo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Mesh/block.Block'"));
	BlockMesh->SetStaticMesh(Mesh.Object);
}

void ABlockAmarillo::BeginPlay()
{
	Super::BeginPlay();
	CrearBlock();
	BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BlockMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
}

void ABlockAmarillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockAmarillo::CrearBlock()
{
	BlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Material_5.Material_5'"));
	BlockMesh->SetMaterial(1, BlockMaterial);
}
