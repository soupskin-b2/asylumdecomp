// PhATRender.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_02248fbc;
// @baa 0x0130d460
undefined4 * UUnrealEdEngine::sub_0130d460(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02248fbc);
  return param_1;
}
