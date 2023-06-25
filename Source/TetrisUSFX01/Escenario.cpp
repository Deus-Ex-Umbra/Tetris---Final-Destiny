#include "Escenario.h"
#include "EstadoIntermedioLento.h"
#include "EstadoFegefeuerSospenso.h"
#include "EstadoCelestialCantaible.h"
#include "EstadoIntermedioAdagio.h"
#include "EstadoIntermedioAllegro.h"
#include "EstadoFinalPresto.h"
#include "EstadoJuegoGanado.h"
#include "EstadoJuegoPerdido.h"
#include "ControladorTetris.h"


AEscenario::AEscenario()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEscenario::BeginPlay()
{
	Super::BeginPlay();
	EstadoFegefeuerSospenso = GetWorld()->SpawnActor<AEstadoFegefeuerSospenso>(AEstadoFegefeuerSospenso::StaticClass());
	EstadoFegefeuerSospenso->EstablecerEscenario(this);
	EstadoIntermedioLento = GetWorld()->SpawnActor<AEstadoIntermedioLento>(AEstadoIntermedioLento::StaticClass());
	EstadoIntermedioLento->EstablecerEscenario(this);
	EstadoIntermedioAdagio = GetWorld()->SpawnActor<AEstadoIntermedioAdagio>(AEstadoIntermedioAdagio::StaticClass());
	EstadoIntermedioAdagio->EstablecerEscenario(this);
	EstadoIntermedioAllegro = GetWorld()->SpawnActor<AEstadoIntermedioAllegro>(AEstadoIntermedioAllegro::StaticClass());
	EstadoIntermedioAllegro->EstablecerEscenario(this);
	EstadoCelestialCantaible = GetWorld()->SpawnActor<AEstadoCelestialCantaible>(AEstadoCelestialCantaible::StaticClass());
	EstadoCelestialCantaible->EstablecerEscenario(this);
	EstadoFinalPresto = GetWorld()->SpawnActor<AEstadoFinalPresto>(AEstadoFinalPresto::StaticClass());
	EstadoFinalPresto->EstablecerEscenario(this);
	EstadoJuegoGanado = GetWorld()->SpawnActor<AEstadoJuegoGanado>(AEstadoJuegoGanado::StaticClass());
	EstadoJuegoGanado->EstablecerEscenario(this);
	EstadoJuegoPerdido = GetWorld()->SpawnActor<AEstadoJuegoPerdido>(AEstadoJuegoPerdido::StaticClass());
	EstadoJuegoPerdido->EstablecerEscenario(this);
}

void AEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEscenario::CambiarEstadoEscenario(AEscenario* _EstadoEscenario, int _Puntos, int _NumLineas)
{
	Estado->ConstruirNuevoEscenario(_EstadoEscenario, _Puntos, _NumLineas);
}

void AEscenario::EstablecerEstadoEscenario(IEstadoEscenario* _EstadoEscenario)
{
	Estado = _EstadoEscenario;
}

IEstadoEscenario* AEscenario::ObtenerEstadoEscenarioIntermedio()
{
	if (AControladorTetris::GameOver) return ObtenerEstadoJuegoPerdido();
	if (this->ObtenerNombreEscenario() != "Divine") {
		switch (FMath::RandRange(1, 3)) {
		case 1:
			return EstadoIntermedioLento;
		case 2:
			return EstadoIntermedioAdagio;
		default:
			return EstadoIntermedioAllegro;
		}
	} else {
		return ObtenerEstadoPurificacion();
	}
}

IEstadoEscenario* AEscenario::ObtenerEstadoEscenarioFinal()
{
	if (AControladorTetris::GameOver) return ObtenerEstadoJuegoPerdido();
	return EstadoFinalPresto;
}

IEstadoEscenario* AEscenario::ObtenerEstadoPurificacion()
{
	if (AControladorTetris::GameOver) return ObtenerEstadoJuegoPerdido();
	return EstadoFegefeuerSospenso;
}

IEstadoEscenario* AEscenario::ObtenerEstadoCelestial()
{
	if (AControladorTetris::GameOver) return ObtenerEstadoJuegoPerdido();
	return EstadoCelestialCantaible;
}

IEstadoEscenario* AEscenario::ObtenerEstadoJuegoGanado()
{
	return EstadoJuegoGanado;
}

IEstadoEscenario* AEscenario::ObtenerEstadoJuegoPerdido()
{
	return EstadoJuegoPerdido;
}

void AEscenario::IniciarEstado(AEscenario* _Escenario)
{
	Estado = (_Escenario->ObtenerNombreEscenario() == "Divine") ? ObtenerEstadoPurificacion() : ObtenerEstadoEscenarioIntermedio();
}
