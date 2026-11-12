// Engine_07b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW		/* new(Array) T kept out of line, per T */
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Add */
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x007b4860
/* Array.h's placement new into a TArray, instantiated out of line for FLevelStreamingStatus (used for APlayerController PendingLevelStreamingStatusUpdates). */
FLevelStreamingStatus* NewFLevelStreamingStatus(TArray<FLevelStreamingStatus>& Array)
{
	return new(Array) FLevelStreamingStatus;
}
