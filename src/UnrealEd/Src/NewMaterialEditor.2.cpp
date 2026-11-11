// NewMaterialEditor.cpp (part 2 of 8): 6 functions
// Placed here by: callers 5, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x006b0640
template UMaterialExpressionTextureSampleParameter* Cast<UMaterialExpressionTextureSampleParameter>(UObject* Src);

// @baa 0x006b06a0
template UMaterialExpressionFontSampleParameter* Cast<UMaterialExpressionFontSampleParameter>(UObject* Src);

// @baa 0x006b0700
template UMaterialExpressionStaticSwitchParameter* Cast<UMaterialExpressionStaticSwitchParameter>(UObject* Src);

// @baa 0x01428b30
template UMaterialExpressionParameter* Cast<UMaterialExpressionParameter>(UObject* Src);

// @baa 0x01428b90
template UMaterialExpressionComment* Cast<UMaterialExpressionComment>(UObject* Src);

// @baa 0x01428d30
template UMaterialExpressionCompound* Cast<UMaterialExpressionCompound>(UObject* Src);
