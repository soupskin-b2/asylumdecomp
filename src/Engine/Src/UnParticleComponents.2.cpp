// UnParticleComponents.cpp (part 2 of 4): 5 functions
// Placed here by: callers 2, neighbours 2, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00b34a30 { BYTE b[12]; };

// @baa 0x00b34a30
template INT TArray<T_00b34a30>::Add(INT);

struct T_00b51f10 { BYTE b[4]; };

// @baa 0x00b51f10
template INT TArray<T_00b51f10>::Add(INT);

struct T_00b5f410 { BYTE b[44]; };

// @baa 0x00b5f410
template void TArray<T_00b5f410>::Remove(INT, INT);

struct T_00b5fb80 { BYTE b[4]; };

// @baa 0x00b5fb80
template void TArray<T_00b5fb80>::Remove(INT, INT);

struct T_00b5ff40 { BYTE b[12]; };

// @baa 0x00b5ff40
template void TArray<T_00b5ff40>::Remove(INT, INT);
