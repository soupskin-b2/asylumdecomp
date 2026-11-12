// BmGameLevelTransitionClasses.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct ARLevelVolume_ : public ARLevelVolume
{
    void sub_0158c5b0();
    INT sub_007771e0(INT A);
};

// @baa 0x01591bb0
INT ARLevelVolume::vf_17c(INT A)
{
    if (A != 0)
        ((ARLevelVolume_*)this)->sub_0158c5b0();
    return ((ARLevelVolume_*)this)->sub_007771e0(A);
}

extern float g_025db4c4;
// @baa 0x01557f60
void __stdcall sub_01557f60(FLOAT F)
{
    g_025db4c4 = F;
}

struct C_X_290
{
    BYTE Pad[0x290];
    DWORD F;
};

struct URSeqAct_PrepareMapChangeFromURL_ : public URSeqAct_PrepareMapChangeFromURL
{
    void sub_008bea90();
    C_X_290* sub_008aba50();
};

// @baa 0x0155abb0
void URSeqAct_PrepareMapChangeFromURL::vf_178()
{
    URSeqAct_PrepareMapChangeFromURL_* Self = (URSeqAct_PrepareMapChangeFromURL_*)this;
    C_X_290* X;
    Self->sub_008bea90();
    X = Self->sub_008aba50();
    X->F &= ~0x4004;
}
