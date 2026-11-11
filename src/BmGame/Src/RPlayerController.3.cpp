// RPlayerController.cpp (part 3 of 6): 9 functions
// Placed here by: neighbours 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_01615940 { BYTE b[24]; };

// @baa 0x01615940
template INT TArray<T_01615940>::Add(INT);

struct T_01615a00 { BYTE b[4]; };

// @baa 0x01615a00
template INT TArray<T_01615a00>::Add(INT);

struct T_01615ab0 { BYTE b[16]; };

// @baa 0x01615ab0
template INT TArray<T_01615ab0>::Add(INT);

struct T_01615b30 { BYTE b[20]; };

// @baa 0x01615b30
template INT TArray<T_01615b30>::Add(INT);

struct T_01615da0 { BYTE b[40]; };

// @baa 0x01615da0
template INT TArray<T_01615da0>::Add(INT);

struct T_01621330 { BYTE b[4]; };

// @baa 0x01621330
template void TArray<T_01621330>::Remove(INT, INT);

struct T_01621470 { BYTE b[4]; };

// @baa 0x01621470
template void TArray<T_01621470>::Remove(INT, INT);

struct T_016216b0 { BYTE b[20]; };

// @baa 0x016216b0
template void TArray<T_016216b0>::Remove(INT, INT);

struct T_01621890 { BYTE b[8]; };

// @baa 0x01621890
template void TArray<T_01621890>::Remove(INT, INT);
