// RAnimUtil.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct C_Target_6e0
{
    void sub_0090e6e0(INT A, FLOAT B, INT C, FLOAT D);
};

// @baa 0x01598d60
void sub_01598d60(C_Target_6e0* T, INT A2, FLOAT F3, FLOAT F4)
{
    T->sub_0090e6e0(A2, F3, 0, F4);
}
