// TerrainEditor.cpp (part 4 of 4): 4 functions
// Placed here by: neighbours 3, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x012504b0
template UTerrainLayerSetup* Cast<UTerrainLayerSetup>(UObject* Src);

// @baa 0x01250520
template UPhysicsAsset* Cast<UPhysicsAsset>(UObject* Src);

// @baa 0x01250580
template UApexAsset* Cast<UApexAsset>(UObject* Src);

// @baa 0x012505e0
template UPrefab* Cast<UPrefab>(UObject* Src);
