// Engine_0660000.cpp (part 6 of 17): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00668610(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x00668610
undefined4 C::sub_00668610(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
