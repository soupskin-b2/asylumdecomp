// UnNovodexGeomUtils.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00837e40
void sub_00837e40(int param_1, int param_2, int * param_3)
{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x18) & 1;
  if ((*(uint *)(param_1 + 0x18) & 2) != 0) {
    puVar1 = (ushort *)(*(int *)(param_1 + 0xc) * param_2 + *(int *)(param_1 + 0x14));
    *param_3 = (uint)*puVar1 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10);
    param_3[1] = (uint)puVar1[uVar3 + 1] * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10);
    param_3[2] = (uint)puVar1[2 - uVar3] * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10);
    return;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0xc) * param_2 + *(int *)(param_1 + 0x14));
  *param_3 = *piVar2 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10);
  param_3[1] = piVar2[uVar3 + 1] * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10);
  param_3[2] = piVar2[2 - uVar3] * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10);
  return;
}
