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
	ConstructorPiece->ConstruirPiece();
}

TArray<int> ADirectorPiece::ObtenerBlocksNums()
{
	return ConstructorPiece->ObtenerBlocksNums();
}

APiece* ADirectorPiece::ObtenerPiece(FVector _Location, FRotator _Rotation)
{
	ConstruirPiece();
	return ConstructorPiece->ObtenerPiece(_Location, _Rotation);
}

