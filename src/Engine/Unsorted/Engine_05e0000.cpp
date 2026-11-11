// Engine_05e0000.cpp (part 1 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_005edc10 { BYTE b[4]; };

// @baa 0x005edc10
template INT TArray<T_005edc10>::Add(INT);

struct T_005edee0 { BYTE b[16]; };

// @baa 0x005edee0
template INT TArray<T_005edee0>::Add(INT);

struct T_005edf50 { BYTE b[16]; };

// @baa 0x005edf50
template INT TArray<T_005edf50>::Add(INT);
