// UnUIEditorWindows.cpp (part 3 of 4): 2 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_014c9c40 { BYTE b[20]; };

// @baa 0x014c9c40
template INT TArray<T_014c9c40>::Add(INT);

struct T_014c9f60 { BYTE b[16]; };

// @baa 0x014c9f60
template INT TArray<T_014c9f60>::Add(INT);
