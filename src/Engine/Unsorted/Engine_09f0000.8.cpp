// Engine_09f0000.cpp (part 8 of 8): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_01fb33a8;
// @baa 0x009f7290
undefined4 * UObject::sub_009f7290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fb33a8);
  return param_1;
}

extern undefined * g_01fb3510;
// @baa 0x009f7370
undefined4 * UObject::sub_009f7370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fb3510);
  return param_1;
}

