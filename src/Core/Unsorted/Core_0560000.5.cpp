// Core_0560000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Win32.h"

// 0x50: pointer into an object (vtable at [ptr], call goes through vtable slot 2)
// 0x58: a LONG refcount
class sub_00567010_Obj {
public:
    virtual void vf_00() = 0;
    virtual void vf_04() = 0;
    virtual void Release();
};

struct sub_00567010_C {
    INT filler_00[0x14];
    sub_00567010_Obj* Ref;
    INT filler_54[1];
    LONG RefCount;

    void sub_00567010();
};

// @baa 0x00567010
void sub_00567010_C::sub_00567010()
{
    Ref->Release();
    InterlockedDecrement(&RefCount);
}
