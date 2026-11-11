// UnUIObjects.cpp (part 16 of 17): 9 functions
// Placed here by: neighbours 5, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00dab0c0 { BYTE b[4]; };

// @baa 0x00dab0c0
template INT TArray<T_00dab0c0>::Add(INT);

struct T_00dab250 { BYTE b[4]; };

// @baa 0x00dab250
template INT TArray<T_00dab250>::Add(INT);

struct T_00dab500 { BYTE b[8]; };

// @baa 0x00dab500
template INT TArray<T_00dab500>::Add(INT);

struct T_00dab5e0 { BYTE b[8]; };

// @baa 0x00dab5e0
template INT TArray<T_00dab5e0>::Add(INT);

struct T_00db1360 { BYTE b[4]; };

// @baa 0x00db1360
template void TArray<T_00db1360>::Remove(INT, INT);

struct T_00db1500 { BYTE b[4]; };

// @baa 0x00db1500
template void TArray<T_00db1500>::Remove(INT, INT);

struct T_00db1710 { BYTE b[8]; };

// @baa 0x00db1710
template void TArray<T_00db1710>::Remove(INT, INT);

struct T_00db17f0 { BYTE b[20]; };

// @baa 0x00db17f0
template void TArray<T_00db17f0>::Remove(INT, INT);

struct T_00db1bd0 { BYTE b[8]; };

// @baa 0x00db1bd0
template void TArray<T_00db1bd0>::Remove(INT, INT);
