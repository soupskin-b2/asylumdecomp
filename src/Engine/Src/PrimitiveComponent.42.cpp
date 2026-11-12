// PrimitiveComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_006f7810(void);
extern undefined * g_01eda1a8;
// @baa 0x006f97b0
undefined4 * UPrimitiveComponent::sub_006f97b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01eda1a8);
  return param_1;
}
