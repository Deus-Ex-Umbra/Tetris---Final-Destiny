#include "DirectorPiece.h"
#include "ConstructorPiece.h"

ADirectorPiece::ADirectorPiece()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADirectorPiece::BeginPlay()
{
	Super::BeginPlay();
}

void ADirectorPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADirectorPiece::EstablecerConstructorPiece(IConstructorPiece* _ConstructorPiece)
{
	ConstructorPiece = _ConstructorPiece;
}

void ADirectorPiece::ConstruirPiece()
{
	ConstructorPiece->SpawnearBlocks();
}

void ADirectorPiece::ConstruirPiece(TArray<int> _Blocks)
{
	ConstructorPiece->SpawnearBlocks(_Blocks);
}

APiece* ADirectorPiece::ObtenerPiece()
{
	return ConstructorPiece->ObtenerPiece();
}

