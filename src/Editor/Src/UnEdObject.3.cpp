// UnEdObject.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<UPrefab*>::AddUniqueItem's out-of-line copy (prefab update collecting the updated template prefabs, caller 00f5af80). */
// @baa 0x00f59410
template INT TArray<UPrefab*>::AddUniqueItem(UPrefab* const& Item);
