#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorPiece.h"
#include "CruzDivine.generated.h"

UCLASS()
class TETRISUSFX01_API ACruzDivine : public AActor, public IConstructorPiece
{
	GENERATED_BODY()
public:	
	ACruzDivine();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void ConstruirPiece() override;
	virtual class APiece* ObtenerPiece(FVector _Location, FRotator _Rotation) override;
	virtual TArray<int> ObtenerBlocksNums() override;
private:
	class APiece* Piece;
};
