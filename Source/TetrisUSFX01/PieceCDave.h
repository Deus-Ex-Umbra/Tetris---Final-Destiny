#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorPiece.h"
#include "PieceCDave.generated.h"

UCLASS()
class TETRISUSFX01_API APieceCDave : public AActor, public IConstructorPiece
{
	GENERATED_BODY()
public:	
	APieceCDave();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void ConstruirPiece() override;
	virtual class APiece* ObtenerPiece() override;
	virtual TArray<int> ObtenerBlocksNums() override;
private:
	class APiece* Piece;
};
