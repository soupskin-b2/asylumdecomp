// UnrealEd_0630000.cpp: 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0063b700(byte);
};

int sub_0053dfa0(...);
int sub_00638660(void);
// @baa 0x0063b700
undefined4 C::sub_0063b700(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00638660();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
