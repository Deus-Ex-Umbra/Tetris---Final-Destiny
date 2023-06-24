#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirectorPiece.generated.h"

UCLASS()
class TETRISUSFX01_API ADirectorPiece : public AActor
{
	GENERATED_BODY()
private:
	class IConstructorPiece* ConstructorPiece;
public:	
	ADirectorPiece();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	void EstablecerConstructorPiece(class IConstructorPiece* _ConstructorPiece);
	void ConstruirPiece();
	class APiece* ObtenerPiece();
};
