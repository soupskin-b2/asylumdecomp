// UnStatChart.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// sub_00d5a480 lives in Engine/Src/UnStatChart.cpp and clears a chart:
// it resets the subobject at this+0x44 (its own method, 1 stack arg) and
// the subobject at this+8 (same).  The headers do not have these classes,
// so they are defined here under their addresses.
struct sub_00d54940_Class
{
    void sub_00d54940(int Arg);
};

struct sub_00d582b0_Class
{
    void sub_00d582b0(int Arg);
};

struct sub_00d5a480_Class
{
    unsigned char _r0_00[0x8];
    sub_00d582b0_Class _r0_08;   // cleared at this+8
    unsigned char _r0_0c[0x3b];
    sub_00d54940_Class _r0_44;   // cleared at this+0x44

    void sub_00d5a480()
    {
        _r0_44.sub_00d54940(0);
        _r0_08.sub_00d582b0(0);
    }
};

static sub_00d5a480_Class g_holder;
// @baa 0x00d5a480
void sub_00d5a480_Caller()
{
    g_holder.sub_00d5a480();
}
