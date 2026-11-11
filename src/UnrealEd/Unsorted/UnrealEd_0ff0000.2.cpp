// UnrealEd_0ff0000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00ff00c0 { BYTE b[120]; };

// @baa 0x00ff00c0
template INT TArray<T_00ff00c0>::Add(INT);

struct T_00ff0150 { BYTE b[168]; };

// @baa 0x00ff0150
template INT TArray<T_00ff0150>::Add(INT);
