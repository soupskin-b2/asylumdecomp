// UnrealEd_14f0000.cpp: 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_014f6710(undefined4, undefined4);
    int sub_014f6330(int, int);
};

// @baa 0x014f6710
undefined4 C::sub_014f6710(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(this))->sub_014f6330(param_2, param_3);
  return param_1;
}

struct C_014f6730 {
    undefined4 sub_014f6730(undefined4, undefined4);
    int sub_014f6390(int, int);
};

// @baa 0x014f6730
undefined4 C_014f6730::sub_014f6730(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_014f6730 *)(this))->sub_014f6390(param_2, param_3);
  return param_1;
}

struct C_014f6750 {
    int sub_014f6750();
};

int sub_014f0630(void);
// @baa 0x014f6750
int C_014f6750::sub_014f6750(void)
{
    int param_1 = (int)this;

  sub_014f0630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014f6620();
// @baa 0x014f6770
void sub_014f6770(void) { sub_014f6620(); }

struct C_014f7030 {
    undefined4 sub_014f7030(byte);
};

int sub_0053dfa0(...);
int sub_014f6430(void);
// @baa 0x014f7030
undefined4 C_014f7030::sub_014f7030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014f6430();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x014f7050
void sub_014f7050(void) { sub_014f6620(); }
