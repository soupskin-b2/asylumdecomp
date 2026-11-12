// UnrealEd_0c90000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x00c9a2b0
/* Weapons fired by no one (no Instigator) pass through crowd agents. */
UBOOL ACrowdAgent::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    if (SourceActor && ObjectIsA(SourceActor, AWeapon::StaticClass()) && SourceActor->Instigator == NULL)
    {
        return FALSE;
    }
    return Super::ShouldTrace(Primitive, SourceActor, TraceFlags);
}
