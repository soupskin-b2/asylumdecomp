// UnParticleComponents.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x00b60770
template UParticleModuleTypeDataBase* CastChecked<UParticleModuleTypeDataBase>(UObject* Src);

// @baa 0x00b6c320
template UParticleEmitter* CastChecked<UParticleEmitter>(UObject* Src);
