// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00773830(void);
extern undefined * g_01f0e170;
// @baa 0x00776950
undefined4 * AController::sub_00776950(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00773830();
  *param_1 = (undefined4)(&g_01f0e170);
  return param_1;
}
