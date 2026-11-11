// Engine_06b0000.cpp (part 3 of 3): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_006bc6c0 { BYTE b[4]; };

// @baa 0x006bc6c0
template void TArray<T_006bc6c0>::Remove(INT, INT);

struct T_006bc930 { BYTE b[4]; };

// @baa 0x006bc930
template void TArray<T_006bc930>::Remove(INT, INT);

struct T_006bca10 { BYTE b[4]; };

// @baa 0x006bca10
template void TArray<T_006bca10>::Remove(INT, INT);

struct T_006bcaf0 { BYTE b[4]; };

// @baa 0x006bcaf0
template void TArray<T_006bcaf0>::Remove(INT, INT);
