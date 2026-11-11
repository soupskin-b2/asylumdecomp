// BmGame_1640000.cpp (part 2 of 5): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_01640070 { BYTE b[8]; };

// @baa 0x01640070
template INT TArray<T_01640070>::Add(INT);

struct T_01640110 { BYTE b[4]; };

// @baa 0x01640110
template INT TArray<T_01640110>::Add(INT);

struct T_01640260 { BYTE b[4]; };

// @baa 0x01640260
template INT TArray<T_01640260>::Add(INT);

struct T_016402e0 { BYTE b[4]; };

// @baa 0x016402e0
template INT TArray<T_016402e0>::Add(INT);

struct T_01640440 { BYTE b[4]; };

// @baa 0x01640440
template INT TArray<T_01640440>::Add(INT);

struct T_0164a2d0 { BYTE b[12]; };

// @baa 0x0164a2d0
template void TArray<T_0164a2d0>::Remove(INT, INT);

struct T_0164a410 { BYTE b[8]; };

// @baa 0x0164a410
template void TArray<T_0164a410>::Remove(INT, INT);
