// UnEdTran.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<APrefabInstance*>::AddUniqueItem's out-of-line copy (collecting the owning prefab instances of
 * actors, caller 00f7ec20). */
// @baa 0x00f789f0
template INT TArray<APrefabInstance*>::AddUniqueItem(APrefabInstance* const& Item);
