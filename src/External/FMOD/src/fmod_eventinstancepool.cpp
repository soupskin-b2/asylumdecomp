// fmod_eventinstancepool.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017db100(int, int *);
};

// @baa 0x017db100
undefined4 C::sub_017db100(int param_2, int * param_3)
{
    int param_1 = (int)this;

  int iVar1;
  int *piVar2;
  
  if ((param_3 != (int *)0x0) && (param_2 != 0)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0x4e;
    }
    *param_3 = 0;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      piVar2 = *(int **)(param_1 + 0x10);
      do {
        if (*piVar2 == param_2) {
          *param_3 = iVar1;
          return 0;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
  }
  return 0x25;
}

struct C_017db160 {
    undefined4 sub_017db160(int, undefined4 *);
};

// @baa 0x017db160
undefined4 C_017db160::sub_017db160(int param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  if (param_3 == (undefined4 *)0x0) {
    return 0x25;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0x4e;
  }
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  return 0;
}
