// SpeedTree.cpp (part 4 of 8): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01a69c00(byte);
};

int sub_00402660(...);
int sub_01a69040(void);
// @baa 0x01a69c00
undefined4 C::sub_01a69c00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01a69040();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
