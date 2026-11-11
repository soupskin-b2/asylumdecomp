// GenericBrowserTypes.cpp (part 3 of 4): 7 functions
// Placed here by: callers 4, neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x01160170
template ULensFlare* Cast<ULensFlare>(UObject* Src);

// @baa 0x01160220
template UFont* Cast<UFont>(UObject* Src);

// @baa 0x01160280
template UTextureRenderTargetCube* Cast<UTextureRenderTargetCube>(UObject* Src);

// @baa 0x011602e0
template UMorphTargetSet* Cast<UMorphTargetSet>(UObject* Src);

// @baa 0x01160340
template UUIPrefab* Cast<UUIPrefab>(UObject* Src);

// @baa 0x011603a0
template UFaceFXAsset* Cast<UFaceFXAsset>(UObject* Src);

// @baa 0x01160400
template UCameraAnim* Cast<UCameraAnim>(UObject* Src);
