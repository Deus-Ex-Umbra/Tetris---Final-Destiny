#include "EstadoJuegoGanado.h"
#include "Escenario.h"
#include "ControladorTetris.h"

AEstadoJuegoGanado::AEstadoJuegoGanado()
{
	PrimaryActorTick.bCanEverTick = true;
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioTúGanaste_Mat.EscenarioTúGanaste_Mat'"));
	TiempoFin = 0.0f;
}

void AEstadoJuegoGanado::BeginPlay()
{
	Super::BeginPlay();
}

void AEstadoJuegoGanado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (AControladorTetris::GameOver) {
		{
			if (TiempoFin >= 11.0f && AControladorTetris::GameOver) {
				AControladorTetris::Restart = true;
				AControladorTetris::GameOver = false;
				AControladorTetris::Puntaje = 0;
				AControladorTetris::Lineas = 0;
				TiempoFin = 0.0f;
				Escenario->EstablecerEstadoEscenario(Escenario->ObtenerEstadoEscenarioIntermedio());
			}
			TiempoFin += DeltaTime;
		}
	}
}

void AEstadoJuegoGanado::EstablecerEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

void AEstadoJuegoGanado::ConstruirNuevoEscenario(AEscenario* _Escenario, int _Puntos, int _NumLineas)
{
	if (_Puntos >= 3750 && _NumLineas >= 125) {
		_Escenario->EscenarioMesh->SetMaterial(0, EscenarioMaterial);
		_Escenario->EscenarioMesh->SetRelativeLocation(FVector(-20.0f, 0.0f, 0.0f));
	}
}

