// UnModel.cpp (part 2 of 4): 3 functions
// Placed here by: neighbours 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00805e00 { BYTE b[4]; };

// @baa 0x00805e00
template INT TArray<T_00805e00>::Add(INT);

struct T_00817ee0 { BYTE b[4]; };

// @baa 0x00817ee0
template void TArray<T_00817ee0>::Remove(INT, INT);

struct T_00817fc0 { BYTE b[4]; };

// @baa 0x00817fc0
template void TArray<T_00817fc0>::Remove(INT, INT);
