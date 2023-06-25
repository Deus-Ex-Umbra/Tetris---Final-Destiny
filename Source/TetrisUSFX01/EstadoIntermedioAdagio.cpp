#include "EstadoIntermedioAdagio.h"
#include "Escenario.h"
#include "ControladorTetris.h"

AEstadoIntermedioAdagio::AEstadoIntermedioAdagio()
{
	PrimaryActorTick.bCanEverTick = true;
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioDeprimente_Mat.EscenarioDeprimente_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Material_005.Material_005'"));
}

void AEstadoIntermedioAdagio::BeginPlay()
{
	Super::BeginPlay();
}

void AEstadoIntermedioAdagio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoIntermedioAdagio::EstablecerEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

void AEstadoIntermedioAdagio::ConstruirNuevoEscenario(AEscenario* _Escenario, int _Puntos, int _NumLineas)
{
	if (_Puntos >= 1050 && _NumLineas >= 35) {
		AControladorTetris::CoolLeft = 0.6f;
		AControladorTetris::CoolDown = 0.6f;
		_Escenario->EscenarioMesh->SetMaterial(0, EscenarioMaterial);
		_Escenario->LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
		Escenario->EstablecerEstadoEscenario(Escenario->ObtenerEstadoEscenarioFinal());
	}
}

