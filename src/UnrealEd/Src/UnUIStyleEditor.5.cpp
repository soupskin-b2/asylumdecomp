// UnUIStyleEditor.cpp (part 5 of 5): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_014e8d20(byte);
};

int sub_0053dfa0(...);
int sub_014dd570(void);
// @baa 0x014e8d20
undefined4 C::sub_014e8d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014dd570();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
