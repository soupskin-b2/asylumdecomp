// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S_0056f490 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0056f490(INT Index);
};

// @baa 0x0056f490
DWORD* S_0056f490::sub_0056f490(INT Index)
{
    return &Items(Index);
}
