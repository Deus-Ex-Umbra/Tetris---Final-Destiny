// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Piece.h"
#include "Board.generated.h"
UCLASS()
class TETRISUSFX01_API ABoard : public APawn
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY()
	APiece* CurrentPiece;
	UPROPERTY()
	APiece* NextPiece;
	UPROPERTY()
	APiece* NextNextPiece;
	static ABoard* instancia;
	static ABoard* GetInstancia();
	void Rotate(); 
	void MoveLeft(); 
	void MoveRight();
	void MoveDown(); 
	void NewPiece();
	void CheckLine();
	void MoveDownToEnd();
private:
	ABoard();
	UPROPERTY()
		class AEscenario* Escenario;
	UPROPERTY()
		class AFabricaEscenario* FabricaEscenario;
	UPROPERTY()
		class AConstructPieceI* ConstructorPieceI;
	UPROPERTY()
		class AConstructPieceJ* ConstructorPieceJ;
	UPROPERTY()
		class AConstructPieceL* ConstructorPieceL;
	UPROPERTY()
		class AConstructPieceO* ConstructorPieceO;
	UPROPERTY()
		class AConstructPieceS* ConstructorPieceS;
	UPROPERTY()
		class AConstructPieceT* ConstructorPieceT;
	UPROPERTY()
		class AConstructPieceZ* ConstructorPieceZ;
	UPROPERTY()
		class AConstructPieceUnique* ConstructorPieceUnique;
	UPROPERTY()
		class AConstructPieceSum* ConstructorPieceSum;
	UPROPERTY()
		class AConstructPieceX* ConstructorPieceX;
	UPROPERTY()
		class ACruzDivine* CruzDivine;
	UPROPERTY()
		class APieceCDave* PieceCDave;
	UPROPERTY()
		class ADirectorPiece* DirectorPiece;
	enum PieceStatus { PS_NOT_INITED, PS_MOVING, PS_GOT_BOTTOM };
	PieceStatus Status = PS_NOT_INITED;
	const float CoolDown = 0.5f;
	float CoolLeft = 0.5f;
	bool bGameOver = false;
	bool CheckGameOver();
	void EstablecerConstructPiece(int _numConstructPiece);
	void CrearPieces();
	int numCurrentPiece;
	int numNextPiece;
	int numNextNextPiece;
};
