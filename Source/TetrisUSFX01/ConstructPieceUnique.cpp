#include "ConstructPieceUnique.h"
#include "Piece.h"
#include "Block.h"
#include "FabricaBlocks.h"

AConstructPieceUnique::AConstructPieceUnique()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceUnique::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
}

void AConstructPieceUnique::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructPieceUnique::ConstruirPiece()
{
	CoordenadasBlocks = { {0.0, 0.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = FMath::RandRange(1, 9);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceUnique::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	Piece = GetWorld()->SpawnActor<APiece>(_Location, _Rotation);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceUnique::ObtenerBlocksNums()
{
	return BlocksNums;
}

