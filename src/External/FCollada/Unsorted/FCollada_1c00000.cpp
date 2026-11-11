// FCollada_1c00000.cpp (part 1 of 2): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bfe8a0(...);
int sub_01c1c150(...);
int sub_01c20760(...);
int sub_01c237c0(...);
int sub_01c247f0(...);
int sub_01c25670(...);
// @baa 0x01c00430
void sub_01c00430(int param_1, int param_2, int param_3)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = sub_01c247f0(param_1);
    if (iVar1 == 0) {
      sub_01c237c0(0,"parsing new buffer: out of memory\012");
      sub_01c25670(param_1);
      return;
    }
    sub_01c25670(param_1);
    if (param_3 != 0) {
      uVar2 = sub_01c20760(param_3);
      *(undefined4 *)(iVar1 + 4) = uVar2;
    }
    *(int *)(iVar1 + 0xc) = param_2;
    *(int *)(iVar1 + 0x10) = param_2;
    iVar3 = sub_01c1c150(param_2);
    *(int *)(iVar1 + 0x14) = iVar3 + param_2;
    sub_01bfe8a0(param_1,iVar1);
  }
  return;
}

int sub_01c004b0(...);
// @baa 0x01c00550
undefined4 sub_01c00550(int param_1)
{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = sub_01c1c150(param_1);
  uVar1 = sub_01c004b0(param_1,uVar1);
  return uVar1;
}

int sub_01bf9e10(void);
int sub_01bf9e70(void);
int sub_01c1c9d0(void);
int sub_01c1ca00(...);
int sub_01c20b80(void);
int sub_01c23300(void);
int sub_01c2d630(void);
int sub_01c2d700(void);
int sub_01c2dfd0(void);
extern undefined4 g_026143f0;
extern undefined4 g_027d4cb8;
// @baa 0x01c00570
void sub_01c00570(void)
{
  if (g_027d4cb8 == 0) {
    if (((code *)g_026143f0 == (code (__cdecl *))(undefined4)sub_01c1c9d0) || (g_026143f0 == 0)) {
      sub_01c1ca00(0);
    }
    sub_01c20b80();
    sub_01c2dfd0();
    sub_01c2d700();
    sub_01c23300();
    sub_01c2d630();
    sub_01bf9e10();
    sub_01bf9e70();
    g_027d4cb8 = 1;
  }
  return;
}

int sub_01bfaef0(...);
int sub_01bfb0a0(...);
int sub_01c00a40(...);
int sub_01c24b00(...);
int sub_01c25610(void);
// @baa 0x01c02090
int sub_01c02090(undefined4 param_1, int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = sub_01c25610();
  if (iVar1 == 0) {
    sub_01c237c0(0,"cannot allocate parser context");
    return 0;
  }
  if (param_2 != 0) {
    sub_01c00a40(iVar1,param_2);
  }
  *(undefined4 *)(iVar1 + 0x118) = 1;
  iVar2 = sub_01bfb0a0(param_1,0,iVar1);
  if (iVar2 == 0) {
    sub_01c24b00(iVar1);
    return 0;
  }
  sub_01bfe8a0(iVar1,iVar2);
  if (*(int *)(iVar1 + 0xb4) == 0) {
    iVar3 = sub_01bfaef0(param_1);
  }
  if ((*(int *)(iVar1 + 0xb4) == 0) && (iVar3 != 0)) {
    *(int *)(iVar1 + 0xb4) = iVar3;
  }
  return iVar1;
}

int sub_01c0b370(...);
// @baa 0x01c0d780
undefined4 sub_01c0d780(int param_1)
{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    uVar1 = sub_01c0b370(0,0,0);
    return uVar1;
  }
  return 0;
}
