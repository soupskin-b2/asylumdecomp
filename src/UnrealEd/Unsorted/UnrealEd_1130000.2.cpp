// UnrealEd_1130000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x011309c0
template USequence* CastChecked<USequence>(UObject* Src);

// @baa 0x01130d00
template APrefabInstance* CastChecked<APrefabInstance>(UObject* Src);

// @baa 0x01130ed0
template UPrefab* CastChecked<UPrefab>(UObject* Src);
