// Fill out your copyright notice in the Description page of Project Settings.


#include "Piece.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "FabricaBlocks.h"
#include <vector>

APiece::APiece()
{
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>("Pieces Scene");
	RootComponent = SceneComponent;
}

void APiece::BeginPlay()
{
	Super::BeginPlay();
    FabricaBlocks = GetWorld()->SpawnActor<AFabricaBlocks>(AFabricaBlocks::StaticClass());
    SpawnBlocks();
}

void APiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APiece::SpawnBlocks()
{
    std::vector<std::vector<std::pair<float, float>>> Shapes =
    {
        {{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}}, //I
        {{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}}, //J
        {{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}}, //L
        {{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}}, //O
        {{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}}, //S
        {{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}}, //T
        {{-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}}, //Z
        /*{{-20.0, 10.0}, {-10.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},*/
    };
    const int Index = FMath::RandRange(0, Shapes.size() - 1);
    UE_LOG(LogTemp, Warning, TEXT("index=%d"), Index);
    const std::vector<std::pair<float, float>>& YZs = Shapes[Index];
    for (auto&& YZ : YZs)
    {
        ABlock* B = FabricaBlocks->FabricarBlock(FMath::RandRange(1, 8), this->GetActorLocation(), FRotator(0.0, 0.0, 0.0));
        Blocks.Add(B);
        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(0.0, YZ.first, YZ.second));
    }
}

void APiece::EstablecerBlocks(TArray<ABlock*> _Blocks)
{
    Blocks = _Blocks;
}

void APiece::EstablecerNumsBlocks(TArray<int> _BlocksNum)
{
    BlocksNum = _BlocksNum;
}

void APiece::EstablecerCoordenadasBlocks(std::vector<std::pair<float, float>> _CoordenadasBlocks)
{
    CoordenadasBlocks = _CoordenadasBlocks;
}

void APiece::DrawDebugLines()
{
    for (ABlock* B : Blocks)
    {
        FVector V1 = B->GetActorLocation();
        FVector V2(V1.X, V1.Y, 5.0f);
        DrawDebugLine(GetWorld(), V1, V2, FColor::Green, false, 1, 0, 1);
    }
}

void APiece::TestRotate()
{
    auto RotateVector = [this](FVector OldVector) {
        FVector ActorVector = this->GetActorLocation();
        FVector BlockVector = OldVector;
        FVector TempVector = BlockVector - ActorVector;
        TempVector = ActorVector + TempVector.RotateAngleAxis(90.0, FVector(1.0, 0.0, 0.0));
        return TempVector;
    };

    if (!CheckWillCollision(RotateVector))
    {
        UE_LOG(LogTemp, Warning, TEXT("now can rotate"));
        FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, 0.0, -90.0);
        this->SetActorRelativeRotation(NewRotation);
    }
}

void APiece::Dismiss()
{
    Blocks.Empty();
}

void APiece::MoveLeft()
{
    auto MoveVectorLeft = [](FVector OldVector) {
        OldVector.Y -= 10.0f;
        return OldVector;
    };
    if (!CheckWillCollision(MoveVectorLeft))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Y -= 10;
        SetActorLocation(NewLocation);
    }
}

void APiece::MoveRight()
{
    auto MoveVectorRight = [](FVector OldVector) {
        OldVector.Y += 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorRight))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Y += 10;
        SetActorLocation(NewLocation);
    }
}

bool APiece::MoveDown(bool PlaySound)
{
    auto MoveVectorDown = [](FVector OldVector) {
        OldVector.Z -= 10.0f;
        return OldVector;
    };
    if (!CheckWillCollision(MoveVectorDown))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Z -= 10;
        SetActorLocation(NewLocation);
        return true;
    } else {
        return false;
    }
}

bool APiece::CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck)
{
    FCollisionQueryParams Params;
    for (ABlock* B : Blocks)
    {
        Params.AddIgnoredActor(B);
    }

    for (ABlock* B : Blocks)
    {
        FVector TempVector = B->GetActorLocation();
        TempVector = ChangeBeforeCheck(TempVector);

        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 4.0f, 4.0f));
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            TempVector, B->GetActorQuat(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);

        if (b)
        {
            for (auto&& Result : OutOverlaps)
            {
                UE_LOG(LogTemp, Warning, TEXT("OverLapped with actor %s, component=%s"), *Result.GetActor()->GetName(),
                    *Result.GetComponent()->GetName());
            }
            return true;
        }
    }
    return false;
}


