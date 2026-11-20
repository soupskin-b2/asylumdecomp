// UnrealEd_13a0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<ALevelStreamingVolume*>::AddUniqueItem's out-of-line copy (AddStreamingVolumes,
 * ULevelStreaming::EditorStreamingVolumes, caller 013abcb0). */
// @baa 0x013a73d0
template INT TArray<ALevelStreamingVolume*>::AddUniqueItem(ALevelStreamingVolume* const& Item);

// @baa 0x013a74b0
template INT TArray<ULevelStreaming*>::AddUniqueItem(ULevelStreaming* const& Item);
