// Engine_07d0000.cpp (part 4 of 9): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x007d9430
template ULevelStreamingPersistent* Cast<ULevelStreamingPersistent>(UObject* Src);

// @baa 0x007d94d0
template APawn* Cast<APawn>(UObject* Src);

// @baa 0x007d9590
template APhysicsVolume* Cast<APhysicsVolume>(UObject* Src);

// @baa 0x007d95f0
template AStaticMeshCollectionActor* Cast<AStaticMeshCollectionActor>(UObject* Src);

// @baa 0x007d9650
template AWorldInfo* Cast<AWorldInfo>(UObject* Src);
