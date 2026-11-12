// RAnimUtil_Sequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct C_In_e4_9350
{
    BYTE Pad[0xe4];
    BYTE B;
};

struct C_Out_9350
{
    C_In_e4_9350* P;
};

// @baa 0x015c9350
INT sub_015c9350(C_Out_9350* O)
{
    DWORD B = O->P->B;
    if (B == 1 || B == 3)
        return 1;
    return 0;
}
