// fmod_output_software.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_017aa140();
};

int sub_0179bd58(void);
extern undefined4 g_023ddbac;
// @baa 0x017aa140
undefined4 * C::sub_017aa140(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_0179bd58();
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x55] = 0;
  *param_1 = (undefined4)((&g_023ddbac));
  return param_1;
}
