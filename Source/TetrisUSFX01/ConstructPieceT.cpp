#include "ConstructPieceT.h"
#include "Piece.h"
#include "Block.h"

AConstructPieceT::AConstructPieceT()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceT::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
}

void AConstructPieceT::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructPieceT::ConstruirPiece()
{
	CoordenadasBlocks = { {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = (FMath::RandRange(0, 18) == 11) ? 8 : FMath::RandRange(1, 4);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceT::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	Piece = GetWorld()->SpawnActor<APiece>(_Location, _Rotation);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceT::ObtenerBlocksNums()
{
	return BlocksNums;
}

