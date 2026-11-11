// UnEdSrv.cpp: 4 functions
// Placed here by: callers 3, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0077ae70(...);
int sub_00780100(void);
extern undefined4 g_026b3c40;
// @baa 0x006d84e0
int sub_006d84e0(void)
{
  if (g_026b3c40 == 0) {
    g_026b3c40 = sub_0077ae70(L"Engine");
    sub_00780100();
  }
  return g_026b3c40;
}

int sub_005e1960(...);
int sub_00f1bf80(void);
int sub_00f361d0(...);
extern undefined4 g_026667a8;
extern undefined4 g_026cccf8;
// @baa 0x00f39850
void sub_00f39850(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026cccf8 == 0) {
    g_026cccf8 = sub_00f361d0(L"Editor");
    sub_00f1bf80();
  }
  sub_005e1960(g_026cccf8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00614d20(...);
int sub_00ce8f10(void);
int sub_00d18d80(...);
extern undefined4 g_026c564c;
// @baa 0x00f76280
void sub_00f76280(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
{
  if (g_026c564c == 0) {
    g_026c564c = sub_00d18d80(L"Engine");
    sub_00ce8f10();
  }
  sub_00614d20(g_026c564c,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10);
  return;
}

// @baa 0x00f7dd20
int UState::sub_00f7dd20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}
