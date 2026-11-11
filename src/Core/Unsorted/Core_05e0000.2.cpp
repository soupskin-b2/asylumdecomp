// Core_05e0000.cpp (part 2 of 5): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_005ed9d0 { BYTE b[16]; };

// @baa 0x005ed9d0
template INT TArray<T_005ed9d0>::Add(INT);

struct T_005eda50 { BYTE b[4]; };

// @baa 0x005eda50
template INT TArray<T_005eda50>::Add(INT);

struct T_005edac0 { BYTE b[4]; };

// @baa 0x005edac0
template INT TArray<T_005edac0>::Add(INT);

struct T_005edb30 { BYTE b[4]; };

// @baa 0x005edb30
template INT TArray<T_005edb30>::Add(INT);
