#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaBlocks.generated.h"

UCLASS()
class TETRISUSFX01_API AFabricaBlocks : public AActor
{
	GENERATED_BODY()
public:	
	AFabricaBlocks();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	class ABlock* FabricarBlock(int _numeroblock, FVector Locacion, FRotator Rotacion);
};
