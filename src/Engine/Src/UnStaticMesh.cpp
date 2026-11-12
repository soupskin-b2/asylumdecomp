// UnStaticMesh.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00956e60
/* The path name of the component's StaticMesh, or "No_StaticMesh". */
FString UStaticMeshComponent::GetDetailedInfoInternal()
{
    FString Result;
    if (StaticMesh != NULL)
    {
        Result = StaticMesh->GetPathName();
    }
    else
    {
        Result = TEXT("No_StaticMesh");
    }
    return Result;
}

// @baa 0x00956f00
/* The detailed info of the StaticMeshComponent, or "No_StaticMeshComponent". */
FString ADynamicSMActor::GetDetailedInfoInternal()
{
    FString Result;
    if (StaticMeshComponent != NULL)
    {
        Result = StaticMeshComponent->GetDetailedInfoInternal();
    }
    else
    {
        Result = TEXT("No_StaticMeshComponent");
    }
    return Result;
}

// @baa 0x00956fb0
/* The detailed info of the StaticMeshComponent, or "No_StaticMeshComponent". */
FString AStaticMeshActor::GetDetailedInfoInternal()
{
    FString Result;
    if (StaticMeshComponent != NULL)
    {
        Result = StaticMeshComponent->GetDetailedInfoInternal();
    }
    else
    {
        Result = TEXT("No_StaticMeshComponent");
    }
    return Result;
}

struct S
{
    INT A;
    INT B;
    INT gap;
    WORD C;
    WORD D;
    WORD E;
    WORD F;
    S* sub_0096b4b0();
};

// @baa 0x0096b4b0
S* S::sub_0096b4b0()
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    F = 0;
    return this;
}
