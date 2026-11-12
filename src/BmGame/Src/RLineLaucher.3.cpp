// RLineLaucher.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x016647b0
/* Line launcher blocking volumes only stop the line launcher's traces. */
UBOOL ARLineLauncherBlockingVolume::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
	if (SourceActor && ObjectIsA(SourceActor, ARLineLauncher::StaticClass()))
	{
		return TRUE;
	}
	return FALSE;
}
