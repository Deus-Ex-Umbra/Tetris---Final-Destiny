#include "ConstructPieceX.h"
#include "Piece.h"
#include "Block.h"
#include "FabricaBlocks.h"

AConstructPieceX::AConstructPieceX()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceX::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
}

void AConstructPieceX::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructPieceX::ConstruirPiece()
{
	CoordenadasBlocks = { {-10.0, 0.0}, {10.0, 0.0}, {0.0, 0.0}, {-10.0, -10.0}, {10.0, -10.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = (FMath::RandRange(0, 18) == 16) ? 8 : FMath::RandRange(5, 6);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceX::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	Piece = GetWorld()->SpawnActor<APiece>(_Location, _Rotation);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceX::ObtenerBlocksNums()
{
	return BlocksNums;
}

