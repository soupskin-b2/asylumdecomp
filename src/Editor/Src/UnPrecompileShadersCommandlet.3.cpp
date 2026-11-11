// UnPrecompileShadersCommandlet.cpp (part 3 of 3): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x01104660
template UTerrainMaterial* Cast<UTerrainMaterial>(UObject* Src);

// @baa 0x011046c0
template UFoliageComponent* Cast<UFoliageComponent>(UObject* Src);

// @baa 0x01104720
template UMaterialEffect* Cast<UMaterialEffect>(UObject* Src);
