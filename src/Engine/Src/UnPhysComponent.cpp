// UnPhysComponent.cpp (part 1 of 2): 3 functions
// Placed here by: callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_009b1900 { BYTE b[4]; };

// @baa 0x009b1900
template INT TArray<T_009b1900>::Add(INT);

struct T_00a02760 { BYTE b[12]; };

// @baa 0x00a02760
template INT TArray<T_00a02760>::Add(INT);

struct T_00a02ed0 { BYTE b[4]; };

// @baa 0x00a02ed0
template INT TArray<T_00a02ed0>::Add(INT);
