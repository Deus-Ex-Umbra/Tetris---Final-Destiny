#include "EstadoFinalPresto.h"
#include "Escenario.h"
#include "Block.h"
#include "BlockEspecial.h"
#include "ControladorTetris.h"

AEstadoFinalPresto::AEstadoFinalPresto()
{
	PrimaryActorTick.bCanEverTick = true;
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioFinalWar_Mat.EscenarioFinalWar_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioInfiernal_Mat.EscenarioInfiernal_Mat'"));
	Tiempo = 0.0f;
	In = false;
}

void AEstadoFinalPresto::BeginPlay()
{
	Super::BeginPlay();
}

void AEstadoFinalPresto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (In) {
		if (Tiempo >= FMath::RandRange(7, 10)) {
			ABlock* Block = GetWorld()->SpawnActor<ABlockEspecial>(FVector(0.0f, (FMath::RandRange(-3, 3) * 10) + 10, FMath::RandRange(1, 14) * 10), FRotator(0.0f, 0.0f, 0.0f));
			Tiempo = 0.0f;
		}
		Tiempo += DeltaTime;
	}
}

void AEstadoFinalPresto::EstablecerEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

void AEstadoFinalPresto::ConstruirNuevoEscenario(AEscenario* _Escenario, int _Puntos, int _NumLineas)
{
	if (_Puntos >= 2600 && _NumLineas >= 80) {
		AControladorTetris::CoolLeft = 0.3f;
		AControladorTetris::CoolDown = 0.3f;
		AControladorTetris::SceneFinal = true;
		In = true;
		_Escenario->EscenarioMesh->SetMaterial(0, EscenarioMaterial);
		_Escenario->LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
		Escenario->EstablecerEstadoEscenario(Escenario->ObtenerEstadoJuegoGanado());
	}
}

