// UnParticleModules.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x00b92440
template UDistributionVectorUniform* CastChecked<UDistributionVectorUniform>(UObject* Src);

// @baa 0x00b927e0
template UDistributionVectorConstant* CastChecked<UDistributionVectorConstant>(UObject* Src);

// @baa 0x00b92610
template UDistributionVectorConstantCurve* CastChecked<UDistributionVectorConstantCurve>(UObject* Src);

// @baa 0x00ba29f0
template UParticleModule* CastChecked<UParticleModule>(UObject* Src);
