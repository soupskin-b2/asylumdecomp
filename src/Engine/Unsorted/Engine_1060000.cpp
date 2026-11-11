// Engine_1060000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01068720();
};

// @baa 0x01068720
int C::sub_01068720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + 0xc + *(int *)*param_1;
}

struct C_01068730 {
    int sub_01068730();
};

// @baa 0x01068730
int C_01068730::sub_01068730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_01068740 {
    int sub_01068740();
};

// @baa 0x01068740
int C_01068740::sub_01068740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + 0xc + *(int *)*param_1;
}
