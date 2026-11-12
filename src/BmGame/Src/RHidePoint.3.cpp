// RHidePoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x01643e60
/* Player-movement traces (0x400000) pass through hide points while the player is grappling. */
UBOOL ARHidePoint::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    if (TraceFlags & 0x400000)
    {
        ARPawnPlayer* Player = Cast<ARPawnPlayer>(SourceActor);
        if (Player && Player->IsGrappling)
        {
            return FALSE;
        }
    }
    return Super::ShouldTrace(Primitive, SourceActor, TraceFlags);
}
