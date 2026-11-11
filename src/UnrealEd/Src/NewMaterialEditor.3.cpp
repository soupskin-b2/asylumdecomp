// NewMaterialEditor.cpp (part 3 of 8): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_01428e80 { BYTE b[24]; };

// @baa 0x01428e80
template INT TArray<T_01428e80>::Add(INT);

struct T_01428f50 { BYTE b[8]; };

// @baa 0x01428f50
template INT TArray<T_01428f50>::Add(INT);

struct T_01428fc0 { BYTE b[36]; };

// @baa 0x01428fc0
template INT TArray<T_01428fc0>::Add(INT);
