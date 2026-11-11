// Engine_0910000.cpp (part 2 of 7): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_00910170 { BYTE b[40]; };

// @baa 0x00910170
template INT TArray<T_00910170>::Add(INT);

struct T_00910320 { BYTE b[16]; };

// @baa 0x00910320
template INT TArray<T_00910320>::Add(INT);

struct T_00910540 { BYTE b[88]; };

// @baa 0x00910540
template INT TArray<T_00910540>::Add(INT);

struct T_00910a70 { BYTE b[48]; };

// @baa 0x00910a70
template INT TArray<T_00910a70>::Add(INT);

struct T_00910b00 { BYTE b[12]; };

// @baa 0x00910b00
template INT TArray<T_00910b00>::Add(INT);

struct T_00916080 { BYTE b[1]; };

// @baa 0x00916080
template void TArray<T_00916080>::Remove(INT, INT);
