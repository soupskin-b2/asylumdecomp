// RGrapplePoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x016635d0
/* Grapple blocking volumes only stop the grapple gun's traces. */
UBOOL ARGrappleBlockingVolume::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
	if (SourceActor && ObjectIsA(SourceActor, ARGrappleGun::StaticClass()))
	{
		/* The game calls AActor's version here, skipping AVolume's (0x007585b0, not 0x00758680). */
		return AActor::ShouldTrace(Primitive, SourceActor, TraceFlags);
	}
	return FALSE;
}
