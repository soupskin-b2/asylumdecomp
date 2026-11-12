// UnrealEd_0b50000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00b5b960
/* The detailed info of the ParticleSystemComponent, or "No_ParticleSystemComponent". */
FString AEmitter::GetDetailedInfoInternal()
{
    FString Result;
    if (ParticleSystemComponent != NULL)
    {
        Result = ParticleSystemComponent->GetDetailedInfoInternal();
    }
    else
    {
        Result = TEXT("No_ParticleSystemComponent");
    }
    return Result;
}
