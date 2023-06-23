#include "FabricaBlocks.h"
#include "Block.h"
#include "BlockRojo.h"
#include "BlockAzul.h"
#include "BlockVerde.h"
#include "BlockTransparente.h"
#include "BlockAmarillo.h"
#include "BlockMorado.h"
#include "BlockCeleste.h"
#include "BlockEspecial.h"
#include "BlockBrilloso.h"

AFabricaBlocks::AFabricaBlocks()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFabricaBlocks::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFabricaBlocks::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABlock* AFabricaBlocks::FabricarBlock(int _numeroblock, FVector Locacion, FRotator Rotacion)
{
	switch (_numeroblock)
	{
	case 1:
		return GetWorld()->SpawnActor<ABlockRojo>(Locacion, Rotacion);
	case 2:
		return GetWorld()->SpawnActor<ABlockAzul>(Locacion, Rotacion);
	case 3:
		return GetWorld()->SpawnActor<ABlockVerde>(Locacion, Rotacion);
	case 4:
		return GetWorld()->SpawnActor<ABlockTransparente>(Locacion, Rotacion);
	case 5:
		return GetWorld()->SpawnActor<ABlockAmarillo>(Locacion, Rotacion);
	case 6:
		return GetWorld()->SpawnActor<ABlockMorado>(Locacion, Rotacion);
	case 7:
		return GetWorld()->SpawnActor<ABlockCeleste>(Locacion, Rotacion);
	case 8:
		return GetWorld()->SpawnActor<ABlockBrilloso>(Locacion, Rotacion);
	default:
		return GetWorld()->SpawnActor<ABlockEspecial>(Locacion, Rotacion);
	}
}

