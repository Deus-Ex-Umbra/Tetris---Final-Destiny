#include "ConstructPieceJ.h"

AConstructPieceJ::AConstructPieceJ()
{
	PrimaryActorTick.bCanEverTick = true; 
}

void AConstructPieceJ::BeginPlay()
{
	Super::BeginPlay();
	
}

void AConstructPieceJ::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstructPieceJ::SpawnearBlocks()
{
}

void AConstructPieceJ::SpawnearBlocks(TArray<int> _Blocks)
{
}

APiece* AConstructPieceJ::ObtenerPiece()
{
	return nullptr;
}

TArray<int> AConstructPieceJ::ObtenerBlocksNums()
{
	return TArray<int>();
}

