// FUUniqueStringMapTest.cpp (part 1 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_00ed0260(int);
    int sub_00ec7fb0(int, int, int);
};

// @baa 0x00ed0260
undefined4 * C::sub_00ed0260(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C *)(this))->sub_00ec7fb0(0, *(undefined4 *)(param_2 + 8), *(undefined4 *)(param_2 + 4));
  return param_1;
}
