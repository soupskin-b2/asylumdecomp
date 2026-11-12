// UnSkeletalAnim.cpp (part 2 of 4): 5 functions
// Placed here by: neighbours 3, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_009157b0 { BYTE b[4]; };

// @baa 0x009157b0
template INT TArray<T_009157b0>::Add(INT);

struct T_00920ee0 { BYTE b[48]; };

// @baa 0x00920ee0
template void TArray<T_00920ee0>::Remove(INT, INT);

struct T_00921030 { BYTE b[16]; };

// @baa 0x00921030
template void TArray<T_00921030>::Remove(INT, INT);

struct T_00921320 { BYTE b[16]; };

// @baa 0x00921320
template void TArray<T_00921320>::Remove(INT, INT);

struct T_00916080 { BYTE b[1]; };

// @baa 0x00916080
template void TArray<T_00916080>::Remove(INT, INT);
