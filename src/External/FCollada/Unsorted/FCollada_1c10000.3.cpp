// FCollada_1c10000.cpp (part 3 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01c14fe0(...);
int sub_01c162a0(...);
int sub_01c16a00(...);
int sub_01c1be00(...);
int sub_01c1bf00(...);
int sub_01c27ad0(...);
extern undefined4 g_02613558;
extern undefined4 g_027d4cc7;
// @baa 0x01c16ad0
int sub_01c16ad0(int param_1, undefined4 param_2, int param_3)
{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (param_3 == 0) {
    iVar1 = sub_01c16a00(param_1,param_2);
    return iVar1;
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = sub_01c1bf00(*(undefined4 *)(iVar1 + 8),param_2);
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x24) != 0)) &&
       (iVar2 = sub_01c1bf00(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 8),param_3), iVar2 != 0)) {
      iVar1 = sub_01c14fe0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(iVar1 + 0xc),1);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = sub_01c1be00(&g_027d4cc7);
      return iVar1;
    }
  }
  if ((((((g_02613558 != 0) && (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0)) &&
        (*(int *)(iVar1 + 0x2c) != 0)) &&
       ((iVar2 = sub_01c27ad0(*(int *)(iVar1 + 0x2c),*(undefined4 *)(param_1 + 8),param_2),
        iVar2 != 0 ||
        ((*(int *)(iVar1 + 0x30) != 0 &&
         (iVar2 = sub_01c27ad0(*(int *)(iVar1 + 0x30),*(undefined4 *)(param_1 + 8),param_2),
         iVar2 != 0)))))) && (*(int *)(iVar2 + 0x38) != 0)) &&
     ((iVar1 = sub_01c162a0(iVar1,param_1,*(int *)(iVar2 + 0x38)), iVar1 != 0 &&
      (iVar1 = sub_01c1bf00(*(undefined4 *)(iVar1 + 8),param_3), iVar1 != 0)))) {
    iVar1 = sub_01c1be00(*(undefined4 *)(iVar2 + 0x30));
    return iVar1;
  }
  return 0;
}

int sub_01c15830(...);
// @baa 0x01c17940
void sub_01c17940(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != param_2)) {
    if (*(int *)(param_1 + 4) == 1) {
      for (iVar1 = *(int *)(param_1 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
        iVar2 = *(int *)(iVar1 + 0xc);
        *(int *)(iVar1 + 0x20) = param_2;
        for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
          if (*(int *)(iVar2 + 0x20) != param_2) {
            sub_01c17940(iVar2,param_2);
          }
        }
      }
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      sub_01c15830(*(int *)(param_1 + 0xc),param_2);
    }
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

int sub_01c159b0(...);
int sub_01c18720(...);
// @baa 0x01c18bb0
undefined4 sub_01c18bb0(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x2c);
    while( true ) {
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      iVar2 = sub_01c1bf00(*(undefined4 *)(iVar1 + 8),param_2);
      if ((iVar2 != 0) && (*(int *)(iVar1 + 0x24) == 0)) break;
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    sub_01c159b0(iVar1);
    sub_01c18720(iVar1);
    return 0;
  }
  return 0xffffffff;
}
