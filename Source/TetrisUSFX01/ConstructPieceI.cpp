#include "ConstructPieceI.h"
#include "Piece.h"
#include "Block.h"

AConstructPieceI::AConstructPieceI()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceI::BeginPlay()
{
	Super::BeginPlay();
}

void AConstructPieceI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstructPieceI::ConstruirPiece()
{
	CoordenadasBlocks = { {-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = FMath::RandRange(1, 8);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceI::ObtenerPiece()
{
	Piece = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceI::ObtenerBlocksNums()
{
	return BlocksNums;
}

