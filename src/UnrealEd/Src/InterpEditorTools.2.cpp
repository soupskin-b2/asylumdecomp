// InterpEditorTools.cpp (part 2 of 5): 7 functions
// Placed here by: neighbours 5, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_012e1f80 { BYTE b[4]; };

// @baa 0x012e1f80
template INT TArray<T_012e1f80>::Add(INT);

struct T_012e2040 { BYTE b[8]; };

// @baa 0x012e2040
template INT TArray<T_012e2040>::Add(INT);

struct T_012e2740 { BYTE b[56]; };

// @baa 0x012e2740
template INT TArray<T_012e2740>::Add(INT);

struct T_012e28c0 { BYTE b[16]; };

// @baa 0x012e28c0
template INT TArray<T_012e28c0>::Add(INT);

struct T_012f1410 { BYTE b[16]; };

// @baa 0x012f1410
template void TArray<T_012f1410>::Remove(INT, INT);

struct T_012f15b0 { BYTE b[4]; };

// @baa 0x012f15b0
template void TArray<T_012f15b0>::Remove(INT, INT);

struct T_012f1690 { BYTE b[4]; };

// @baa 0x012f1690
template void TArray<T_012f1690>::Remove(INT, INT);
