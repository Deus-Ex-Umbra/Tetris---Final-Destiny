#pragma once
#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioPeace.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenarioPeace : public AEscenario
{
	GENERATED_BODY()
public:
	AEscenarioPeace();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual FString ObtenerNombreEscenario() override;
	virtual void CrearEscenario() override;
};
