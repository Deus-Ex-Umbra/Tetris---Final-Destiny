#include "ControladorTetris.h"

AControladorTetris::AControladorTetris()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AControladorTetris::BeginPlay()
{
	Super::BeginPlay();
}

void AControladorTetris::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

int AControladorTetris::Puntaje = 0;
int AControladorTetris::Lineas = 0;
float AControladorTetris::TiempoJuego = 0.0f;
float AControladorTetris::CoolLeft = 0.5f;
float AControladorTetris::CoolDown = 0.5f;
bool AControladorTetris::GameOver = false;
bool AControladorTetris::WinGame = false;
bool AControladorTetris::SceneFinal = false;
bool AControladorTetris::NewMusic = false;
bool AControladorTetris::Restart = false;

