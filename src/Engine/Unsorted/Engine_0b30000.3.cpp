// Engine_0b30000.cpp (part 3 of 4): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x00b34e40
template UParticleModuleTypeDataBase* Cast<UParticleModuleTypeDataBase>(UObject* Src);

// @baa 0x00b350b0
template UDistributionFloatUniform* Cast<UDistributionFloatUniform>(UObject* Src);

// @baa 0x00b35110
template UParticleLODLevel* Cast<UParticleLODLevel>(UObject* Src);

// @baa 0x00b35170
template UParticleEmitter* Cast<UParticleEmitter>(UObject* Src);

// @baa 0x00b351d0
template APhysXEmitterSpawnable* Cast<APhysXEmitterSpawnable>(UObject* Src);
