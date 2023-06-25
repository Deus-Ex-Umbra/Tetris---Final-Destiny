#pragma once
#include "CoreMinimal.h"
#include "Escenario.h"
#include "Components/AudioComponent.h"
#include "EscenarioDivine.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenarioDivine : public AEscenario
{
	GENERATED_BODY()
public:
	AEscenarioDivine();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual FString ObtenerNombreEscenario() override;
	virtual void CrearEscenario() override;
};
