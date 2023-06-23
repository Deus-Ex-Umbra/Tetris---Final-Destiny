#pragma once
#include "CoreMinimal.h"
#include "Block.h"
#include "BlockCeleste.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockCeleste : public ABlock
{
	GENERATED_BODY()
public:
	ABlockCeleste();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
};
