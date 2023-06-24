#include "ConstructPieceSum.h"
#include "Block.h"
#include "Piece.h"

AConstructPieceSum::AConstructPieceSum()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceSum::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
}

void AConstructPieceSum::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructPieceSum::ConstruirPiece()
{
	CoordenadasBlocks = { {0.0, 10.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = FMath::RandRange(1, 8);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceSum::ObtenerPiece()
{
	Piece = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceSum::ObtenerBlocksNums()
{
	return BlocksNums;
}

