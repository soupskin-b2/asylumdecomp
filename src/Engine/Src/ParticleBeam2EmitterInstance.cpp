// ParticleBeam2EmitterInstance.cpp: 4 functions
// Placed here by: callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x00b34ea0
template UParticleModuleBeamSource* Cast<UParticleModuleBeamSource>(UObject* Src);

// @baa 0x00b34f00
template UParticleModuleBeamTarget* Cast<UParticleModuleBeamTarget>(UObject* Src);

// @baa 0x00b34f60
template UParticleModuleBeamNoise* Cast<UParticleModuleBeamNoise>(UObject* Src);

// @baa 0x00b34fc0
template UParticleModuleBeamModifier* Cast<UParticleModuleBeamModifier>(UObject* Src);
