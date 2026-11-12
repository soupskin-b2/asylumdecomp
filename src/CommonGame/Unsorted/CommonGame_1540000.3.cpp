// CommonGame_1540000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#pragma auto_inline(off)
#pragma auto_inline(on)
// @baa 0x0154a720
/* URFlagManager's destructor (DECLARE_CLASS's inline one: ConditionalDestroy, then the members' and
 * bases' destructors). */
void Destroy(URFlagManager* Object)
{
    Object->URFlagManager::~URFlagManager();
}
