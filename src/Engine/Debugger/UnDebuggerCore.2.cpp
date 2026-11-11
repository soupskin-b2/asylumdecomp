// UnDebuggerCore.cpp (part 2 of 3): 6 functions
// Placed here by: class 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00e18430 { BYTE b[4]; };

// @baa 0x00e18430
template INT TArray<T_00e18430>::Add(INT);

struct T_00e18680 { BYTE b[32]; };

// @baa 0x00e18680
template INT TArray<T_00e18680>::Add(INT);

struct T_00e186f0 { BYTE b[20]; };

// @baa 0x00e186f0
template INT TArray<T_00e186f0>::Add(INT);

struct T_00e18760 { BYTE b[64]; };

// @baa 0x00e18760
template INT TArray<T_00e18760>::Add(INT);

struct T_00e187d0 { BYTE b[12]; };

// @baa 0x00e187d0
template INT TArray<T_00e187d0>::Add(INT);

struct T_00e1be00 { BYTE b[12]; };

// @baa 0x00e1be00
template void TArray<T_00e1be00>::Remove(INT, INT);
