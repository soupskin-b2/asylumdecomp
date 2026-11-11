// FUObjectTest.cpp (part 5 of 7): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_018677b0(undefined4);
    int sub_01867620(int);
};

extern undefined4 g_023eb39c;
// @baa 0x018677b0
undefined4 * C::sub_018677b0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_01867620(param_2);
  *param_1 = (undefined4)((&g_023eb39c));
  return param_1;
}
