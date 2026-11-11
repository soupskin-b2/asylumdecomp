// Engine_06e0000.cpp (part 3 of 14): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x006e0930
template UMaterial* Cast<UMaterial>(UObject* Src);

// @baa 0x006e0990
template UTexture2D* Cast<UTexture2D>(UObject* Src);

// @baa 0x006e0a50
template UMaterialExpressionTextureSampleParameter2D* Cast<UMaterialExpressionTextureSampleParameter2D>(UObject* Src);
