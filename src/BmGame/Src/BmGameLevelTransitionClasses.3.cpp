// BmGameLevelTransitionClasses.cpp: 1 function
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
