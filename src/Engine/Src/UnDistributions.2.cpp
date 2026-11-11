// UnDistributions.cpp (part 2 of 3): 4 functions
// Placed here by: neighbours 2, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_007b9410 { BYTE b[4]; };

// @baa 0x007b9410
template void TArray<T_007b9410>::Remove(INT, INT);

struct T_007b9ed0 { BYTE b[20]; };

// @baa 0x007b9ed0
template void TArray<T_007b9ed0>::Remove(INT, INT);

struct T_007bb020 { BYTE b[32]; };

// @baa 0x007bb020
template void TArray<T_007bb020>::Remove(INT, INT);

struct T_007bcda0 { BYTE b[80]; };

// @baa 0x007bcda0
template void TArray<T_007bcda0>::Remove(INT, INT);
