// Editor_0530000.cpp: 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern undefined4 g_026667a4;
// @baa 0x0053d2c0
void sub_0053d2c0(void)
{
  g_026667a4 = g_026667a4 + 1;
  return;
}

// @baa 0x0053d2d0
void sub_0053d2d0(void)
{
  if (g_026667a4 != 0) {
    g_026667a4 = g_026667a4 + -1;
  }
  return;
}

struct C {
    int sub_0053d380();
};

// @baa 0x0053d380
int C::sub_0053d380(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) +
         (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) * 0x3c) * 0x3c;
}

struct C_0053d4a0 {
    undefined4 sub_0053d4a0(int *);
};

// @baa 0x0053d4a0
undefined4 C_0053d4a0::sub_0053d4a0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((((*param_1 == *param_2) && (param_1[2] == param_2[2])) && (param_1[1] == param_2[1])) &&
     (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])))) {
    return 1;
  }
  return 0;
}

// @baa 0x0053d580
int sub_0053d580(void) { return 6; }

struct C_0053d590 {
    void sub_0053d590();
};

// @baa 0x0053d590
void C_0053d590::sub_0053d590(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}
