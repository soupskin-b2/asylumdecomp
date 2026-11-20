// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_01efdd30;
struct C_007546e0 { undefined4 * sub_007546e0(void); };
// @baa 0x007546e0
undefined4 * C_007546e0::sub_007546e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01efdd30);
  return param_1;
}
