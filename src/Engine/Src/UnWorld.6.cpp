// UnWorld.cpp (part 6 of 6): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_009b6470(int);
};

int sub_0053df70(...);
// @baa 0x009b6470
void C::sub_009b6470(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

extern undefined4 g_026b62cc;
extern undefined4 g_026b62d0;
extern undefined4 g_026b62d4;
// @baa 0x009badd0
void sub_009badd0(void)
{
  g_026b62d0 = 0;
  if (g_026b62d4 != 0) {
    g_026b62d4 = 0;
    if (g_026b62cc != 0) {
      g_026b62cc = sub_0053df70(g_026b62cc,0,8);
    }
  }
  return;
}
