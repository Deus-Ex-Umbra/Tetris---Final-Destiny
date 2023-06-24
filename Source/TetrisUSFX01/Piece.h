// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include <functional>
#include <vector>
#include "Piece.generated.h"

UCLASS()
class TETRISUSFX01_API APiece : public AActor
{
	GENERATED_BODY()
	
public:	
	APiece();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	UPROPERTY()
		class USceneComponent* SceneComponent;
	void DrawDebugLines();
	void TestRotate();
	void MoveLeft();
	void MoveRight();
	bool MoveDown(bool PlaySound = true);
	void Dismiss();
	bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck);
private:
	TArray<ABlock*> Blocks;
	TArray<int> BlocksNum;
	std::vector<std::pair<float, float>> CoordenadasBlocks;
	class AFabricaBlocks* FabricaBlocks;
public:
	void EstablecerBlocks(TArray<ABlock*> _Blocks);
	void EstablecerNumsBlocks(TArray<int> _BlocksNum);
	void EstablecerCoordenadasBlocks(std::vector<std::pair<float, float>> _CoordenadasBlocks);
};
