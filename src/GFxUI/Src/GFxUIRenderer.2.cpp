// GFxUIRenderer.cpp (part 2 of 3): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00e47180 { BYTE b[8]; };

// @baa 0x00e47180
template INT TArray<T_00e47180>::Add(INT);

struct T_00e472e0 { BYTE b[4]; };

// @baa 0x00e472e0
template INT TArray<T_00e472e0>::Add(INT);

struct T_00e47d00 { BYTE b[4]; };

// @baa 0x00e47d00
template INT TArray<T_00e47d00>::Add(INT);

struct T_00e57970 { BYTE b[4]; };

// @baa 0x00e57970
template void TArray<T_00e57970>::Remove(INT, INT);
