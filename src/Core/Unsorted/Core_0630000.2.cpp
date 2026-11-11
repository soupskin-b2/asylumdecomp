// Core_0630000.cpp (part 2 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_006329b0 { BYTE b[8]; };

// @baa 0x006329b0
template INT TArray<T_006329b0>::Add(INT);

struct T_00632a30 { BYTE b[4]; };

// @baa 0x00632a30
template INT TArray<T_00632a30>::Add(INT);

struct T_00632aa0 { BYTE b[36]; };

// @baa 0x00632aa0
template INT TArray<T_00632aa0>::Add(INT);

struct T_00632b80 { BYTE b[24]; };

// @baa 0x00632b80
template INT TArray<T_00632b80>::Add(INT);
