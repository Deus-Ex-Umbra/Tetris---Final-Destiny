// Copyright Epic Games, Inc. All Rights Reserved.

/*Aquí se implementa el Singleton*/
#include "TetrisUSFX01GameModeBase.h"
#include "Board.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

ATetrisUSFX01GameModeBase::ATetrisUSFX01GameModeBase() {
    PrimaryActorTick.bCanEverTick = true;
}

void ATetrisUSFX01GameModeBase::BeginPlay()
{
    Super::BeginPlay();
    ABoard* instancia = ABoard::GetInstancia();
    for (TActorIterator<ACameraActor> it(GetWorld()); it; ++it)
    {
        UE_LOG(LogTemp, Warning, TEXT("Find camera: %s"), *(it->GetFName().ToString()));
        if (it->GetFName() == TEXT("BoardCamera"))
        {
            APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
            PC->SetViewTargetWithBlend(*it, 0.5);
            break;
        }
    }
}

void ATetrisUSFX01GameModeBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

