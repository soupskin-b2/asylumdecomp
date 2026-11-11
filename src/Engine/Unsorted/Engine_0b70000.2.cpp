// Engine_0b70000.cpp (part 2 of 3): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00b79c90 { BYTE b[4]; };

// @baa 0x00b79c90
template INT TArray<T_00b79c90>::Add(INT);

struct T_00b79eb0 { BYTE b[8]; };

// @baa 0x00b79eb0
template INT TArray<T_00b79eb0>::Add(INT);

struct T_00b79f20 { BYTE b[12]; };

// @baa 0x00b79f20
template INT TArray<T_00b79f20>::Add(INT);

struct T_00b79f90 { BYTE b[56]; };

// @baa 0x00b79f90
template INT TArray<T_00b79f90>::Add(INT);
