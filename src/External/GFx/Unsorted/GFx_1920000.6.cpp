// GFx_1920000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct S {
    INT a;
    INT b;
    INT c;
    INT d;
    S* sub_01921b00();
};

// @baa 0x01921b00
S* S::sub_01921b00()
{
    a = 0x7fffffff;
    b = 0x80000000;
    c = 0;
    d = 0;
    return this;
}
