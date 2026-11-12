// RAnimUtil_AdditiveAnimOutput.cpp: 7 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0159bf90
IMPLEMENT_CLASS_AT(URAnimUtil_AdditiveAnimOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_AdditiveAnimOutput.cpp", 9);

// @baa 0x0159f260

struct C_015949b0 { C_015949b0* sub_015949b0(void); };

// @baa 0x015949b0
C_015949b0* C_015949b0::sub_015949b0(void) { return this; }

struct C_015949c0 { C_015949c0* sub_015949c0(void); };

// @baa 0x015949c0
C_015949c0* C_015949c0::sub_015949c0(void) { return this; }

struct C_015949f0 {
    void sub_015949f0();
};

// @baa 0x015949f0
void C_015949f0::sub_015949f0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0xa84) = 0;
  return;
}

// @baa 0x01594a00
int sub_01594a00(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_0231c7d0;
// @baa 0x01594a10
undefined4 * UObject::sub_01594a10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231c7d0);
  return param_1;
}
