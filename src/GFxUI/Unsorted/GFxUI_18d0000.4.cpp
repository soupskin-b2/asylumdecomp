// GFxUI_18d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct sub_018dc000
{
    void sub_018dc960(int* Key, int Hash);

    void sub_018dce00(int* Key)
    {
        unsigned int Value = *Key;
        sub_018dc960(Key, (Value >> 6) ^ Value);
    }
};

// @baa 0x018dce00
void sub_018dce10(int* Key)
{
    ((sub_018dc000*)Key)->sub_018dce00(Key);
}
