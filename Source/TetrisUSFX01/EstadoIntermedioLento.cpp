#include "EstadoIntermedioLento.h"
#include "Escenario.h"
#include "ControladorTetris.h"

AEstadoIntermedioLento::AEstadoIntermedioLento()
{
	PrimaryActorTick.bCanEverTick = true;
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioLento_Mat.EscenarioLento_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Aire_Mat.Aire_Mat'"));
}

void AEstadoIntermedioLento::BeginPlay()
{
	Super::BeginPlay();
}

void AEstadoIntermedioLento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoIntermedioLento::EstablecerEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

void AEstadoIntermedioLento::ConstruirNuevoEscenario(AEscenario* _Escenario, int _Puntos, int _NumLineas)
{
	if (_Puntos >= 1050 && _NumLineas >= 35) {
		AControladorTetris::CoolLeft = 0.6f;
		AControladorTetris::CoolDown = 0.6f;
		_Escenario->EscenarioMesh->SetMaterial(0, EscenarioMaterial);
		_Escenario->LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
		Escenario->EstablecerEstadoEscenario(Escenario->ObtenerEstadoEscenarioFinal());
	}
}

