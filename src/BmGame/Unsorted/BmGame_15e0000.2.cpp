// BmGame_15e0000.cpp (part 2 of 5): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_015e2b40 { BYTE b[4]; };

// @baa 0x015e2b40
template INT TArray<T_015e2b40>::Add(INT);

struct T_015ee790 { BYTE b[32]; };

// @baa 0x015ee790
template void TArray<T_015ee790>::Remove(INT, INT);

struct T_015ee930 { BYTE b[4]; };

// @baa 0x015ee930
template void TArray<T_015ee930>::Remove(INT, INT);

struct T_015eea70 { BYTE b[24]; };

// @baa 0x015eea70
template void TArray<T_015eea70>::Remove(INT, INT);
