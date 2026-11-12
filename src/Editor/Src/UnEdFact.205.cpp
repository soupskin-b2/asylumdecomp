// UnEdFact.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 * sub_00f33200();
};

int sub_0060b3d0(void);
extern undefined * g_021324a0;
// @baa 0x00f33200
undefined4 * C::sub_00f33200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_021324a0);
  param_1[0x26] = 0;
  return param_1;
}
