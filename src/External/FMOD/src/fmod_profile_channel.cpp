// fmod_profile_channel.cpp: 2 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_017a11e7();
};

int sub_017a0183(void);
extern undefined4 g_023dd8b0;
// @baa 0x017a11e7
undefined4 * C::sub_017a11e7(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_017a0183();
  *param_1 = (undefined4)((&g_023dd8b0));
  return param_1;
}

// @baa 0x017a11f9
int sub_017a11f9(void) { return 0; }
