// InterpEditor.cpp (part 2 of 3): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_012c3cb0 { BYTE b[4]; };

// @baa 0x012c3cb0
template INT TArray<T_012c3cb0>::Add(INT);

struct T_012c3d30 { BYTE b[20]; };

// @baa 0x012c3d30
template INT TArray<T_012c3d30>::Add(INT);

struct T_012c3ed0 { BYTE b[16]; };

// @baa 0x012c3ed0
template INT TArray<T_012c3ed0>::Add(INT);
