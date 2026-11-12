// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_0068f550 {
    undefined4 * sub_0068f550();
};

int sub_005c7a20(void);
extern undefined * g_01ebe858;
// @baa 0x0068f550
undefined4 * C_0068f550::sub_0068f550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ebe858);
  param_1[0x22] = 0;
  return param_1;
}
