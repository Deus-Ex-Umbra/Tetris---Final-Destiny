#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControladorTetris.generated.h"

UCLASS()
class TETRISUSFX01_API AControladorTetris : public AActor
{
	GENERATED_BODY()
public:	
	AControladorTetris();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	static int Puntaje;
	static int Lineas;
	static float TiempoJuego;
	static float CoolLeft;
	static float CoolDown;
	static bool GameOver;
	static bool WinGame;
	static bool SceneFinal;
	static bool NewMusic;
	static bool Restart;
};
