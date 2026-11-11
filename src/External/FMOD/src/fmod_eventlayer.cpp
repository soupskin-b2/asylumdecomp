// fmod_eventlayer.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_017fa320();
    int sub_017f9e40();
};

int __stdcall sub_01766e32(int);
// @baa 0x017fa320
int C::sub_017fa320(void)
{
    int param_1 = (int)this;
  int *piVar1;
  int iVar2;
  if (((*(int *)(param_1 + 0x14) != 0) &&
      (piVar1 = (int *)(*(int *)(param_1 + 0x14) + 0x18), *piVar1 = *piVar1 + -1,
      *(int *)(*(int *)(param_1 + 0x14) + 0x18) == 0)) && (iVar2 = ((C *)((*(char **)((char *)this + 0x14))))->sub_017f9e40(), iVar2 != 0)) {
    return iVar2;
  }
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    sub_01766e32(*(int *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}
