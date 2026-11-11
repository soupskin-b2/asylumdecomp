// D3D9Drv_0c20000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00c210a0 { BYTE b[20]; };

// @baa 0x00c210a0
template INT TArray<T_00c210a0>::Add(INT);

struct T_00c21120 { BYTE b[32]; };

// @baa 0x00c21120
template INT TArray<T_00c21120>::Add(INT);
