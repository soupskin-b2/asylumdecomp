// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a70(...);
int sub_00773b50(void);
// @baa 0x00773bf0
undefined4 AHUD::sub_00773bf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00773b50();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x42c);
  }
  return param_1;
}
