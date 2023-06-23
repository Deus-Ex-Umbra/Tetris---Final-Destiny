#pragma once
#include "CoreMinimal.h"
#include "Block.h"
#include "BlockBrilloso.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockBrilloso : public ABlock
{
	GENERATED_BODY()
public:
	ABlockBrilloso();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
private:
	float Tiempo;
};
