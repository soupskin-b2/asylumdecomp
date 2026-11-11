// Engine_0b50000.cpp (part 4 of 4): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x00b52c50
template AStaticMeshActor* Cast<AStaticMeshActor>(UObject* Src);

// @baa 0x00b52cb0
template ADynamicSMActor* Cast<ADynamicSMActor>(UObject* Src);

// @baa 0x00b52d10
template UDistributionFloatConstant* Cast<UDistributionFloatConstant>(UObject* Src);

// @baa 0x00b52d70
template UDistributionFloatConstantCurve* Cast<UDistributionFloatConstantCurve>(UObject* Src);

// @baa 0x00b52e30
template UDistributionVectorUniform* Cast<UDistributionVectorUniform>(UObject* Src);

// @baa 0x00b52e90
template UDistributionVectorConstantCurve* Cast<UDistributionVectorConstantCurve>(UObject* Src);

// @baa 0x00b52ef0
template USeqEvent_ParticleEvent* Cast<USeqEvent_ParticleEvent>(UObject* Src);
