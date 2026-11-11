// UnThreadingBase.cpp (part 2 of 3): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_005f1430 { BYTE b[4]; };

// @baa 0x005f1430
template void TArray<T_005f1430>::Remove(INT, INT);

struct T_005f1550 { BYTE b[4]; };

// @baa 0x005f1550
template void TArray<T_005f1550>::Remove(INT, INT);
