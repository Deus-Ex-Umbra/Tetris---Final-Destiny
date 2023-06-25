#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Piece.h"
#include "ControladorTetris.h"
#include "TetrisUSFX01GameModeBase.generated.h"

UCLASS()
class TETRISUSFX01_API ATetrisUSFX01GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
public:
	ATetrisUSFX01GameModeBase();
	virtual void Tick(float DeltaTime) override;
};
