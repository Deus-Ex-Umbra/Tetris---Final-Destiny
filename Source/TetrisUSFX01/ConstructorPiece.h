#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include <vector>
#include "ConstructorPiece.generated.h"
UINTERFACE(MinimalAPI)
class UConstructorPiece : public UInterface
{
	GENERATED_BODY()
};

class TETRISUSFX01_API IConstructorPiece
{
	GENERATED_BODY()
protected:
	USceneComponent* PieceScene;
	TArray<int> BlocksNums;
	std::vector<std::pair<float, float>> CoordenadasBlocks;
	int NumBlocks;
public:
	virtual void ConstruirPiece() = 0;
	virtual class APiece* ObtenerPiece() = 0;
	virtual TArray<int> ObtenerBlocksNums() = 0;
};
