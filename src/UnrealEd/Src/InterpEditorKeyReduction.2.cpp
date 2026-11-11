// InterpEditorKeyReduction.cpp (part 2 of 2): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_012e7080 { BYTE b[20]; };

// @baa 0x012e7080
template void TArray<T_012e7080>::Remove(INT, INT);

struct T_012f19d0 { BYTE b[8]; };

// @baa 0x012f19d0
template void TArray<T_012f19d0>::Remove(INT, INT);
