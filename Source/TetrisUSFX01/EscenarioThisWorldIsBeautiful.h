#pragma once
#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioThisWorldIsBeautiful.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenarioThisWorldIsBeautiful : public AEscenario
{
	GENERATED_BODY()
public:
	AEscenarioThisWorldIsBeautiful();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual FString ObtenerNombreEscenario() override;
	virtual void CrearEscenario() override;
};
