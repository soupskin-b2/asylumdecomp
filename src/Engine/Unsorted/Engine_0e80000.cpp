// Engine_0e80000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_00e8f7f0(int);
};

// @baa 0x00e8f7f0
int C::sub_00e8f7f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00e8f810 {
    int sub_00e8f810();
};

// @baa 0x00e8f810
int C_00e8f810::sub_00e8f810(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e8f830 {
    int sub_00e8f830();
};

// @baa 0x00e8f830
int C_00e8f830::sub_00e8f830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct M_00e8f870 { void sub_00549310(); };

struct C_00e8f870 { char pad[8]; M_00e8f870 m; void sub_00e8f870(); };

// @baa 0x00e8f870
void C_00e8f870::sub_00e8f870() { m.sub_00549310(); }

struct C_00e8f880 {
    int sub_00e8f880(int);
};

// @baa 0x00e8f880
int C_00e8f880::sub_00e8f880(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}
