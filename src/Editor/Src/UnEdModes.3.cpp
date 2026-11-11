// UnEdModes.cpp (part 3 of 3): 3 functions
// Placed here by: class 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00f5bbb0(void);
// @baa 0x00f5f1b0
undefined4 UTerrainFactory::sub_00f5f1b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_021591c0;
// @baa 0x00f5fee0
undefined4 * UTerrainFactory::sub_00f5fee0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021591c0);
  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_022170c8;
// @baa 0x0127a180
undefined4 * UTerrainFactory::sub_0127a180(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022170c8);
  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
