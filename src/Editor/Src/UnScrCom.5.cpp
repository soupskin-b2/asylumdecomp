// UnScrCom.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct S_00fd85d0
{
    void sub_00fbeca0(INT A, INT B);
};

extern S_00fd85d0 * sub_00fd85d0();
struct C_00fd86b0
{
    void sub_00fd86b0(INT A, INT B);
};

// @baa 0x00fd86b0
void C_00fd86b0::sub_00fd86b0(INT A, INT B)
{
    sub_00fd85d0()->sub_00fbeca0(A, B);
}
