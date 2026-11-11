// Cascade.cpp (part 2 of 2): 3 functions
// Placed here by: callers 2, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x012a1610
template UParticleModule* Cast<UParticleModule>(UObject* Src);

// @baa 0x012a1670
template UParticleModuleUberBase* Cast<UParticleModuleUberBase>(UObject* Src);

// @baa 0x012a16d0
template UParticleModuleParameterDynamic* Cast<UParticleModuleParameterDynamic>(UObject* Src);
