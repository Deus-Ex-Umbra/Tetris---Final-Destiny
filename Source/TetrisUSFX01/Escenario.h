#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenario : public AActor
{
	GENERATED_BODY()
public:	
	AEscenario();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void ObtenerNombreEscenario() PURE_VIRTUAL(AEscenario::ObtenerNombreEscenario(), );
	virtual void CrearEscenario() PURE_VIRTUAL(AEscenario::CrearEscenario(), );
	static UAudioComponent* MusicaEscenarioComponente;
private:
	UPROPERTY()
		class UStaticMeshComponent* EscenarioMesh;
	UPROPERTY()
		class UStaticMeshComponent* LimitePiezasMesh;
	UPROPERTY()
		class UMaterialInterface* EscenarioMaterial;
	UPROPERTY()
		class UMaterialInterface* LimitePiezasMaterial;
	UPROPERTY()
		class USoundBase* MusicaEscenario;
	FString NombreEscenario;
};