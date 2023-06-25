#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoEscenario.h"
#include "Escenario.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenario : public AActor
{
	GENERATED_BODY()
public:	
	AEscenario();
protected:
	virtual void BeginPlay() override;
	FString NombreEscenario;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual FString ObtenerNombreEscenario() PURE_VIRTUAL(AEscenario::ObtenerNombreEscenario(), return ""; );
	virtual void CrearEscenario() PURE_VIRTUAL(AEscenario::CrearEscenario(), );
	UPROPERTY()
		class UStaticMeshComponent* EscenarioMesh;
	UPROPERTY()
		class UStaticMeshComponent* LimitePiezasMesh;
	UPROPERTY()
		class UMaterialInterface* EscenarioMaterial;
	UPROPERTY()
		class UMaterialInterface* LimitePiezasMaterial;
	UPROPERTY()
		class USoundBase* MusicaEscenario;
	UPROPERTY()
		class UAudioComponent* MusicaComponente;
	void CambiarEstadoEscenario(AEscenario* _EstadoEscenario, int _Puntos, int _NumLineas);
	void EstablecerEstadoEscenario(IEstadoEscenario* _EstadoEscenario);
	IEstadoEscenario* ObtenerEstadoEscenarioIntermedio();
	IEstadoEscenario* ObtenerEstadoEscenarioFinal();
	IEstadoEscenario* ObtenerEstadoPurificacion();
	IEstadoEscenario* ObtenerEstadoCelestial();
	IEstadoEscenario* ObtenerEstadoJuegoGanado();
	IEstadoEscenario* ObtenerEstadoJuegoPerdido();
	void IniciarEstado(AEscenario* _Escenario);
private:
	IEstadoEscenario* Estado;
	IEstadoEscenario* EstadoFegefeuerSospenso;
	IEstadoEscenario* EstadoCelestialCantaible;
	IEstadoEscenario* EstadoJuegoGanado;
	IEstadoEscenario* EstadoJuegoPerdido;
	IEstadoEscenario* EstadoFinalPresto;
	IEstadoEscenario* EstadoIntermedioLento;
	IEstadoEscenario* EstadoIntermedioAdagio;
	IEstadoEscenario* EstadoIntermedioAllegro;
};
