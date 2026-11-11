// Launch_0e80000.cpp: 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00789480(...);
int __stdcall sub_01762b30(int, int, int);
int __stdcall sub_01763a77(int, int, int);
int __stdcall sub_01763d3c(int, int);
int __stdcall sub_01767294(int, int);
extern undefined4 g_025e4f28;
extern undefined4 g_026c3cdc;
// @baa 0x00e82b70
void sub_00e82b70(undefined4 param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_8;
  int iStack_4;
  uVar1 = (**(code **)(**(int **)(g_026c3cdc + 800) + 0x124))();
  iVar2 = sub_00789480(uVar1);
  if (iVar2 != 0) {
    sub_01762b30(*(undefined4 *)(iVar2 + 0x1d8), 0x13, (int)(&uStack_8));
    sub_01767294(uStack_8,g_025e4f28);
    iVar2 = sub_01763a77(param_1,uStack_8,0);
    if (((iVar2 == 0) && (iVar2 = sub_01763d3c(param_1, (int)(&iStack_4)), iVar2 == 0)) && (iStack_4 != 0))
    {
      *(undefined4 *)(iStack_4 + 8) = uStack_8;
    }
  }
  return;
}
