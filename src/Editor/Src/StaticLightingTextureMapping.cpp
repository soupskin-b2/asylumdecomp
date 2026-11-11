// StaticLightingTextureMapping.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00ed0f00(int);
};

int sub_0053df70(...);
int sub_0053dfa0(...);
// @baa 0x00ed0f00
void C::sub_00ed0f00(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      sub_0053dfa0(*(undefined4 *)(*param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
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
