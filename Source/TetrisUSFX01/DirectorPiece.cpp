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
	
}

void ADirectorPiece::ConstruirPiece()
{
}

void ADirectorPiece::ConstruirPiece(TArray<class ABlock*> _Blocks)
{
}

APiece* ADirectorPiece::ObtenerPiece()
{
	return nullptr;
}

