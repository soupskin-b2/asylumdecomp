// UnSubtitleManager.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_00d54a20(int);
    int sub_00d52020(int, int);
};

// @baa 0x00d54a20
int C::sub_00d54a20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C *)(this))->sub_00d52020((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x24, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}
