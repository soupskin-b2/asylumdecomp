// fmod_output_wasapi.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_017b7c51(undefined4 *);
};

int sub_017b77bc(void);
// @baa 0x017b7c51
int C::sub_017b7c51(undefined4 * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = 0x25;
  }
  else {
    if ((*(char *)(param_1 + 0x2c) == '\0') && (iVar1 = sub_017b77bc(), iVar1 != 0)) {
      return iVar1;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x100);
    iVar1 = 0;
  }
  return iVar1;
}

struct C_017b8100 {
    undefined4 sub_017b8100(undefined4 *);
};

// @baa 0x017b8100
undefined4 C_017b8100::sub_017b8100(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x208);
    uVar1 = 0;
  }
  return uVar1;
}
