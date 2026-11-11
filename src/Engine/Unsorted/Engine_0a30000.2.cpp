// Engine_0a30000.cpp (part 2 of 3): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00a35900 { BYTE b[4]; };

// @baa 0x00a35900
template INT TArray<T_00a35900>::Add(INT);

struct T_00a35980 { BYTE b[12]; };

// @baa 0x00a35980
template INT TArray<T_00a35980>::Add(INT);

struct T_00a36050 { BYTE b[16]; };

// @baa 0x00a36050
template INT TArray<T_00a36050>::Add(INT);

struct T_00a360c0 { BYTE b[16]; };

// @baa 0x00a360c0
template INT TArray<T_00a360c0>::Add(INT);

struct T_00a361b0 { BYTE b[16]; };

// @baa 0x00a361b0
template INT TArray<T_00a361b0>::Add(INT);

struct T_00a36220 { BYTE b[16]; };

// @baa 0x00a36220
template INT TArray<T_00a36220>::Add(INT);

struct T_00a3e330 { BYTE b[16]; };

// @baa 0x00a3e330
template void TArray<T_00a3e330>::Remove(INT, INT);
