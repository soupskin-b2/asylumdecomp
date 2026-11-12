// GFx_18e0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern double g_023dbbe0;
struct S_018e8480 {
    char Unknown_00[0xb];
    signed char B_0x0b;

    float sub_018e8480();
};

// @baa 0x018e8480
float S_018e8480::sub_018e8480() {
    return (float)((float)B_0x0b * g_023dbbe0);
}
