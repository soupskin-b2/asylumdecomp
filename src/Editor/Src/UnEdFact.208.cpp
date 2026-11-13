// UnEdFact.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x00f26420
template UApexRenderMeshAsset* CastChecked<UApexRenderMeshAsset>(UObject* Src);

// @baa 0x00f265f0
template UApexParticleSystemAsset* CastChecked<UApexParticleSystemAsset>(UObject* Src);

// @baa 0x00f267c0
template UApexMeshParticleFactoryAsset* CastChecked<UApexMeshParticleFactoryAsset>(UObject* Src);

// @baa 0x00f26990
template UTextureMovie* CastChecked<UTextureMovie>(UObject* Src);

// @baa 0x00f26b60
template UTextureRenderTargetCube* CastChecked<UTextureRenderTargetCube>(UObject* Src);
