// UnEdObject.cpp (part 2 of 2): 2 functions
// Placed here by: neighbours 1, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00f58f40 { BYTE b[16]; };

// @baa 0x00f58f40
template void TArray<T_00f58f40>::Remove(INT, INT);

struct T_00f59580 { BYTE b[4]; };

// @baa 0x00f59580
template void TArray<T_00f59580>::Remove(INT, INT);
