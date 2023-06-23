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
	TArray<class ABlock*> Blocks;
	TArray<int> BlocksNums;
	class AFabricaBlocks* FabricaBlocks;
	std::vector<std::pair<float, float>> CoordenadasBlocks;
	int32 NumBlocks;
public:
	virtual void SpawnearBlocks() = 0;
	virtual void SpawnearBlocks(TArray<int> _Blocks) = 0;
	virtual class APiece* ObtenerPiece() = 0;
	virtual TArray<int> ObtenerBlocksNums() = 0;
};
