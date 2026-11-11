// BmGame_16c0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct URCapeComponent_ : public URCapeComponent
{
    void sub_016cd7b0(INT A, INT B);
    void vf_134(INT);
};

// @baa 0x016cd890
void URCapeComponent_::vf_134(INT)
{
    sub_016cd7b0(1, 1);
}

struct URCapeComponent__016cd8a0 : public URCapeComponent
{
    void sub_016cd7b0(INT A, INT B);
    void vf_13c(INT);
};

// @baa 0x016cd8a0
void URCapeComponent__016cd8a0::vf_13c(INT)
{
    sub_016cd7b0(1, 0);
}
