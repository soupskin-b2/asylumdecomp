// Engine_0810000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_008121d0 { BYTE b[28]; };

// @baa 0x008121d0
template void TArray<T_008121d0>::Remove(INT, INT);

struct T_008122d0 { BYTE b[32]; };

// @baa 0x008122d0
template void TArray<T_008122d0>::Remove(INT, INT);

struct T_00812560 { BYTE b[8]; };

// @baa 0x00812560
template void TArray<T_00812560>::Remove(INT, INT);
