// libxml2_1c20000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01c1d5f0(...);
// @baa 0x01c23860
void sub_01c23860(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(param_1 + 0xac) == -1)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = param_2;
  }
  sub_01c1d5f0(0,0,0,param_1,0,1,param_2,3,0,0,param_4,param_5,0,0,0,param_3,param_4,param_5);
  if ((param_1 != 0) && (*(undefined4 *)(param_1 + 0xc) = 0, *(int *)(param_1 + 0x120) == 0)) {
    *(undefined4 *)(param_1 + 0xd4) = 1;
  }
  return;
}

// @baa 0x01c24d50
void sub_01c24d50(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
  }
  return;
}

extern undefined4 g_027d4cf4;
// @baa 0x01c24f50
undefined4 sub_01c24f50(undefined4 param_1)
{
  undefined4 uVar1;
  uVar1 = g_027d4cf4;
  g_027d4cf4 = param_1;
  return uVar1;
}

extern undefined4 g_027d4cfc;
// @baa 0x01c24f60
undefined4 sub_01c24f60(undefined4 param_1)
{
  undefined4 uVar1;
  uVar1 = g_027d4cfc;
  g_027d4cfc = param_1;
  return uVar1;
}

extern undefined4 g_027d4d04;
// @baa 0x01c24f70
undefined4 sub_01c24f70(undefined4 param_1)
{
  undefined4 uVar1;
  uVar1 = g_027d4d04;
  g_027d4d04 = param_1;
  return uVar1;
}

extern undefined4 g_026143e8;
extern undefined4 g_026143f8;
// @baa 0x01c24f80
undefined4 sub_01c24f80(int param_1)
{
  undefined4 uVar1;
  uVar1 = g_026143e8;
  g_026143e8 = param_1;
  g_026143f8 = (uint)(param_1 == 0);
  return uVar1;
}

int sub_01c24da0(...);
// @baa 0x01c256c0
int sub_01c256c0(int param_1, int param_2)
{
  uint uVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) &&
      (uVar1 = sub_01c24da0(param_1 + 0x48,param_2), uVar1 < *(uint *)(param_1 + 0x4c))) &&
     (*(int *)(*(int *)(param_1 + 0x50) + uVar1 * 0x14) == param_2)) {
    return *(int *)(param_1 + 0x50) + uVar1 * 0x14;
  }
  return 0;
}

int sub_01c25800(...);
// @baa 0x01c25980
void sub_01c25980(undefined4 param_1, undefined4 param_2)
{
  sub_01c25800(0,param_1,param_2);
  return;
}

int sub_01c259a0(...);
// @baa 0x01c25b70
void sub_01c25b70(undefined4 param_1)
{
  sub_01c259a0(0,param_1);
  return;
}

int sub_01c25b80(...);
// @baa 0x01c25c70
void sub_01c25c70(undefined4 param_1)
{
  sub_01c25b80(0,param_1);
  return;
}
