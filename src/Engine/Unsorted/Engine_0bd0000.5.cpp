// Engine_0bd0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Win32.h"

struct sub_00bdb980_Object {
    char Header[0x174];
    int Field0174;
    char Body[0xd80 - 0x174 - 4];
    LONG Field0D80;
    void sub_00bdb980();
};

// @baa 0x00bdb980
void sub_00bdb980_Object::sub_00bdb980()
{
    if (this->Field0174 == 0)
    {
        InterlockedExchange(&this->Field0D80, 0);
    }
}
