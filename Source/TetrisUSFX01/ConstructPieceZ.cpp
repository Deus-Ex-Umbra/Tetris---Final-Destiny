#include "ConstructPieceZ.h"
#include "Piece.h"
#include "Block.h"
#include "FabricaBlocks.h"

AConstructPieceZ::AConstructPieceZ()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceZ::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
}

void AConstructPieceZ::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructPieceZ::ConstruirPiece()
{
	CoordenadasBlocks = { {-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = (FMath::RandRange(0, 11) == 1) ? 8 : FMath::RandRange(3, 6);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceZ::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	Piece = GetWorld()->SpawnActor<APiece>(_Location, _Rotation);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceZ::ObtenerBlocksNums()
{
	return BlocksNums;
}

