#pragma once
#include "CoreMinimal.h"
#include "Block.h"
#include "BlockVerde.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockVerde : public ABlock
{
	GENERATED_BODY()
public:
	ABlockVerde();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
};
