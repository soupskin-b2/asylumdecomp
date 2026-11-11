// UnrealEd_14a0000.cpp (part 2 of 6): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_014a5b60 { BYTE b[4]; };

// @baa 0x014a5b60
template void TArray<T_014a5b60>::Remove(INT, INT);

struct T_014a5ee0 { BYTE b[12]; };

// @baa 0x014a5ee0
template void TArray<T_014a5ee0>::Remove(INT, INT);
