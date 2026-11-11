// MaterialShared.cpp (part 2 of 2): 3 functions
// Placed here by: neighbours 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x006e0ab0
template UMaterialExpressionTextureCoordinate* Cast<UMaterialExpressionTextureCoordinate>(UObject* Src);

// @baa 0x00703260
template UTextureCube* Cast<UTextureCube>(UObject* Src);

// @baa 0x00713670
template UMaterialInstanceTimeVarying* Cast<UMaterialInstanceTimeVarying>(UObject* Src);
