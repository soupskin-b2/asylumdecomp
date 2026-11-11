// fmod_systemi.cpp (part 6 of 7): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_0176d2b1();
    int sub_0176c32a();
    int sub_01779bd0();
};

extern undefined4 g_023db27c;
extern undefined4 g_023db308;
// @baa 0x0176d2b1
undefined4 * C::sub_0176d2b1(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_0176c32a();
  *param_1 = (undefined4)((&g_023db308));
  ((C *)(((char *)this + 0x68)))->sub_01779bd0();
  param_1[0x1a] = (undefined4)((&g_023db27c));
  return param_1;
}

struct C_01770b07 { void sub_017706b4(int); void sub_01770b07(); };

// @baa 0x01770b07
void C_01770b07::sub_01770b07() { sub_017706b4(0); }
