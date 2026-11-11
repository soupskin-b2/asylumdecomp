// UnWorld.cpp (part 3 of 6): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_009b0e10();
};

int sub_0053df70(...);
// @baa 0x009b0e10
void C::sub_009b0e10(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x28,8);
      *param_1 = iVar1;
    }
  }
  return;
}
