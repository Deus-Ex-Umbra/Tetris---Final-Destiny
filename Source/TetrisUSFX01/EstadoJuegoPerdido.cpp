#include "EstadoJuegoPerdido.h"
#include "Escenario.h"
#include "ControladorTetris.h"

AEstadoJuegoPerdido::AEstadoJuegoPerdido()
{
	PrimaryActorTick.bCanEverTick = true;
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioTierra_Mat.EscenarioTierra_Mat'"));
	TiempoFin = 0.0f;
}

void AEstadoJuegoPerdido::BeginPlay()
{
	Super::BeginPlay();
}

void AEstadoJuegoPerdido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (AControladorTetris::GameOver) {
		if (TiempoFin >= 7.0f) {
			AControladorTetris::Restart = true;
			AControladorTetris::GameOver = false;
			TiempoFin = 0.0f;
			Escenario->EstablecerEstadoEscenario(Escenario->ObtenerEstadoEscenarioIntermedio());
		}
		TiempoFin += DeltaTime;
	}
}

void AEstadoJuegoPerdido::EstablecerEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

void AEstadoJuegoPerdido::ConstruirNuevoEscenario(AEscenario* _Escenario, int _Puntos, int _NumLineas)
{
	if (AControladorTetris::GameOver) {
		_Escenario->EscenarioMesh->SetMaterial(0, EscenarioMaterial);
		_Escenario->EscenarioMesh->SetRelativeLocation(FVector(-20.0f, 0.0f, 0.0f));
	}
}

