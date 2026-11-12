// RBmPathNodeClass.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_006837e0();
// @baa 0x01605da0
void sub_01605da0(void) { sub_006837e0(); }

// @baa 0x015dfb70
INT ARBMPathNode_FenceJump::vf_29c(INT P)
{
    return vf_3bc(1);
}

// @baa 0x015e00f0
INT ARBMPathNode_GapJump::vf_29c(INT P)
{
    return vf_3bc(1);
}

// @baa 0x015e0a20
INT ARCornerPointBase::vf_29c(INT P)
{
    return vf_358(1);
}

struct ARBMPathNode_GapJump_ : public ARBMPathNode_GapJump
{
    void sub_0083f0c0();
};

// @baa 0x015e0110
void ARBMPathNode_GapJump::vf_180()
{
    Proxy1 = NULL;
    Proxy2 = NULL;
    ((ARBMPathNode_GapJump_*)this)->sub_0083f0c0();
}
