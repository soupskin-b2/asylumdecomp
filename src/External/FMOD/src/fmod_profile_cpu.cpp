// fmod_profile_cpu.cpp: 2 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_017a107e();
};

int sub_017a0183(void);
extern undefined4 g_023dd880;
// @baa 0x017a107e
undefined4 * C::sub_017a107e(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_017a0183();
  *param_1 = (undefined4)((&g_023dd880));
  return param_1;
}

// @baa 0x017a1090
int sub_017a1090(void) { return 0; }
