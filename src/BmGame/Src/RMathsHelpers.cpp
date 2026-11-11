// RMathsHelpers.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_0155e1c0(...);
// @baa 0x01560ac0
undefined4 sub_01560ac0(int param_1)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    iVar2 = sub_0155e1c0(param_1);
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 0x348);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x150);
  }
  return uVar1;
}

int sub_0155e220(...);
// @baa 0x01560af0
undefined4 sub_01560af0(int param_1)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    iVar2 = sub_0155e220(param_1);
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 0x348);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x150);
  }
  return uVar1;
}
