// FMArrayTest.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_0186caf0(undefined4, undefined4);
    int sub_0186ca30(int, int, int);
};

// @baa 0x0186caf0
undefined4 * C::sub_0186caf0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C *)(this))->sub_0186ca30(0, param_2, param_3);
  return param_1;
}
