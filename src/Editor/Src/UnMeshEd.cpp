// UnMeshEd.cpp (part 1 of 2): 6 functions
// Placed here by: callers 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00fa0650 { BYTE b[12]; };

// @baa 0x00fa0650
template INT TArray<T_00fa0650>::Add(INT);

struct T_00fa1f00 { BYTE b[88]; };

// @baa 0x00fa1f00
template INT TArray<T_00fa1f00>::Add(INT);

struct T_00fa1f70 { BYTE b[16]; };

// @baa 0x00fa1f70
template INT TArray<T_00fa1f70>::Add(INT);

struct T_00fa1fe0 { BYTE b[12]; };

// @baa 0x00fa1fe0
template INT TArray<T_00fa1fe0>::Add(INT);

struct T_00fa2050 { BYTE b[120]; };

// @baa 0x00fa2050
template INT TArray<T_00fa2050>::Add(INT);

struct T_00fa9c40 { BYTE b[12]; };

// @baa 0x00fa9c40
template void TArray<T_00fa9c40>::Remove(INT, INT);
