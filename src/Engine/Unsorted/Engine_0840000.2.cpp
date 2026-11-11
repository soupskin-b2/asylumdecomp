// Engine_0840000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_008492e0 { BYTE b[4]; };

// @baa 0x008492e0
template void TArray<T_008492e0>::Remove(INT, INT);

struct T_00849480 { BYTE b[8]; };

// @baa 0x00849480
template void TArray<T_00849480>::Remove(INT, INT);

struct T_00849880 { BYTE b[4]; };

// @baa 0x00849880
template void TArray<T_00849880>::Remove(INT, INT);
