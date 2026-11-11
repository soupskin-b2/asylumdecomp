// BmGameClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// Classes.h declares AActor::ShouldTrace (slot 0x198) as vf_198(UINT, UINT, BYTE).
struct ABlockingVolume_ : public ABlockingVolume {
    UBOOL ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags);
};

struct ARGrappleSmoothingVolume_ : public ABlockingVolume_ {
    typedef ABlockingVolume_ Super;
    UBOOL ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags);
};

// @baa 0x0155ee00
UBOOL ARGrappleSmoothingVolume_::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    ARPawnPlayer* Player = Cast<ARPawnPlayer>(SourceActor);
    if (Player && Player->IsGrappling)
    {
        return Super::ShouldTrace(Primitive, SourceActor, TraceFlags);
    }
    return FALSE;
}
