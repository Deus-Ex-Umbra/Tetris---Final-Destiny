#include "ConstructPieceO.h"
#include "Piece.h"
#include "Block.h"
#include "FabricaBlocks.h"

AConstructPieceO::AConstructPieceO()
{
	PrimaryActorTick.bCanEverTick = true;
	PieceScene = CreateDefaultSubobject<USceneComponent>(TEXT("PieceScene"));
	RootComponent = PieceScene;
}

void AConstructPieceO::BeginPlay()
{
	Super::BeginPlay();
	Piece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass());
	Piece->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	FabricaBlocks = GetWorld()->SpawnActor<AFabricaBlocks>(AFabricaBlocks::StaticClass());
}

void AConstructPieceO::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructPieceO::SpawnearBlocks()
{
	CoordenadasBlocks = { {0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0} };
	for (auto& Coordenada : CoordenadasBlocks)
	{
		NumBlocks = FMath::RandRange(1, 8);
		BlocksNums.Add(NumBlocks);
		ABlock* B = FabricaBlocks->FabricarBlock(NumBlocks, this->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f));
		Blocks.Add(B);
		B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		B->SetActorRelativeLocation(FVector(0.0, Coordenada.first, Coordenada.second));
	}
}

void AConstructPieceO::SpawnearBlocks(TArray<int> _Blocks)
{
	CoordenadasBlocks = { {0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0} };
	int indice = 0;
	for (auto& Coordenada : CoordenadasBlocks)
	{
		ABlock* B = FabricaBlocks->FabricarBlock(_Blocks[indice], this->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f));
		Blocks.Add(B);
		B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		B->SetActorRelativeLocation(FVector(0.0, Coordenada.first, Coordenada.second));
		indice++;
	}
}

APiece* AConstructPieceO::ObtenerPiece()
{
	Piece->EstablecerBlocks(Blocks);
	Piece->EstablecerCoordenadasBlocks(CoordenadasBlocks);
	Piece->EstablecerNumsBlocks(BlocksNums);
	return Piece;
}

TArray<int> AConstructPieceO::ObtenerBlocksNums()
{
	return BlocksNums;
}

