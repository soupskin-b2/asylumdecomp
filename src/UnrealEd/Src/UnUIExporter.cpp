// UnUIExporter.cpp (part 1 of 2): 5 functions
// Placed here by: callers 3, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_view {
    int sub_0054e0b0(int, int);
};

// @baa 0x00555570
int UPackageMap::sub_00555570(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_0054e0b0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

int sub_005d88c0(...);
int sub_00dba030(...);
int sub_00dbb810(void);
extern undefined4 g_026c5cc8;
// @baa 0x014dd260
void sub_014dd260(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c5cc8 == 0) {
    g_026c5cc8 = sub_00dba030(L"Engine");
    sub_00dbb810();
  }
  sub_005d88c0(g_026c5cc8,param_1,param_2,param_3);
  return;
}

int sub_00da7650(void);
int sub_00dc2f50(...);
extern undefined4 g_026c5c90;
// @baa 0x014dd2a0
void sub_014dd2a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c5c90 == 0) {
    g_026c5c90 = sub_00dc2f50(L"Engine");
    sub_00da7650();
  }
  sub_005d88c0(g_026c5c90,param_1,param_2,param_3);
  return;
}

struct C {
    int sub_014f6c40(undefined4, undefined4, undefined4);
    int sub_014f6330(int, int);
};

// @baa 0x014f6c40
int C::sub_014f6c40(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_014f6330(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_014f6c90 {
    int sub_014f6c90();
};

int sub_014f0630(void);
// @baa 0x014f6c90
int C_014f6c90::sub_014f6c90(void)
{
    int param_1 = (int)this;

  sub_014f0630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
