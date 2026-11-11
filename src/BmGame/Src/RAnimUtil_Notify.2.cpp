// RAnimUtil_Notify.cpp (part 2 of 2): 3 functions
// Placed here by: callers 2, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x015c3840
template UAnimNotify_Script* Cast<UAnimNotify_Script>(UObject* Src);

// @baa 0x015c38a0
template URAnimNotify_Footstep* Cast<URAnimNotify_Footstep>(UObject* Src);

// @baa 0x015c3900
template URAnimNotify_Foley* Cast<URAnimNotify_Foley>(UObject* Src);
