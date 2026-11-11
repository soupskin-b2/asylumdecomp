// UnLevAct.cpp (part 1 of 2): 8 functions
// Placed here by: neighbours 6, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_006d80a0(int *);
};

// @baa 0x006d80a0
undefined4 C::sub_006d80a0(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 0;
  }
  return 1;
}

struct C_007d5e70 { C_007d5e70* sub_007d5e70(int a0); };

// @baa 0x007d5e70
C_007d5e70* C_007d5e70::sub_007d5e70(int a0) { return this; }

int sub_009c4040(...);
int sub_009c5d70(void);
extern undefined4 g_026b62c8;
// @baa 0x007d5ec0
int sub_007d5ec0(void)
{
  if (g_026b62c8 == 0) {
    g_026b62c8 = sub_009c4040(L"Engine");
    sub_009c5d70();
  }
  return g_026b62c8;
}

struct C_007d5ef0 { C_007d5ef0* sub_007d5ef0(int a0); };

// @baa 0x007d5ef0
C_007d5ef0* C_007d5ef0::sub_007d5ef0(int a0) { return this; }

struct C_007d5f00 { C_007d5f00* sub_007d5f00(int a0); };

// @baa 0x007d5f00
C_007d5f00* C_007d5f00::sub_007d5f00(int a0) { return this; }

struct C_007d5f10 { C_007d5f10* sub_007d5f10(int a0); };

// @baa 0x007d5f10
C_007d5f10* C_007d5f10::sub_007d5f10(int a0) { return this; }

struct C_007d5f20 { C_007d5f20* sub_007d5f20(int a0); };

// @baa 0x007d5f20
C_007d5f20* C_007d5f20::sub_007d5f20(int a0) { return this; }

struct C_007df7d0 {
    int sub_007df7d0(undefined4 *);
};

int sub_007dc430(...);
// @baa 0x007df7d0
int C_007df7d0::sub_007df7d0(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_007dc430(4,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return *(int *)(param_1 + 4) + -1;
}
