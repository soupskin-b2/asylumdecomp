// BmGame_1600000.cpp (part 3 of 3): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x01606e20
template URBMBehaviour* Cast<URBMBehaviour>(UObject* Src);

// @baa 0x01606e80
template URBMExitCondition* Cast<URBMExitCondition>(UObject* Src);

// @baa 0x01606ee0
template ARBMPathNode_FenceJumpProxy* Cast<ARBMPathNode_FenceJumpProxy>(UObject* Src);

// @baa 0x01606f40
template URBmPawnSpawner* Cast<URBmPawnSpawner>(UObject* Src);
