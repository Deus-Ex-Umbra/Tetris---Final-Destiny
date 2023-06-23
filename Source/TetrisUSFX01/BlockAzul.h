#pragma once
#include "CoreMinimal.h"
#include "Block.h"
#include "BlockAzul.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockAzul : public ABlock
{
	GENERATED_BODY()
public:
	ABlockAzul();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
};
