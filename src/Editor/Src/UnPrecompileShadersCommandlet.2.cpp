// UnPrecompileShadersCommandlet.cpp (part 2 of 3): 5 functions
// Placed here by: neighbours 4, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_01104300 { BYTE b[4]; };

// @baa 0x01104300
template INT TArray<T_01104300>::Add(INT);

struct T_01104380 { BYTE b[36]; };

// @baa 0x01104380
template INT TArray<T_01104380>::Add(INT);

struct T_01104400 { BYTE b[4]; };

// @baa 0x01104400
template INT TArray<T_01104400>::Add(INT);

struct T_01104560 { BYTE b[124]; };

// @baa 0x01104560
template INT TArray<T_01104560>::Add(INT);

struct T_01104ff0 { BYTE b[4]; };

// @baa 0x01104ff0
template void TArray<T_01104ff0>::Remove(INT, INT);
