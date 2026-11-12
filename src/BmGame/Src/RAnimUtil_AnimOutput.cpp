// RAnimUtil_AnimOutput.cpp: 7 functions
// Placed here by: callers 1, file 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0159be70
IMPLEMENT_CLASS_AT(URAnimUtil_AnimOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_AnimOutput.cpp", 14);

// @baa 0x015a05c0
struct C {
    void sub_015a0680();
};

// @baa 0x015a0680
void C::sub_015a0680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[0x1f] = 0;
  param_1[0x3e] = 0;
  param_1[0x5d] = 0;
  param_1[0x7c] = 0;
  param_1[0x9b] = 0;
  param_1[0x1ca] = 0;
  param_1[0x2db] = 0;
  return;
}

struct C_01594480 { C_01594480* sub_01594480(void); };

// @baa 0x01594480
C_01594480* C_01594480::sub_01594480(void) { return this; }

struct C_01594490 { C_01594490* sub_01594490(void); };

// @baa 0x01594490
C_01594490* C_01594490::sub_01594490(void) { return this; }

// @baa 0x015944c0
int sub_015944c0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_0231c4a0;
// @baa 0x015944d0
undefined4 * UObject::sub_015944d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231c4a0);
  return param_1;
}
