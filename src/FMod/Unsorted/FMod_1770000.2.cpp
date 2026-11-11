// FMod_1770000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017739be(undefined4);
};

// @baa 0x017739be
undefined4 C::sub_017739be(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return 0;
}

struct C_0177ab76 {
    undefined4 sub_0177ab76(undefined4);
};

// @baa 0x0177ab76
undefined4 C_0177ab76::sub_0177ab76(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18) = param_2;
  return 0;
}
