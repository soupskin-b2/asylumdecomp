// GenericBrowserTypes.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x01172f20
template UDecalMaterial* CastChecked<UDecalMaterial>(UObject* Src);

// @baa 0x011730f0
template UUIScene* CastChecked<UUIScene>(UObject* Src);
