// Engine_0be0000.cpp (part 4 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_02025dc0;
// @baa 0x00bec790
undefined4 * UObject::sub_00bec790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02025dc0);
  return param_1;
}

extern undefined * g_02025ed0;
// @baa 0x00bec840
undefined4 * UObject::sub_00bec840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02025ed0);
  return param_1;
}

extern undefined * g_02025fe0;
// @baa 0x00bec8f0
undefined4 * UObject::sub_00bec8f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02025fe0);
  return param_1;
}
