// GFxUIEngine.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_018d3de0(void);
extern char g_023f4ef8[];
extern char g_023f4f44[];
extern char g_023f4f58[];
struct S_00e49630 {
    void sub_00e49630();
};

// @baa 0x00e49630
// @baa 0x00e49630
void S_00e49630::sub_00e49630(void)
{
    *(volatile undefined4 *)((char *)this + 0x14) = (undefined4)(&g_023f4f58);
    *(volatile undefined4 *)((char *)this + 0x14) = (undefined4)(&g_023f4ef8);
    *(volatile undefined4 *)this = (undefined4)(&g_023f4f44);
    sub_018d3de0();
}

 // GFxState::vftable
extern void sub_018d3de0();
struct C_00e49290 {
    void sub_00e49290();
};

// @baa 0x00e49290
// @baa 0x00e49290
void C_00e49290::sub_00e49290()
{
    INT* LogVTable = (INT*)((char*)this + 0x14);
    *(volatile INT*)LogVTable = (INT)&g_023f4f58;
    *LogVTable = (INT)&g_023f4ef8;
    *(INT*)this = (INT)&g_023f4f44;
    sub_018d3de0();
}
