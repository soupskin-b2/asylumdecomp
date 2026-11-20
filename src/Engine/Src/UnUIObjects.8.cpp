// UnUIObjects.cpp (part 8 of 17): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00d98fe0
/* UE3 declares the const overload with PURE_VIRTUAL(const UUIScreenObject::GetScene, ...): the name string keeps the const. */
const UUIScene* UUIScreenObject::GetScene() const PURE_VIRTUAL(const UUIScreenObject::GetScene, return NULL;)
