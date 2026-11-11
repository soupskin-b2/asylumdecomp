// Engine_08c0000.cpp (part 2 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_008c1120 { BYTE b[4]; };

// @baa 0x008c1120
template void TArray<T_008c1120>::Remove(INT, INT);

struct T_008c2ae0 { BYTE b[4]; };

// @baa 0x008c2ae0
template void TArray<T_008c2ae0>::Remove(INT, INT);

struct T_008c2bc0 { BYTE b[4]; };

// @baa 0x008c2bc0
template void TArray<T_008c2bc0>::Remove(INT, INT);
