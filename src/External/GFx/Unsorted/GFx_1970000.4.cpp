// GFx_1970000.cpp (part 4 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int * sub_0197b5d0(int *, int, int *);
};

int sub_01979e90(...);
extern undefined4 g_027b89cb;
// @baa 0x0197b5d0
int * C::sub_0197b5d0(int * param_2, int param_3, int * param_4)
{
    int param_1 = (int)this;

  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = sub_01979e90(piVar1,&param_3,&g_027b89cb);
  if (iVar2 != -1) {
    if (param_4 != (int *)0x0) {
      *param_4 = param_3 - *(int *)(*(int *)(*piVar1 + iVar2 * 4) + 0x1c);
    }
    *param_2 = (int)piVar1;
    param_2[1] = iVar2;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = -1;
  return param_2;
}
