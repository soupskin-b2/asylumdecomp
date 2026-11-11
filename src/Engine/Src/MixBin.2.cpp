// MixBin.cpp (part 2 of 3): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00bedb90 { BYTE b[4]; };

// @baa 0x00bedb90
template INT TArray<T_00bedb90>::Add(INT);

struct T_00bee010 { BYTE b[4]; };

// @baa 0x00bee010
template INT TArray<T_00bee010>::Add(INT);
