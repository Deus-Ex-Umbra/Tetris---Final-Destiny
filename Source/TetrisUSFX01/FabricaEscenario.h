#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaEscenario.generated.h"

UCLASS()
class TETRISUSFX01_API AFabricaEscenario : public AActor
{
	GENERATED_BODY()
public:	
	AFabricaEscenario();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	class AEscenario* FabricarEscenario(int _numEscenario);
};
