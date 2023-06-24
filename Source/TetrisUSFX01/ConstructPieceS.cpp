#include "ConstructPieceS.h"
#include "Piece.h"
#include "Block.h"

AConstructPieceS::AConstructPieceS()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceS::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
}

void AConstructPieceS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructPieceS::ConstruirPiece()
{
	CoordenadasBlocks = { {-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = FMath::RandRange(1, 8);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceS::ObtenerPiece()
{
	Piece = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceS::ObtenerBlocksNums()
{
	return BlocksNums;
}

