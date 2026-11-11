// PhysX_0a00000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_00a03c00(byte);
};

int sub_0053dfa0(...);
extern undefined4 g_024082f8;
// @baa 0x00a03c00
undefined4 * C::sub_00a03c00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024082f8));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a03c90
undefined1 sub_00a03c90(void)
{
  return 1;
}

struct C_00a03ca0 {
    undefined4 * sub_00a03ca0(byte);
};

// @baa 0x00a03ca0
undefined4 * C_00a03ca0::sub_00a03ca0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024082f8));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
