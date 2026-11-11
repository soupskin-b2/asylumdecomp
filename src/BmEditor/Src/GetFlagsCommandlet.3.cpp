// GetFlagsCommandlet.cpp (part 3 of 3): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_0112f0d0 { BYTE b[4]; };

// @baa 0x0112f0d0
template void TArray<T_0112f0d0>::Remove(INT, INT);

struct T_0175a460 { BYTE b[24]; };

// @baa 0x0175a460
template void TArray<T_0175a460>::Remove(INT, INT);
