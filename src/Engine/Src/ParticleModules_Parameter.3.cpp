// ParticleModules_Parameter.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x00b3c850
template UParticleModuleTypeDataBeam2* CastChecked<UParticleModuleTypeDataBeam2>(UObject* Src);

// @baa 0x00b3ca20
template UParticleSpriteEmitter* CastChecked<UParticleSpriteEmitter>(UObject* Src);

// @baa 0x00b3cc40
template UParticleModuleTypeDataMesh* CastChecked<UParticleModuleTypeDataMesh>(UObject* Src);

// @baa 0x00b3ce10
template UParticleSystem* CastChecked<UParticleSystem>(UObject* Src);
