// FMODAudioDevice.cpp (part 4 of 6): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00e74280(int);
};

int sub_0053df70(...);
// @baa 0x00e74280
void C::sub_00e74280(int param_2)
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

struct C_00e74320 {
    void sub_00e74320(int);
};

// @baa 0x00e74320
void C_00e74320::sub_00e74320(int param_2)
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

extern undefined4 g_026cc1f0;
extern undefined4 g_026cc1f4;
extern undefined4 g_026cc200;
// @baa 0x00e84dd0
void sub_00e84dd0(int param_1)
{
  g_026cc1f0 = param_1;
  if (param_1 != 0) {
    g_026cc200 = 1;
    g_026cc1f4 = param_1 + 4;
    return;
  }
  g_026cc1f4 = 0;
  return;
}

extern "C" __declspec(dllimport) int strcpy_s(...);
// @baa 0x00e84f10
void sub_00e84f10(char * param_1, char * param_2)
{
  strcpy_s(param_1,0x20,param_2);
  return;
}
