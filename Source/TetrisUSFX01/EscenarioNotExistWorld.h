#pragma once
#include "CoreMinimal.h"
#include "Escenario.h"
#include "Components/AudioComponent.h"
#include "EscenarioNotExistWorld.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenarioNotExistWorld : public AEscenario
{
	GENERATED_BODY()
public:
	AEscenarioNotExistWorld();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual FString ObtenerNombreEscenario() override;
	virtual void CrearEscenario() override;
};
