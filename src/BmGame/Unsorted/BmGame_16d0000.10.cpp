// BmGame_16d0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct ARCrowdAttractor_ : public ARCrowdAttractor {
    void sub_016d1640(FLOAT* Out, INT, INT);
};

// @baa 0x016d1640
void ARCrowdAttractor_::sub_016d1640(FLOAT* Out, INT, INT)
{
    FLOAT Zero = 0.0f;
    Out[0] = Zero;
    Out[1] = Zero;
    Out[2] = Zero;
}

struct C
{
    char pad_0[0x8];
    INT Value_8;
    INT Value_c;
    INT Value_10;

    C* sub_016db4b0();
};

// @baa 0x016db4b0
C* C::sub_016db4b0()
{
    Value_8 = 0;
    Value_c = 0;
    Value_10 = 0;
    return this;
}
