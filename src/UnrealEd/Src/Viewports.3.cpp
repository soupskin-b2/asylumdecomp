// Viewports.cpp (part 3 of 3): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_012a1150 { BYTE b[4]; };

// @baa 0x012a1150
template INT TArray<T_012a1150>::Add(INT);

struct T_012a27b0 { BYTE b[4]; };

// @baa 0x012a27b0
template void TArray<T_012a27b0>::Remove(INT, INT);
