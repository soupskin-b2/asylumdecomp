// RAnimUtil_AnimOutput.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

class C_015944a0 {
public:
    C_015944a0* sub_015944a0(INT Size)
    {
        memset(this, 0, 0xb70);
        return this;
    }
};

// @baa 0x015944a0
void g_caller(C_015944a0* Obj, INT Size)
{
    Obj->sub_015944a0(Size);
}
