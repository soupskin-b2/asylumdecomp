// UnSequence.cpp (part 2 of 10): 10 functions
// Placed here by: neighbours 7, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_008ac9b0 { BYTE b[8]; };

// @baa 0x008ac9b0
template INT TArray<T_008ac9b0>::Add(INT);

struct T_008acb50 { BYTE b[16]; };

// @baa 0x008acb50
template INT TArray<T_008acb50>::Add(INT);

struct T_008b3a80 { BYTE b[4]; };

// @baa 0x008b3a80
template void TArray<T_008b3a80>::Remove(INT, INT);

struct T_008c13d0 { BYTE b[4]; };

// @baa 0x008c13d0
template void TArray<T_008c13d0>::Remove(INT, INT);

struct T_008c1530 { BYTE b[12]; };

// @baa 0x008c1530
template void TArray<T_008c1530>::Remove(INT, INT);

struct T_008c1610 { BYTE b[4]; };

// @baa 0x008c1610
template void TArray<T_008c1610>::Remove(INT, INT);

struct T_008c1920 { BYTE b[8]; };

// @baa 0x008c1920
template void TArray<T_008c1920>::Remove(INT, INT);

struct T_008c1aa0 { BYTE b[4]; };

// @baa 0x008c1aa0
template void TArray<T_008c1aa0>::Remove(INT, INT);

struct T_008c1c20 { BYTE b[4]; };

// @baa 0x008c1c20
template void TArray<T_008c1c20>::Remove(INT, INT);

struct T_008c1fb0 { BYTE b[16]; };

// @baa 0x008c1fb0
template void TArray<T_008c1fb0>::Remove(INT, INT);
