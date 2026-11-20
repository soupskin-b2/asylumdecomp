// BmGameClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x0155ee00
UBOOL ARGrappleSmoothingVolume::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    ARPawnPlayer* Player = Cast<ARPawnPlayer>(SourceActor);
    if (Player && Player->IsGrappling)
    {
        return Super::ShouldTrace(Primitive, SourceActor, TraceFlags);
    }
    return FALSE;
}
