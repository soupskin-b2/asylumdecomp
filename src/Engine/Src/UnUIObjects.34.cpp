// UnUIObjects.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x00dbcb50
template UUIScreenObject* CastChecked<UUIScreenObject>(UObject* Src);

// @baa 0x00dbdc00
template UUIObject* CastChecked<UUIObject>(UObject* Src);
