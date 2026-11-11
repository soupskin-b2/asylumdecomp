// UnSkeletalMesh.cpp (part 1 of 2): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00655160 { BYTE b[40]; };

// @baa 0x00655160
template INT TArray<T_00655160>::Add(INT);

struct T_00947890 { BYTE b[36]; };

// @baa 0x00947890
template INT TArray<T_00947890>::Add(INT);
