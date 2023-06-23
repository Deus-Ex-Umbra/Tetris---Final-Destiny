#pragma once
#include "CoreMinimal.h"
#include "Block.h"
#include "BlockTransparente.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockTransparente : public ABlock
{
	GENERATED_BODY()
public:
	ABlockTransparente();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
};
