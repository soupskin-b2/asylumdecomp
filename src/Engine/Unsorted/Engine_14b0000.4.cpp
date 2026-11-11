// Engine_14b0000.cpp (part 4 of 4): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_014b22b0(byte);
};

int sub_0053dfa0(...);
int sub_013e9bc0(void);
// @baa 0x014b22b0
undefined4 C::sub_014b22b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014b24a0 {
    undefined4 sub_014b24a0(byte);
};

// @baa 0x014b24a0
undefined4 C_014b24a0::sub_014b24a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
