// BmGame_1680000.cpp (part 5 of 7): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_0237cd50;
// @baa 0x01686730
undefined4 * UObject::sub_01686730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0237cd50);
  return param_1;
}

extern undefined * g_0237cea0;
// @baa 0x016867e0
undefined4 * UObject::sub_016867e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0237cea0);
  return param_1;
}
