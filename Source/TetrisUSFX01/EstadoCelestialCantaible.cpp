#include "EstadoCelestialCantaible.h"
#include "ControladorTetris.h"
#include "Block.h"
#include "CruzDivine.h"
#include "DirectorPiece.h"
#include "Piece.h"
#include "BlockBrilloso.h"
#include "Escenario.h"

AEstadoCelestialCantaible::AEstadoCelestialCantaible()
{
	PrimaryActorTick.bCanEverTick = true;
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioDivino_Mat.EscenarioDivino_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioInfiernal_Mat.EscenarioInfiernal_Mat'"));
	Tiempo = 0.0f;
	In = false;
}

void AEstadoCelestialCantaible::BeginPlay()
{
	Super::BeginPlay();
	Director = GetWorld()->SpawnActor<ADirectorPiece>(ADirectorPiece::StaticClass());
	CruzDivine = GetWorld()->SpawnActor<ACruzDivine>(ACruzDivine::StaticClass());
}


void AEstadoCelestialCantaible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (In) {
		if (Tiempo >= FMath::RandRange(6, 15)) {
			ABlock* Block = GetWorld()->SpawnActor<ABlockBrilloso>(FVector(0.0f, (FMath::RandRange(-3, 3) * 10) + 10, FMath::RandRange(1, 13) * 10), FRotator(0.0f, 0.0f, 0.0f));
			if (FMath::RandRange(0, 4) == 2) {
				Director->EstablecerConstructorPiece(CruzDivine);
				APiece* Cruz = Director->ObtenerPiece(FVector(0.0f, (FMath::RandRange(-3, 3) * 10) + 10, FMath::RandRange(3, 15) * 10), FRotator(0.0f, 0.0f, 0.0f));
				Cruz->SpawnearBlocks();
			}
			Tiempo = 0.0f;
		}
		Tiempo += DeltaTime;
	}
}

void AEstadoCelestialCantaible::EstablecerEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

void AEstadoCelestialCantaible::ConstruirNuevoEscenario(AEscenario* _Escenario, int _Puntos, int _NumLineas)
{
	if (_Puntos >= 2550 && _NumLineas >= 85) {
		In = true;
		AControladorTetris::CoolLeft = 0.3f;
		AControladorTetris::CoolDown = 0.3f;
		AControladorTetris::SceneFinal = true;
		_Escenario->EscenarioMesh->SetMaterial(0, EscenarioMaterial);
		_Escenario->LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
		Escenario->EstablecerEstadoEscenario(Escenario->ObtenerEstadoJuegoGanado());
	}
}

