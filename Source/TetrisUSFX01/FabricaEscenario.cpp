#include "FabricaEscenario.h"
#include "Escenario.h"
#include "EscenarioPeace.h"
#include "EscenarioNotExistWorld.h"
#include "EscenarioThisWorldIsBeautiful.h"
#include "EscenarioDivine.h"

AFabricaEscenario::AFabricaEscenario()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFabricaEscenario::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFabricaEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AEscenario* AFabricaEscenario::FabricarEscenario(int _numEscenario)
{
	switch (_numEscenario)
	{
	case 1:
		return GetWorld()->SpawnActor<AEscenarioThisWorldIsBeautiful>();
		break;
	case 2:
		return GetWorld()->SpawnActor<AEscenarioPeace>();
		break;
	case 3:
		return GetWorld()->SpawnActor<AEscenarioNotExistWorld>();
		break;
	default:
		if (FMath::RandRange(4, 18) == 9) return GetWorld()->SpawnActor<AEscenarioDivine>();
		else switch (FMath::RandRange(1, 3))
		{
		case 1:
			return GetWorld()->SpawnActor<AEscenarioThisWorldIsBeautiful>();
			break;
		case 2:
			return GetWorld()->SpawnActor<AEscenarioPeace>();
			break;
		default:
			return GetWorld()->SpawnActor<AEscenarioNotExistWorld>();
			break;
		}
		break;
	};
}

