#include "Block.h"

ABlock::ABlock()
{
	PrimaryActorTick.bCanEverTick = true;
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
	RootComponent = BlockMesh;
}

void ABlock::BeginPlay()
{
	Super::BeginPlay();
}
void ABlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

