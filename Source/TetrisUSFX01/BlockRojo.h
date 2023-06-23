// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockRojo.generated.h"
UCLASS()
class TETRISUSFX01_API ABlockRojo : public ABlock
{
	GENERATED_BODY()
public:
	ABlockRojo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearBlock() override;
};
