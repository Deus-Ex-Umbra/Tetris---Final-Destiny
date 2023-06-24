#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockMadera.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockMadera : public ABlock
{
	GENERATED_BODY()
public:
	ABlockMadera();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
};
