// UnrealEd_1500000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_015082c0(byte);
};

int sub_0053dfa0(...);
int sub_0117f220(void);
// @baa 0x015082c0
undefined4 C::sub_015082c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0117f220();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
