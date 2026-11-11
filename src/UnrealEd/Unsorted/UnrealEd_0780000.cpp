// UnrealEd_0780000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0077a6f0(...);
int sub_007828b0(void);
extern undefined4 g_026b3c08;
// @baa 0x007852f0
int sub_007852f0(void)
{
  if (g_026b3c08 == 0) {
    g_026b3c08 = sub_0077a6f0(L"Engine");
    sub_007828b0();
  }
  return g_026b3c08;
}

int sub_007a20c0(void);
int sub_007b5680(...);
extern undefined4 g_026b52e4;
// @baa 0x00785320
int sub_00785320(void)
{
  if (g_026b52e4 == 0) {
    g_026b52e4 = sub_007b5680(L"Engine");
    sub_007a20c0();
  }
  return g_026b52e4;
}

// @baa 0x00785380
int sub_00785380(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01f15d88;
// @baa 0x00785390
undefined4 * UObject::sub_00785390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f15d88);
  return param_1;
}

// @baa 0x007853b0
IMPLEMENT_CLASS_AT(UCameraAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 15);

// @baa 0x00785410
// @baa 0x00785430
undefined4 sub_00785430(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_01f15e98;
// @baa 0x00785440
undefined4 * UObject::sub_00785440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f15e98);
  return param_1;
}

// @baa 0x00785460
IMPLEMENT_CLASS_AT(UCameraAnimInst, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 16);

// @baa 0x007854c0
// @baa 0x007854e0
undefined4 sub_007854e0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}
