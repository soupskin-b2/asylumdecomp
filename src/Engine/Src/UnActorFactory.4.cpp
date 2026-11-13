// UnActorFactory.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x00c57a40
template ADynamicSMActor* CastChecked<ADynamicSMActor>(UObject* Src);

// @baa 0x00c57c10
template AKActor* CastChecked<AKActor>(UObject* Src);

// @baa 0x00c57de0
template AEmitter* CastChecked<AEmitter>(UObject* Src);

// @baa 0x00c57fb0
template ASkeletalMeshActor* CastChecked<ASkeletalMeshActor>(UObject* Src);

// @baa 0x00c58180
template AKAsset* CastChecked<AKAsset>(UObject* Src);
