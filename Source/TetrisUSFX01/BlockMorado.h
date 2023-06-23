#pragma once
#include "CoreMinimal.h"
#include "Block.h"
#include "BlockMorado.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockMorado : public ABlock
{
	GENERATED_BODY()
public:
	ABlockMorado();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
};
