// fmod_pluginfactory.cpp (part 3 of 3): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_01797033();
    int sub_01796fef();
    int sub_0177e372();
};

extern undefined4 g_023dd2d8;
extern undefined4 g_023dd2e4;
// @baa 0x01797033
undefined4 * C::sub_01797033(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_01796fef();
  ((C *)(((char *)this + 0xfc)))->sub_0177e372();
  param_1[0x8a] = 0;
  param_1[0x3f] = (undefined4)((&g_023dd2e4));
  *param_1 = (undefined4)((&g_023dd2d8));
  return param_1;
}
