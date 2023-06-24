#include "PieceCDave.h"
#include "Piece.h"
#include "Block.h"
#include "FabricaBlocks.h"

APieceCDave::APieceCDave()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void APieceCDave::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
}

void APieceCDave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APieceCDave::ConstruirPiece()
{
	CoordenadasBlocks = { {-20.0, 10.0}, {-10.0, 0.0}, {0.0, 10.0}, {10.0, 0.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = (FMath::RandRange(0, 7) == 1) ? ((FMath::RandRange(0, 1)) ? 7 : 8) : 10;
		BlocksNums.Add(NumBlocks);
	}
}

APiece* APieceCDave::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	Piece = GetWorld()->SpawnActor<APiece>(_Location, _Rotation);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> APieceCDave::ObtenerBlocksNums()
{
	return BlocksNums;
}

