#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorPiece.h"
#include "ConstructPieceSum.generated.h"

UCLASS()
class TETRISUSFX01_API AConstructPieceSum : public AActor, public IConstructorPiece
{
	GENERATED_BODY()
public:	
	AConstructPieceSum();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void SpawnearBlocks() override;
	virtual void SpawnearBlocks(TArray<int> _Blocks) override;
	virtual class APiece* ObtenerPiece() override;
	virtual TArray<int> ObtenerBlocksNums() override;
private:
	class APiece* Piece;
};
