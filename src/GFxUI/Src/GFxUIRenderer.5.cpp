// GFxUIRenderer.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

struct T_00e47fd0
{
    int Pad00;     // 0x00
    int Data[8];   // 0x04..0x23
    int* Out;      // 0x24

    int sub_00e47fd0();
};

// @baa 0x00e47fd0
int T_00e47fd0::sub_00e47fd0()
{
    memcpy(Out, Data, sizeof(Data));
    return 0x28;
}
