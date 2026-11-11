// UnLinker.cpp (part 3 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_005a9280 { BYTE b[12]; };

// @baa 0x005a9280
template void TArray<T_005a9280>::Remove(INT, INT);
