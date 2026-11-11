// RAnimUtil_PosePlayer.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

struct C
{
    INT field_00;
    INT field_04;

    C* sub_015bdee0(INT Unused);
};

// @baa 0x015bdee0
C* C::sub_015bdee0(INT)
{
    memset(this, 0, 8);
    return this;
}
