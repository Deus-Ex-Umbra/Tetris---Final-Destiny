#include "ConstructPieceJ.h"
#include "Piece.h"
#include "Block.h"

AConstructPieceJ::AConstructPieceJ()
{
	PrimaryActorTick.bCanEverTick = true; 
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceJ::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
}

void AConstructPieceJ::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructPieceJ::ConstruirPiece()
{
	CoordenadasBlocks = { {0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = (FMath::RandRange(0, 11) == 1) ? 8 : FMath::RandRange(3, 5);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceJ::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	Piece = GetWorld()->SpawnActor<APiece>(_Location, _Rotation);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceJ::ObtenerBlocksNums()
{
	return BlocksNums;
}

