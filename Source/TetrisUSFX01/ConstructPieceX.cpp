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
	CoordenadasBlocks = { {-10.0, 10.0}, {10.0, 10.0}, {0.0, 0.0}, {-10.0, -10.0}, {10.0, -10.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = FMath::RandRange(1, 8);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceX::ObtenerPiece()
{
	Piece = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceX::ObtenerBlocksNums()
{
	return BlocksNums;
}

