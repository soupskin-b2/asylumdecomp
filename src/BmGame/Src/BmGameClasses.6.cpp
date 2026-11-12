// BmGameClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x01557e70
/* The line launcher's traces pass through; everything else is as usual. */
UBOOL ARGatherRootPointBase::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
	if (SourceActor && ObjectIsA(SourceActor, ARLineLauncher::StaticClass()))
	{
		return FALSE;
	}
	return Super::ShouldTrace(Primitive, SourceActor, TraceFlags);
}

// @baa 0x01557ee0
/* The line launcher's traces pass through; everything else is as usual. */
UBOOL ARGatherRootPointSpawnerBase::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
	if (SourceActor && ObjectIsA(SourceActor, ARLineLauncher::StaticClass()))
	{
		return FALSE;
	}
	return Super::ShouldTrace(Primitive, SourceActor, TraceFlags);
}
