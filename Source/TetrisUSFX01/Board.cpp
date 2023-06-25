// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"
#include "ControladorTetris.h"
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
#include "CruzDivine.h"
#include "PieceCDave.h"
#include "Escenario.h"
#include "FabricaEscenario.h"

ABoard::ABoard()
{
	PrimaryActorTick.bCanEverTick = true;
    PuntajeText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("PuntajeText"));
    LineasText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LineasText"));
    TiempoText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TiempoText"));
    TiempoCambioColor = 0;
}

void ABoard::BeginPlay()
{
    Super::BeginPlay();
    DirectorPiece = GetWorld()->SpawnActor<ADirectorPiece>(ADirectorPiece::StaticClass());
    ConstructorPieceI = GetWorld()->SpawnActor<AConstructPieceI>(AConstructPieceI::StaticClass());
    ConstructorPieceJ = GetWorld()->SpawnActor<AConstructPieceJ>(AConstructPieceJ::StaticClass());
    ConstructorPieceL = GetWorld()->SpawnActor<AConstructPieceL>(AConstructPieceL::StaticClass());
    ConstructorPieceO = GetWorld()->SpawnActor<AConstructPieceO>(AConstructPieceO::StaticClass());
    ConstructorPieceS = GetWorld()->SpawnActor<AConstructPieceS>(AConstructPieceS::StaticClass());
    ConstructorPieceT = GetWorld()->SpawnActor<AConstructPieceT>(AConstructPieceT::StaticClass());
    ConstructorPieceZ = GetWorld()->SpawnActor<AConstructPieceZ>(AConstructPieceZ::StaticClass());
    ConstructorPieceSum = GetWorld()->SpawnActor<AConstructPieceSum>(AConstructPieceSum::StaticClass());
    ConstructorPieceUnique = GetWorld()->SpawnActor<AConstructPieceUnique>(AConstructPieceUnique::StaticClass());
    ConstructorPieceX = GetWorld()->SpawnActor<AConstructPieceX>(AConstructPieceX::StaticClass());
    CruzDivine = GetWorld()->SpawnActor<ACruzDivine>(ACruzDivine::StaticClass());
    PieceCDave = GetWorld()->SpawnActor<APieceCDave>(APieceCDave::StaticClass());
    FabricaEscenario = GetWorld()->SpawnActor<AFabricaEscenario>(AFabricaEscenario::StaticClass());
    Escenario = FabricaEscenario->FabricarEscenario(FMath::RandRange(1, 4));
    EscenarioA = Escenario;
    Escenario->IniciarEstado(EscenarioA);
    AControladorTetris* Controlador = GetWorld()->SpawnActor<AControladorTetris>(AControladorTetris::StaticClass());
    for (TActorIterator<APiece> it(GetWorld()); it; ++it)
    {
        if (it->GetFName() == TEXT("DissmissPieces"))
        {
            it->Dismiss();
            it->Destroy();
        }
    }
    PuntajeText->SetRelativeLocation(FVector(0.0f, -175.0f, 155.0f));
    PuntajeText->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
    PuntajeText->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    PuntajeText->SetTextRenderColor(FColor::White);
    PuntajeText->SetText(FString::Printf(TEXT("Puntos Totales: %i"), AControladorTetris::Puntaje));
    LineasText->SetRelativeLocation(FVector(0.0f, -175.0f, 95.0f));
    LineasText->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
    LineasText->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    LineasText->SetTextRenderColor(FColor::White);    
    LineasText->SetText(FString::Printf(TEXT("Lineas Totales: %i"), AControladorTetris::Lineas));
    TiempoText->SetRelativeLocation(FVector(0.0f, -175.0f, 35.0f));
    TiempoText->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
    TiempoText->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    TiempoText->SetTextRenderColor(FColor::White);
    TiempoText->SetText(FString::Printf(TEXT("Tiempo: %i"), int(AControladorTetris::TiempoJuego)));
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

    if (bGameOver) {
        AControladorTetris::GameOver = true;
        Escenario->CambiarEstadoEscenario(EscenarioA, 0, 0);
		return;
	}

    switch (Status)
    {
    case PS_NOT_INITED:
        CrearPieces();
        AControladorTetris::CoolLeft = AControladorTetris::CoolDown;
        Status = PS_MOVING;
        break;
    case PS_MOVING:
        AControladorTetris::CoolLeft -= DeltaTime;
        if (AControladorTetris::CoolLeft <= 0.0f)
        {
            MoveDown();
        }
        break;
    case PS_GOT_BOTTOM:
        NextNextPiece->EliminarPiece();
        NextPiece->EliminarPiece();
        AControladorTetris::CoolLeft -= DeltaTime;
        if (AControladorTetris::CoolLeft <= 0.0f)
        {
            if (CurrentPiece)
            {
                CurrentPiece->Dismiss();
                CurrentPiece->Destroy();
            }
            CurrentPiece = nullptr;
            NewPiece();
            AControladorTetris::Puntaje += FMath::RandRange(5, 10);
            PuntajeText->SetText(FString::Printf(TEXT("Puntos Totales: %i"), AControladorTetris::Puntaje));
            AControladorTetris::CoolLeft = AControladorTetris::CoolDown;
            Status = PS_MOVING;
        }
        break;
    case GAME_OVER:
        break;
    default:
        break;
    }
    AControladorTetris::TiempoJuego += DeltaTime;
    TiempoText->SetText(FString::Printf(TEXT("Tiempo: %i"), int(AControladorTetris::TiempoJuego)));
    if (TiempoCambioColor >= 0.3) {
        PuntajeText->SetTextRenderColor(ColorAzar(FMath::RandRange(1, 5)));
        LineasText->SetTextRenderColor(ColorAzar(FMath::RandRange(1, 5)));
        TiempoText->SetTextRenderColor(ColorAzar(FMath::RandRange(1, 5)));
        TiempoCambioColor = 0;
    }
    TiempoCambioColor += DeltaTime;
}

void ABoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAction("Rotate", IE_Pressed, this, &ABoard::Rotate);
    PlayerInputComponent->BindAction("MoveDown", IE_Pressed, this, &ABoard::MoveDown);
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
        AControladorTetris::CoolLeft = AControladorTetris::CoolDown;
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
    numCurrentPiece = numNextPiece;
    EstablecerConstructPiece(numCurrentPiece);
    CurrentPiece = DirectorPiece->ObtenerPiece(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    CurrentPiece->SpawnearBlocks(NextPiece->ObtenerCoordenadasBlocks(), NextPiece->ObtenerBlocks());
    if (NextPiece)
    {
        NextPiece->Dismiss();
        NextPiece->Destroy();
    }
    numNextPiece = numNextNextPiece;
    EstablecerConstructPiece(numNextPiece);
    NextPiece = DirectorPiece->ObtenerPiece(FVector(0.0f, 105.0f, 175.0f), FRotator(0.0f, 0.0f, 0.0f));
    NextPiece->SpawnearBlocks(NextNextPiece->ObtenerCoordenadasBlocks(), NextNextPiece->ObtenerBlocks());
    if (NextNextPiece)
    {
        NextNextPiece->Dismiss();
        NextNextPiece->Destroy();
    }
    numNextNextPiece = (AControladorTetris::SceneFinal) ? 11 : FMath::RandRange(1, 10);
    if (numNextNextPiece == 8) numNextNextPiece = (FMath::RandRange(0, 2) != 1) ? 9 : 8; 
    EstablecerConstructPiece(numNextNextPiece);
    NextNextPiece = DirectorPiece->ObtenerPiece(FVector(0.0f, 105.0f, 95.0f), FRotator(0.0f, 0.0f, 0.0f));
    NextNextPiece->SpawnearBlocks();
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
        DrawDebugBox(GetWorld(), Location, Extent, FColor::Silver, false, 1, 0, 1);
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
            AControladorTetris::Puntaje += 30;
            AControladorTetris::Lineas += 1;
            PuntajeText->SetText(FString::Printf(TEXT("Puntos Totales: %i"), AControladorTetris::Puntaje));
            LineasText->SetText(FString::Printf(TEXT("Lineas Totales: %i"), AControladorTetris::Lineas));
            Escenario->CambiarEstadoEscenario(EscenarioA, AControladorTetris::Puntaje, AControladorTetris::Lineas);
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
        AControladorTetris::CoolLeft = AControladorTetris::CoolDown;
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
        Status = GAME_OVER;
        return true;
    }
    return CurrentPiece->CheckWillCollision([](FVector OldVector) { return OldVector; });
}

void ABoard::EstablecerConstructPiece(int _numConstructPiece)
{
    switch (_numConstructPiece)
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
    case 11:
        DirectorPiece->EstablecerConstructorPiece(PieceCDave);
		break;
    default:
        DirectorPiece->EstablecerConstructorPiece(CruzDivine);
        break;
    }
}

void ABoard::CrearPieces()
{
    numCurrentPiece = FMath::RandRange(1, 10);
    EstablecerConstructPiece(numCurrentPiece);
    CurrentPiece = DirectorPiece->ObtenerPiece(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    CurrentPiece->SpawnearBlocks();
    numNextPiece = FMath::RandRange(1, 10);
    EstablecerConstructPiece(numNextPiece);
    NextPiece = DirectorPiece->ObtenerPiece(FVector(0.0f, 105.0f, 175.0f), FRotator(0.0f, 0.0f, 0.0f));
    NextPiece->SpawnearBlocks();
    numNextNextPiece = FMath::RandRange(1, 10);
    EstablecerConstructPiece(numNextNextPiece);
    NextNextPiece = DirectorPiece->ObtenerPiece(FVector(0.0f, 105.0f, 95.0f), FRotator(0.0f, 0.0f, 0.0f));
    NextNextPiece->SpawnearBlocks();
}

FColor ABoard::ColorAzar(int _ColorAzar)
{
    switch (_ColorAzar)
    {
    case 1:
		return FColor::Green;
    case 2:
        return FColor::Blue;
    case 3:
        return FColor::Yellow;
    case 4:
        return FColor::White;
    default:
        return FColor::Emerald;
        break;
    }
}
