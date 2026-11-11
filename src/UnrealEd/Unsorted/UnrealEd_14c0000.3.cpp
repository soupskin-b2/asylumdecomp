// UnrealEd_14c0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

namespace {
struct FProxySub {
    virtual void sub_0();
    virtual void Method();
};
struct FProxyOwner {
    BYTE Pad_0000[0x1a4];
    FProxySub Sub;
};
}

// @baa 0x014c5f10
void __stdcall sub_014c5f10(INT Owner)
{
    FProxyOwner* This = (FProxyOwner*)Owner;
    This->Sub.Method();
}
