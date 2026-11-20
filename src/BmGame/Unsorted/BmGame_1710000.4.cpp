// BmGame_1710000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x0171a900
/* Level-geometry traces always hit the door, except ones from a resonator tuner. */
UBOOL ARDisruptableObjectDoor::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    if (!Cast<ARResonatorTuner>(SourceActor) && (TraceFlags & TRACE_LevelGeometry))
    {
        return TRUE;
    }
    return Super::ShouldTrace(Primitive, SourceActor, TraceFlags);
}
