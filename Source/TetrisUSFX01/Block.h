// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

UCLASS(Abstract)
class TETRISUSFX01_API ABlock : public AActor
{
	GENERATED_BODY()
public:
	ABlock();
protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* BlockMesh;
	UPROPERTY()
		UMaterial* BlockMaterial;
public:
	virtual void CrearBlock() PURE_VIRTUAL(ABlock::CrearBlock, );
	virtual void Tick(float DeltaTime) override;
};
