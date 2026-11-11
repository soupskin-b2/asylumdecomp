// BmGame_16b0000.cpp (part 2 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_016b0050 { BYTE b[8]; };

// @baa 0x016b0050
template INT TArray<T_016b0050>::Add(INT);

struct T_016b02b0 { BYTE b[4]; };

// @baa 0x016b02b0
template INT TArray<T_016b02b0>::Add(INT);

struct T_016b0490 { BYTE b[12]; };

// @baa 0x016b0490
template INT TArray<T_016b0490>::Add(INT);
