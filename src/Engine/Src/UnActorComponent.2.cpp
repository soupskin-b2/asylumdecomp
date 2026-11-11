// UnActorComponent.cpp (part 2 of 3): 6 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00759c10 { BYTE b[4]; };

// @baa 0x00759c10
template INT TArray<T_00759c10>::Add(INT);

struct T_00759c80 { BYTE b[4]; };

// @baa 0x00759c80
template INT TArray<T_00759c80>::Add(INT);

struct T_00759f10 { BYTE b[4]; };

// @baa 0x00759f10
template INT TArray<T_00759f10>::Add(INT);

struct T_0075aec0 { BYTE b[20]; };

// @baa 0x0075aec0
template INT TArray<T_0075aec0>::Add(INT);

struct T_00765e00 { BYTE b[4]; };

// @baa 0x00765e00
template void TArray<T_00765e00>::Remove(INT, INT);

struct T_00766350 { BYTE b[20]; };

// @baa 0x00766350
template void TArray<T_00766350>::Remove(INT, INT);
