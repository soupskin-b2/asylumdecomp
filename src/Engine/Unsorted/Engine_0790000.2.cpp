// Engine_0790000.cpp (part 2 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00790630 { BYTE b[4]; };

// @baa 0x00790630
template void TArray<T_00790630>::Remove(INT, INT);

struct T_00790710 { BYTE b[4]; };

// @baa 0x00790710
template void TArray<T_00790710>::Remove(INT, INT);
