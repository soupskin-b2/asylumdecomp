// BmEditor_0f70000.cpp (part 6 of 6): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00f76520 { BYTE b[72]; };

// @baa 0x00f76520
template INT TArray<T_00f76520>::Add(INT);

struct T_00f765a0 { BYTE b[100]; };

// @baa 0x00f765a0
template INT TArray<T_00f765a0>::Add(INT);

struct T_00f76610 { BYTE b[16]; };

// @baa 0x00f76610
template INT TArray<T_00f76610>::Add(INT);

struct T_00f7d690 { BYTE b[4]; };

// @baa 0x00f7d690
template void TArray<T_00f7d690>::Remove(INT, INT);

struct T_00f7d770 { BYTE b[4]; };

// @baa 0x00f7d770
template void TArray<T_00f7d770>::Remove(INT, INT);
