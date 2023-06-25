#include "EstadoFegefeuerSospenso.h"
#include "Escenario.h"
#include "ControladorTetris.h"

AEstadoFegefeuerSospenso::AEstadoFegefeuerSospenso()
{
	PrimaryActorTick.bCanEverTick = true;
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioPurgatorio_Mat.EscenarioPurgatorio_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));
}

void AEstadoFegefeuerSospenso::BeginPlay()
{
	Super::BeginPlay();
}

void AEstadoFegefeuerSospenso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoFegefeuerSospenso::EstablecerEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

void AEstadoFegefeuerSospenso::ConstruirNuevoEscenario(AEscenario* _Escenario, int _Puntos, int _NumBlocks)
{
	if (_Puntos >= 1200 && _NumBlocks >= 40) {
		AControladorTetris::CoolLeft = 0.4f;
		AControladorTetris::CoolDown = 0.4f;
		_Escenario->EscenarioMesh->SetMaterial(0, EscenarioMaterial);
		_Escenario->LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
		Escenario->EstablecerEstadoEscenario(Escenario->ObtenerEstadoCelestial());
	}
}

