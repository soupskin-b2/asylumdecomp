// UnInterpolationCurveEd.cpp (part 2 of 3): 2 functions
// Placed here by: neighbours 1, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00cf83f0 { BYTE b[16]; };

// @baa 0x00cf83f0
template void TArray<T_00cf83f0>::Remove(INT, INT);

struct T_00cf8530 { BYTE b[8]; };

// @baa 0x00cf8530
template void TArray<T_00cf8530>::Remove(INT, INT);
