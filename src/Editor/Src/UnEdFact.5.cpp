// UnEdFact.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00f1fa30 { BYTE b[4]; };

// @baa 0x00f1fa30
template INT TArray<T_00f1fa30>::Add(INT);

struct T_00f1fae0 { BYTE b[4]; };

// @baa 0x00f1fae0
template INT TArray<T_00f1fae0>::Add(INT);
