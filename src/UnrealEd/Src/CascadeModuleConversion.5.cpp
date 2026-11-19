// CascadeModuleConversion.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x012c5e60
template UDistributionFloatUniformCurve* ConstructObject<UDistributionFloatUniformCurve>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x012c5f00
template UDistributionFloatParticleParameter* ConstructObject<UDistributionFloatParticleParameter>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012c5fa0
template UDistributionVectorConstantCurve* ConstructObject<UDistributionVectorConstantCurve>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012c6040
template UDistributionVectorUniform* ConstructObject<UDistributionVectorUniform>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012c60e0
template UDistributionVectorUniformCurve* ConstructObject<UDistributionVectorUniformCurve>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012c6180
template UDistributionVectorParticleParameter* ConstructObject<UDistributionVectorParticleParameter>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
