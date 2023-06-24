// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorPiece.h"
#include "ConstructPieceJ.generated.h"

UCLASS()
class TETRISUSFX01_API AConstructPieceJ : public AActor, public IConstructorPiece
{
	GENERATED_BODY()
	
public:	
	AConstructPieceJ();
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
