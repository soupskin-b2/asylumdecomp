// DlgUIEventKeyBindings.cpp (part 1 of 2): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_013a57e0 { BYTE b[28]; };

// @baa 0x013a57e0
template INT TArray<T_013a57e0>::Add(INT);

struct T_013a7600 { BYTE b[12]; };

// @baa 0x013a7600
template void TArray<T_013a7600>::Remove(INT, INT);
