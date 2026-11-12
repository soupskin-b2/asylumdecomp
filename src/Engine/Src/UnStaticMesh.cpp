// UnStaticMesh.cpp: 3 functions
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
