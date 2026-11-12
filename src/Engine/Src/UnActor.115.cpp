// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
struct C_0076bc60 {
    undefined4 * sub_0076bc60();
};

extern undefined * g_01eff970;
// @baa 0x0076bc60
undefined4 * C_0076bc60::sub_0076bc60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01eff970);
  return param_1;
}
