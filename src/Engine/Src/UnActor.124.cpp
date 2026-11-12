// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
struct C_0076c300 {
    undefined4 * sub_0076c300();
};

extern undefined * g_01f004b0;
// @baa 0x0076c300
undefined4 * C_0076c300::sub_0076c300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01f004b0);
  return param_1;
}
