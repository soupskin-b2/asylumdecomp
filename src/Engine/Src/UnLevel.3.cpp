// UnLevel.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x007df070
/* the out-of-line TArray<APortalTeleporter*>::AddUniqueItem instantiation (APortalVolume::Portals) */
template INT TArray<APortalTeleporter*>::AddUniqueItem(APortalTeleporter* const& Item);
