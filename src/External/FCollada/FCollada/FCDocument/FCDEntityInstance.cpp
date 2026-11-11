// FCDEntityInstance.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_01874410(undefined4, undefined4, undefined4);
    int sub_0184ad30(int, int, int);
};

extern undefined4 g_023ed148;
extern undefined4 g_023ed158;
// @baa 0x01874410
undefined4 * C::sub_01874410(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_0184ad30(param_2, param_3, param_4);
  *param_1 = (undefined4)((&g_023ed158));
  param_1[9] = (undefined4)((&g_023ed148));
  return param_1;
}
