// fmod_profile_codec.cpp: 2 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_017a143a();
};

int sub_017a0183(void);
extern undefined4 g_023dd8e4;
// @baa 0x017a143a
undefined4 * C::sub_017a143a(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_017a0183();
  *param_1 = (undefined4)((&g_023dd8e4));
  return param_1;
}

// @baa 0x017a144c
int sub_017a144c(void) { return 0; }
