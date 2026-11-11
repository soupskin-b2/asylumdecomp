// CommonGameClasses.cpp (part 11 of 12): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_022e0a10;
// @baa 0x01533770
undefined4 * UObject::sub_01533770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e0a10);
  return param_1;
}

extern undefined * g_022e0b20;
// @baa 0x01533840
undefined4 * UObject::sub_01533840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e0b20);
  return param_1;
}

extern undefined * g_022e0cc0;
// @baa 0x01534ca0
undefined4 * UObject::sub_01534ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e0cc0);
  return param_1;
}
