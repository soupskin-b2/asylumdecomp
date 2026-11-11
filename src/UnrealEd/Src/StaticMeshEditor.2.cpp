// StaticMeshEditor.cpp (part 2 of 3): 6 functions
// Placed here by: callers 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"

struct T_0094ab30 { BYTE b[12]; };

// @baa 0x0094ab30
template INT TArray<T_0094ab30>::Add(INT);

struct T_0115f680 { BYTE b[24]; };

// @baa 0x0115f680
template INT TArray<T_0115f680>::Add(INT);

struct T_0115f730 { BYTE b[16]; };

// @baa 0x0115f730
template INT TArray<T_0115f730>::Add(INT);

struct T_01172700 { BYTE b[24]; };

// @baa 0x01172700
template void TArray<T_01172700>::Remove(INT, INT);

struct T_01172850 { BYTE b[116]; };

// @baa 0x01172850
template void TArray<T_01172850>::Remove(INT, INT);

struct T_01222a40 { BYTE b[12]; };

// @baa 0x01222a40
template INT TArray<T_01222a40>::Add(INT);
