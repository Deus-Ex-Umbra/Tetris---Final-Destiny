#include "ConstructPieceL.h"
#include "Piece.h"
#include "Block.h"

AConstructPieceL::AConstructPieceL()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceL::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
	Piece->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

void AConstructPieceL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructPieceL::ConstruirPiece()
{
	CoordenadasBlocks = { {-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = (FMath::RandRange(0, 11) == 1) ? 8 : FMath::RandRange(2, 4);
		BlocksNums.Add(NumBlocks);
	}
}

APiece* AConstructPieceL::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	Piece = GetWorld()->SpawnActor<APiece>(_Location, _Rotation);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	BlocksNums.Empty();
	return Piece;
}

TArray<int> AConstructPieceL::ObtenerBlocksNums()
{
	return BlocksNums;
}

