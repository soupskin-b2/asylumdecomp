// UnrealEd_1410000.cpp (part 3 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01412320(byte);
};

int sub_0053dfa0(...);
int sub_0140aa80(void);
// @baa 0x01412320
undefined4 C::sub_01412320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0140aa80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
