#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoEscenario.h"
#include "EstadoJuegoGanado.generated.h"

UCLASS()
class TETRISUSFX01_API AEstadoJuegoGanado : public AActor, public IEstadoEscenario
{
	GENERATED_BODY()
public:	
	AEstadoJuegoGanado();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void EstablecerEscenario(class AEscenario* _Escenario) override;
	virtual void ConstruirNuevoEscenario(class AEscenario* _Escenario, int _Puntos, int _NumLineas) override;
private:
	class AEscenario* Escenario;
	float TiempoFin;
};
