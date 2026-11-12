// RBmAIClass.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

const TCHAR* sub_015d9030();
const TCHAR* sub_0053f6c0();
// @baa 0x015dabf0
INT ARBMAIManager::vf_000()
{
    return sub_015d9030 == sub_0053f6c0;
}

// @baa 0x015dc2b0
void __stdcall sub_015dc2b0(INT* D, INT A, INT B)
{
    D[0] = A;
    D[1] = B;
}
