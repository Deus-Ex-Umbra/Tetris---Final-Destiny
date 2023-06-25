#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstadoEscenario.generated.h"

UINTERFACE(MinimalAPI)
class UEstadoEscenario : public UInterface
{
	GENERATED_BODY()
};

class TETRISUSFX01_API IEstadoEscenario
{
	GENERATED_BODY()
public:
	virtual void EstablecerEscenario(class AEscenario* _Escenario) = 0;
	virtual void ConstruirNuevoEscenario(class AEscenario* _Escenario, int _Puntos, int _NumLineas) = 0;
protected:
	class UMaterialInterface* EscenarioMaterial;
	class UMaterialInterface* LimitePiezasMaterial;
	class USoundBase* MusicaEscenario;
};
