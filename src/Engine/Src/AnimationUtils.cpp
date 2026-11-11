// AnimationUtils.cpp: 3 functions
// Placed here by: callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_005eae70(...);
int sub_009441d0(void);
int sub_0097fe70(...);
extern undefined4 g_026b5ef0;
// @baa 0x00bfa2d0
void sub_00bfa2d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b5ef0 == 0) {
    g_026b5ef0 = sub_0097fe70(L"Engine");
    sub_009441d0();
  }
  sub_005eae70(g_026b5ef0,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

int sub_00c0adf0(void);
int sub_00c14ff0(...);
extern undefined4 g_026c0818;
// @baa 0x00c15c20
int sub_00c15c20(void)
{
  if (g_026c0818 == 0) {
    g_026c0818 = sub_00c14ff0(L"Engine");
    sub_00c0adf0();
  }
  return g_026c0818;
}

struct D { void sub_00553720(); };

extern D g_026c0934;
// @baa 0x01e253e0
void sub_01e253e0() { g_026c0934.sub_00553720(); }
