// RAnimNode_Cape.cpp (part 2 of 3): 3 functions
// Placed here by: neighbours 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_0155d170 { BYTE b[12]; };

// @baa 0x0155d170
template INT TArray<T_0155d170>::Add(INT);

struct T_0156a230 { BYTE b[32]; };

// @baa 0x0156a230
template void TArray<T_0156a230>::Remove(INT, INT);

struct T_0156a3d0 { BYTE b[144]; };

// @baa 0x0156a3d0
template void TArray<T_0156a3d0>::Remove(INT, INT);
