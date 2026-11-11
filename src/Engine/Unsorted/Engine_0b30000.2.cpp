// Engine_0b30000.cpp (part 2 of 4): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00b34d60 { BYTE b[4]; };

// @baa 0x00b34d60
template INT TArray<T_00b34d60>::Add(INT);

struct T_00b35320 { BYTE b[16]; };

// @baa 0x00b35320
template INT TArray<T_00b35320>::Add(INT);

struct T_00b35440 { BYTE b[8]; };

// @baa 0x00b35440
template INT TArray<T_00b35440>::Add(INT);

struct T_00b354b0 { BYTE b[12]; };

// @baa 0x00b354b0
template INT TArray<T_00b354b0>::Add(INT);

struct T_00b3c010 { BYTE b[4]; };

// @baa 0x00b3c010
template void TArray<T_00b3c010>::Remove(INT, INT);

struct T_00b3c190 { BYTE b[4]; };

// @baa 0x00b3c190
template void TArray<T_00b3c190>::Remove(INT, INT);
