// fmod_output_openal.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_017c8107();
};

int sub_0179bd58(void);
extern undefined4 g_023df094;
// @baa 0x017c8107
undefined4 * C::sub_017c8107(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_0179bd58();
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *param_1 = (undefined4)((&g_023df094));
  return param_1;
}
