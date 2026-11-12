// UnAnimTree.cpp (part 2 of 4): 5 functions
// Placed here by: callers 3, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00c4c130 { BYTE b[28]; };

// @baa 0x00c4c130
template INT TArray<T_00c4c130>::Add(INT);

struct T_00c4c310 { BYTE b[4]; };

// @baa 0x00c4c310
template INT TArray<T_00c4c310>::Add(INT);

struct T_00c4c3c0 { BYTE b[36]; };

// @baa 0x00c4c3c0
template INT TArray<T_00c4c3c0>::Add(INT);

struct T_00c57400 { BYTE b[28]; };

// @baa 0x00c57400
template void TArray<T_00c57400>::Remove(INT, INT);

// @baa 0x00c503d0
/* TArray<BYTE>::ContainsItem (bone index lists). */
template UBOOL TArray<BYTE>::ContainsItem(const BYTE&) const;
