// UnrealEd_07d0000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_007d8690 { BYTE b[4]; };

// @baa 0x007d8690
template INT TArray<T_007d8690>::Add(INT);

struct T_007d8950 { BYTE b[4]; };

// @baa 0x007d8950
template INT TArray<T_007d8950>::Add(INT);

struct T_007d8b60 { BYTE b[68]; };

// @baa 0x007d8b60
template INT TArray<T_007d8b60>::Add(INT);
