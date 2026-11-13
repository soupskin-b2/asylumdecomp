// UnUIObjects.cpp (part 14 of 17): 2 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00d992e0
UUIScene* UUIObject::GetScene() { return OwnerScene; }

// @baa 0x00dc2cb0
UUIObject* UUIScene::GetOwner() { return NULL; }
