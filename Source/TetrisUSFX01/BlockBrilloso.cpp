#include "BlockBrilloso.h"

ABlockBrilloso::ABlockBrilloso()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Mesh/BlockBrilloso.BlockBrilloso'"));
	BlockMesh->SetStaticMesh(Mesh.Object);
	Tiempo = 0.0f;
}

void ABlockBrilloso::BeginPlay()
{
	Super::BeginPlay();
	CrearBlock();
	BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BlockMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
}

void ABlockBrilloso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Tiempo >= 0.1f) {
		if (FMath::RandRange(0, 1) == 1)
		{
			UMaterialInterface* NewBlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Material_4.Material_4'"));
			BlockMesh->SetMaterial(FMath::RandRange(0, 1), NewBlockMaterial);
		}
		else {
			UMaterialInterface* NewBlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/M_LightStage_Arrows.M_LightStage_Arrows'"));
			BlockMesh->SetMaterial(FMath::RandRange(0, 1), NewBlockMaterial);
		}
		Tiempo = 0.0f;
	}
	Tiempo += DeltaTime;
}

void ABlockBrilloso::CrearBlock()
{
	BlockMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Mesh/Material_2.Material_2'"));
	BlockMesh->SetMaterial(1, BlockMaterial);
}
