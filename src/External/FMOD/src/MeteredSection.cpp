// MeteredSection.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_017ad4d4(...);
int sub_017ad52a(...);
// @baa 0x017ad6f3
undefined4 sub_017ad6f3(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  int iVar1;
  
  iVar1 = sub_017ad4d4(param_1,param_4,param_5);
  if (iVar1 != 0) {
    iVar1 = sub_017ad52a(param_1,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
