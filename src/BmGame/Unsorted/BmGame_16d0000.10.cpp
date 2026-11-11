// BmGame_16d0000.cpp: 1 function
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
