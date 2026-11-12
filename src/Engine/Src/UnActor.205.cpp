// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a70(...);
int sub_00773670(void);
// @baa 0x00773800
undefined4 AController::sub_00773800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00773670();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x330);
  }
  return param_1;
}
