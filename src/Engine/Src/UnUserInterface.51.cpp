// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_00ddcef0
{
    BYTE pad_00[0x10];
    BYTE Values[1];

    INT sub_00ddcef0(INT Index);
};

// @baa 0x00ddcef0
INT C_00ddcef0::sub_00ddcef0(INT Index)
{
    return Values[Index];
}
