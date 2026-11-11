// fmod_eventimpl_complex.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_017d7170();
    int sub_017d6bb0(int);
};

extern undefined4 g_023df834;
// @baa 0x017d7170
undefined4 * C::sub_017d7170(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023df834));
  ((C *)(this))->sub_017d6bb0(0);
  return param_1;
}
