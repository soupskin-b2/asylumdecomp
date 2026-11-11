// Launch_0be0000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00becf30(byte);
};

int sub_0053dfa0(...);
// @baa 0x00becf30
undefined4 C::sub_00becf30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00becf50 {
    undefined4 sub_00becf50(byte);
};

// @baa 0x00becf50
undefined4 C_00becf50::sub_00becf50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
