// UnUIStyleEditor.cpp (part 3 of 5): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_014dfd10(byte);
};

int sub_0053dfa0(...);
int sub_014dc1f0(void);
// @baa 0x014dfd10
undefined4 C::sub_014dfd10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014dc1f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014e8b70 {
    undefined4 sub_014e8b70(byte);
};

int sub_014dd570(void);
// @baa 0x014e8b70
undefined4 C_014e8b70::sub_014e8b70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014dd570();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
