// UnFracturedStaticMesh.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x007be9b0
template UDynamicLightEnvironmentComponent* CastChecked<UDynamicLightEnvironmentComponent>(UObject* Src);

// @baa 0x007ca210
template AFracturedStaticMeshActor* CastChecked<AFracturedStaticMeshActor>(UObject* Src);

// @baa 0x007cac50
template AFracturedStaticMeshPart* CastChecked<AFracturedStaticMeshPart>(UObject* Src);
