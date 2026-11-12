// Engine_07e0000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_007e4c30(byte);
};

int sub_0053dfa0(...);
int sub_007df200(void);
// @baa 0x007e4c30
undefined4 C::sub_007e4c30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007df200();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007e0500
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_007e0500* sub_007e0500();
};

// @baa 0x007e0500
C_007e0500* C_007e0500::sub_007e0500()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
