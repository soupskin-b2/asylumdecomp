// AnimTreeEditor.cpp (part 3 of 3): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_01347360 { BYTE b[68]; };

// @baa 0x01347360
template void TArray<T_01347360>::Remove(INT, INT);

struct T_01347610 { BYTE b[16]; };

// @baa 0x01347610
template void TArray<T_01347610>::Remove(INT, INT);
