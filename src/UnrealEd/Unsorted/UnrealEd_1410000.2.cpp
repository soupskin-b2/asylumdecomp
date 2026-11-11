// UnrealEd_1410000.cpp (part 2 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_0140aa80();
// @baa 0x01412310
void sub_01412310(void) { sub_0140aa80(); }

struct C {
    undefined4 sub_01418990(byte);
};

int sub_0053dfa0(...);
int sub_013e9bc0(void);
// @baa 0x01418990
undefined4 C::sub_01418990(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
