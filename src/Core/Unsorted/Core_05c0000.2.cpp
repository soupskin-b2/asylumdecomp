// Core_05c0000.cpp (part 2 of 3): 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_005c1de0 { BYTE b[4]; };

// @baa 0x005c1de0
template INT TArray<T_005c1de0>::Add(INT);

struct T_005c21f0 { BYTE b[20]; };

// @baa 0x005c21f0
template INT TArray<T_005c21f0>::Add(INT);

struct T_005c2270 { BYTE b[12]; };

// @baa 0x005c2270
template INT TArray<T_005c2270>::Add(INT);

struct T_005c2300 { BYTE b[12]; };

// @baa 0x005c2300
template INT TArray<T_005c2300>::Add(INT);

struct T_005c2380 { BYTE b[20]; };

// @baa 0x005c2380
template INT TArray<T_005c2380>::Add(INT);

struct T_005c2e70 { BYTE b[20]; };

// @baa 0x005c2e70
template INT TArray<T_005c2e70>::Add(INT);

struct T_005c2f30 { BYTE b[16]; };

// @baa 0x005c2f30
template INT TArray<T_005c2f30>::Add(INT);

struct T_005cbc50 { BYTE b[4]; };

// @baa 0x005cbc50
template void TArray<T_005cbc50>::Remove(INT, INT);
