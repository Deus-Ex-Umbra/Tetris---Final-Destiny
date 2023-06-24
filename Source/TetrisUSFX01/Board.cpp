// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "DirectorPiece.h"
#include "ConstructPieceI.h"
#include "ConstructPieceJ.h"
#include "ConstructPieceL.h"
#include "ConstructPieceO.h"
#include "ConstructPieceS.h"
#include "ConstructPieceT.h"
#include "ConstructPieceZ.h"
#include "ConstructPieceSum.h"
#include "ConstructPieceUnique.h"
#include "ConstructPieceX.h"
#include "PieceCDave.h"

ABoard::ABoard()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABoard::BeginPlay()
{
	Super::BeginPlay();
    DirectorPiece = GetWorld()->SpawnActor<ADirectorPiece>(ADirectorPiece::StaticClass());
    ConstructorPieceI = GetWorld()->SpawnActor<AConstructPieceI>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    ConstructorPieceJ = GetWorld()->SpawnActor<AConstructPieceJ>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    ConstructorPieceL = GetWorld()->SpawnActor<AConstructPieceL>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    ConstructorPieceO = GetWorld()->SpawnActor<AConstructPieceO>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    ConstructorPieceS = GetWorld()->SpawnActor<AConstructPieceS>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    ConstructorPieceT = GetWorld()->SpawnActor<AConstructPieceT>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    ConstructorPieceZ = GetWorld()->SpawnActor<AConstructPieceZ>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    ConstructorPieceSum = GetWorld()->SpawnActor<AConstructPieceSum>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    ConstructorPieceUnique = GetWorld()->SpawnActor<AConstructPieceUnique>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    ConstructorPieceX = GetWorld()->SpawnActor<AConstructPieceX>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    PieceCDave = GetWorld()->SpawnActor<APieceCDave>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    for (TActorIterator<APiece> it(GetWorld()); it; ++it)
    {
        if (it->GetFName() == TEXT("DissmissPieces"))
        {
            it->Dismiss();
            it->Destroy();
        }
    }
}

ABoard* ABoard::instancia = nullptr;
ABoard* ABoard::GetInstancia()
{
    if (instancia == nullptr) { 
        instancia = NewObject<ABoard>();
    }
    return instancia;
}

void ABoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bGameOver)
    {
        return;
    }

    switch (Status)
    {
    case PS_NOT_INITED:
        NewPiece();
        CoolLeft = CoolDown;
        Status = PS_MOVING;
        break;
    case PS_MOVING:
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            MoveDown();
        }
        break;
    case PS_GOT_BOTTOM:
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            if (CurrentPiece)
            {
                CurrentPiece->Dismiss();
                CurrentPiece->Destroy();
            }
            CurrentPiece = nullptr;
            NewPiece();
            CoolLeft = CoolDown;
            Status = PS_MOVING;
        }
        break;
    default:
        break;
    }
}

void ABoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Rotate", IE_Pressed, this, &ABoard::Rotate);
    PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABoard::MoveLeft);
    PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ABoard::MoveRight);
    PlayerInputComponent->BindAction("MoveDownToEnd", IE_Pressed, this, &ABoard::MoveDownToEnd);
    PlayerInputComponent->BindAction("NewPiece", IE_Pressed, this, &ABoard::NewPiece);
}

void ABoard::Rotate()
{
    if (CurrentPiece && Status != PS_GOT_BOTTOM)
    {
        CurrentPiece->TestRotate();
    }
}

void ABoard::MoveLeft()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveLeft();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveRight()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveRight();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveDown()
{
    if (CurrentPiece)
    {
        if (!CurrentPiece->MoveDown())
        {
            Status = PS_GOT_BOTTOM;
        }
        CoolLeft = CoolDown;
    }
}

void ABoard::NewPiece()
{
    CheckLine();
    if (CurrentPiece)
    {
        CurrentPiece->Dismiss();
        CurrentPiece->Destroy();
    }
    switch (FMath::RandRange(1, 10))
    {
    case 1:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceI);
        break;
    case 2:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceJ);
        break;
    case 3:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceL);
        break;
    case 4:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceO);
        break;
    case 5:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceS);
        break;
    case 6:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceT);
        break;
    case 7:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceZ);
        break;
    case 8:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceSum);
        break;
    case 9:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceUnique);
        break;
    case 10:
        DirectorPiece->EstablecerConstructorPiece(ConstructorPieceX);
        break;
    default:
        DirectorPiece->EstablecerConstructorPiece(PieceCDave);
        break;
    }
    CurrentPiece = DirectorPiece->ObtenerPiece();
    bGameOver = CheckGameOver();
    if (bGameOver)
    {
        UE_LOG(LogTemp, Warning, TEXT("Game Over!!!!!!!!"));
    }
}

void ABoard::CheckLine()
{
    auto MoveDownFromLine = [this](int z) {
        FVector Location(0.0f, 0.0f, 5.0 * z + 100.0);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        FVector Extent(4.5f, 49.5f, 95.0 + 4.5 - 5.0 * z);
        CollisionShape.SetBox(Extent);
        DrawDebugBox(GetWorld(), Location, Extent, FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        if (GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam))
        {
            for (auto&& Result : OutOverlaps)
            {
                FVector NewLocation = Result.GetActor()->GetActorLocation();
                NewLocation.Z -= 10.0f;
                Result.GetActor()->SetActorLocation(NewLocation);
            }
        }
    };

    int z = 0;
    while (z < 20)
    {
        FVector Location(0.0f, 0.0f, 10.0f * z + 5.0f);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 49.0f, 4.0f));
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);
        if (!b || OutOverlaps.Num() < 10)
        {
            ++z;
            continue;
        } else {
            UE_LOG(LogTemp, Warning, TEXT("Find FULL LINE at z=%d"), z);
            for (auto&& Result : OutOverlaps)
            {
                Result.GetActor()->Destroy();
            }
            MoveDownFromLine(z);
        }
    }
}

void ABoard::MoveDownToEnd()
{
    if (!CurrentPiece)
    {
        return;
    }
    while (CurrentPiece->MoveDown())
    {

    }
    switch (Status)
    {
    case PS_MOVING:
        Status = PS_GOT_BOTTOM;
        CoolLeft = CoolDown;
        break;
    case PS_GOT_BOTTOM:
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Wrong status for MoveDownToEnd"));
        break;
    }
}

bool ABoard::CheckGameOver()
{
    if (!CurrentPiece)
    {
        UE_LOG(LogTemp, Warning, TEXT("NoPieces"));
        return true;
    }
    return CurrentPiece->CheckWillCollision([](FVector OldVector) { return OldVector; });
}
