// BmGame_16a0000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_016afbf0 { BYTE b[124]; };

// @baa 0x016afbf0
template INT TArray<T_016afbf0>::Add(INT);

struct T_016afc90 { BYTE b[4]; };

// @baa 0x016afc90
template INT TArray<T_016afc90>::Add(INT);

struct T_016aff90 { BYTE b[4]; };

// @baa 0x016aff90
template INT TArray<T_016aff90>::Add(INT);
