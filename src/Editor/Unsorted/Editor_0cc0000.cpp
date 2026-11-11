// Editor_0cc0000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00cc65c0(byte);
};

int sub_0053dfa0(...);
int sub_00cc6510(void);
// @baa 0x00cc65c0
undefined4 C::sub_00cc65c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cc6510();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00cc6680 {
    undefined4 * sub_00cc6680();
};

int sub_00cc6610(void);
extern undefined4 g_02086018;
extern undefined * g_02086020;
// @baa 0x00cc6680
undefined4 * C_00cc6680::sub_00cc6680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00cc6610();
  *param_1 = (undefined4)(&g_02086020);
  param_1[5] = (undefined4)(&g_02086018);
  *(undefined2 *)((int)param_1 + 0x7a) = 0;
  return param_1;
}
