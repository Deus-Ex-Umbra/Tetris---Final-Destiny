#include "EstadoIntermedioAllegro.h"
#include "Escenario.h"
#include "ControladorTetris.h"

AEstadoIntermedioAllegro::AEstadoIntermedioAllegro()
{
	PrimaryActorTick.bCanEverTick = true;
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioAllegro_Mat.EscenarioAllegro_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/M_LightStage_Arrows.M_LightStage_Arrows'"));
}

void AEstadoIntermedioAllegro::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEstadoIntermedioAllegro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoIntermedioAllegro::EstablecerEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

void AEstadoIntermedioAllegro::ConstruirNuevoEscenario(AEscenario* _Escenario, int _Puntos, int _NumLineas)
{
	if (_Puntos >= 1050 && _NumLineas >= 35) {
		AControladorTetris::CoolLeft = 0.4f;
		AControladorTetris::CoolDown = 0.4f;
		_Escenario->EscenarioMesh->SetMaterial(0, EscenarioMaterial);
		_Escenario->LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
		Escenario->EstablecerEstadoEscenario(Escenario->ObtenerEstadoEscenarioFinal());
	}
}

