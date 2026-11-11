// UnNavigationPoint.cpp (part 2 of 4): 3 functions
// Placed here by: callers 2, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00838c20 { BYTE b[12]; };

// @baa 0x00838c20
template INT TArray<T_00838c20>::Add(INT);

struct T_00838c90 { BYTE b[12]; };

// @baa 0x00838c90
template INT TArray<T_00838c90>::Add(INT);

struct T_00838d00 { BYTE b[16]; };

// @baa 0x00838d00
template INT TArray<T_00838d00>::Add(INT);
