// DecalComponent.cpp (part 2 of 3): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00666280 { BYTE b[4]; };

// @baa 0x00666280
template void TArray<T_00666280>::Remove(INT, INT);

struct T_006670b0 { BYTE b[8]; };

// @baa 0x006670b0
template void TArray<T_006670b0>::Remove(INT, INT);
