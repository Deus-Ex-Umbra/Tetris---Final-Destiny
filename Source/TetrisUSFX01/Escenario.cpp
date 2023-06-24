#include "Escenario.h"

AEscenario::AEscenario()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEscenario::BeginPlay()
{
	Super::BeginPlay();
}

void AEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

