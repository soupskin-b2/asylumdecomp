// Core_0600000.cpp (part 3 of 6): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00602be0 { BYTE b[4]; };

// @baa 0x00602be0
template void TArray<T_00602be0>::Remove(INT, INT);

struct T_00603660 { BYTE b[32]; };

// @baa 0x00603660
template void TArray<T_00603660>::Remove(INT, INT);

struct T_00608930 { BYTE b[84]; };

// @baa 0x00608930
template void TArray<T_00608930>::Remove(INT, INT);

struct T_00608a50 { BYTE b[92]; };

// @baa 0x00608a50
template void TArray<T_00608a50>::Remove(INT, INT);
