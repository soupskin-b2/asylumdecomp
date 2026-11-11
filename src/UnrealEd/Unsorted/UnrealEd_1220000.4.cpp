// UnrealEd_1220000.cpp (part 4 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_01222ac0 { BYTE b[80]; };

// @baa 0x01222ac0
template INT TArray<T_01222ac0>::Add(INT);

struct T_01222b30 { BYTE b[172]; };

// @baa 0x01222b30
template INT TArray<T_01222b30>::Add(INT);

struct T_01222bd0 { BYTE b[16]; };

// @baa 0x01222bd0
template INT TArray<T_01222bd0>::Add(INT);
