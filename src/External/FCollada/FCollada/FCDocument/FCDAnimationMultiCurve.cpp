// FCDAnimationMultiCurve.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01885500();
};

int sub_00402680(...);
extern undefined4 g_023eec48;
// @baa 0x01885500
void C::sub_01885500(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023eec48));
  if (param_1[4] != 0) {
    sub_00402680(param_1[4]);
    param_1[4] = 0;
  }
  return;
}
