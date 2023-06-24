#pragma once
#include "CoreMinimal.h"
#include "Block.h"
#include "BlockEspecial.generated.h"

UCLASS()
class TETRISUSFX01_API ABlockEspecial : public ABlock
{
	GENERATED_BODY()
public:
	ABlockEspecial();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
	TArray<UMaterialInterface*> NewMaterials;
private:
	float Tiempo;
	float TiempoMagico;
};
