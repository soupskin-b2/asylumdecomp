// WinClient.cpp (part 3 of 4): 4 functions
// Placed here by: neighbours 3, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00eb4d40 { BYTE b[4]; };

// @baa 0x00eb4d40
template INT TArray<T_00eb4d40>::Add(INT);

struct T_00eb4de0 { BYTE b[28]; };

// @baa 0x00eb4de0
template INT TArray<T_00eb4de0>::Add(INT);

struct T_00eb4f40 { BYTE b[8]; };

// @baa 0x00eb4f40
template INT TArray<T_00eb4f40>::Add(INT);

struct T_00eb7720 { BYTE b[4]; };

// @baa 0x00eb7720
template void TArray<T_00eb7720>::Remove(INT, INT);
