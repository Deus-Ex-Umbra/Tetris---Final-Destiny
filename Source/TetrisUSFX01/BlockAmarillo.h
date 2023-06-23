#pragma once
#include "CoreMinimal.h"
#include "Block.h"
#include "BlockAmarillo.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockAmarillo : public ABlock
{
	GENERATED_BODY()
public:
	ABlockAmarillo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
};
