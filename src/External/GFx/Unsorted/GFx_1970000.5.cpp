// GFx_1970000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// A small buffer of 16-bit values plus its element count.
struct GFxWordBuffer {
    unsigned short* Words;
    unsigned int Num;

    // Drop a trailing element when it is zero.
    void sub_01978380();
};

// @baa 0x01978380
void GFxWordBuffer::sub_01978380()
{
    if (Num > 0 && Words[Num - 1] == 0) {
        --Num;
    }
}
