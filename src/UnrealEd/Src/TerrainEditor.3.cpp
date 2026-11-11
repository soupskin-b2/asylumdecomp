// TerrainEditor.cpp (part 3 of 4): 5 functions
// Placed here by: neighbours 4, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_01250160 { BYTE b[36]; };

// @baa 0x01250160
template INT TArray<T_01250160>::Add(INT);

struct T_012501d0 { BYTE b[84]; };

// @baa 0x012501d0
template INT TArray<T_012501d0>::Add(INT);

struct T_01250240 { BYTE b[56]; };

// @baa 0x01250240
template INT TArray<T_01250240>::Add(INT);

struct T_012502d0 { BYTE b[84]; };

// @baa 0x012502d0
template INT TArray<T_012502d0>::Add(INT);

struct T_0125aed0 { BYTE b[56]; };

// @baa 0x0125aed0
template void TArray<T_0125aed0>::Remove(INT, INT);
