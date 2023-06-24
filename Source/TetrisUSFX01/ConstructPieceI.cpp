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
		NumBlocks = (FMath::RandRange(0, 11) == 1) ? 8 : FMath::RandRange(1, 3);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceI::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	Piece = GetWorld()->SpawnActor<APiece>(_Location, _Rotation);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceI::ObtenerBlocksNums()
{
	return BlocksNums;
}

