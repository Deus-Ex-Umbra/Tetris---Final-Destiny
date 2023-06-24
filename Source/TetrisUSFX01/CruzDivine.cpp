#include "CruzDivine.h"
#include "Piece.h"
#include "Block.h"
#include "FabricaBlocks.h"

ACruzDivine::ACruzDivine()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void ACruzDivine::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
}

void ACruzDivine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACruzDivine::ConstruirPiece()
{
	CoordenadasBlocks = { {0.0, 10.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {0.0, -20.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = 9;
		BlocksNums.Add(NumBlocks);
	}
}

APiece* ACruzDivine::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	Piece = GetWorld()->SpawnActor<APiece>(_Location, _Rotation);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> ACruzDivine::ObtenerBlocksNums()
{
	return BlocksNums;
}

