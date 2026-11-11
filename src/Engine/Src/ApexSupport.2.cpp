// ApexSupport.cpp (part 2 of 4): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_009e7150 { BYTE b[4]; };

// @baa 0x009e7150
template void TArray<T_009e7150>::Remove(INT, INT);
