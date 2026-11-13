// EditorFrame.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x0112ff20
template UOptionsProxy* CastChecked<UOptionsProxy>(UObject* Src);

// @baa 0x011300f0
template AStaticMeshActor* CastChecked<AStaticMeshActor>(UObject* Src);

// @baa 0x011302c0
template AInterpActor* CastChecked<AInterpActor>(UObject* Src);

// @baa 0x01130490
template AStaticMeshActorBasedOnExtremeContent* CastChecked<AStaticMeshActorBasedOnExtremeContent>(UObject* Src);

// @baa 0x011307f0
template UCylinderComponent* CastChecked<UCylinderComponent>(UObject* Src);
