// UnEdFact.cpp (part 4 of 4): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x00f20000
template UPhysicalMaterial* Cast<UPhysicalMaterial>(UObject* Src);

// @baa 0x00f200e0
template UMaterialExpressionTextureSampleParameterCube* Cast<UMaterialExpressionTextureSampleParameterCube>(UObject* Src);
