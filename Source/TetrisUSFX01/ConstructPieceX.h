// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorPiece.h"
#include "ConstructPieceX.generated.h"

UCLASS()
class TETRISUSFX01_API AConstructPieceX : public AActor, public IConstructorPiece
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstructPieceX();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
