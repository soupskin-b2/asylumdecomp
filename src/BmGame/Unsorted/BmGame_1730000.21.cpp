// BmGame_1730000.cpp (part 21 of 22): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_023cecf8;
// @baa 0x017333e0
undefined4 * UObject::sub_017333e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023cecf8);
  return param_1;
}

