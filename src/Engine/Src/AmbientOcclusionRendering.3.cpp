// AmbientOcclusionRendering.cpp (part 3 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00a65d90(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x00a65d90
undefined4 C::sub_00a65d90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
