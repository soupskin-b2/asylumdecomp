// UnUIObjects.cpp (part 13 of 17): 2 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00d992d0
UUIObject* UUIObject::GetOwner() { return Owner; }

// @baa 0x00dc2cc0
UUIScene* UUIScene::GetScene() { return this; }
