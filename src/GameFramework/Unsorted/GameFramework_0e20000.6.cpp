// GameFramework_0e20000.cpp (part 6 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_020ee538;
struct C_00e28130 { undefined4 * sub_00e28130(void); };
// @baa 0x00e28130
undefined4 * C_00e28130::sub_00e28130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020ee538);
  return param_1;
}
