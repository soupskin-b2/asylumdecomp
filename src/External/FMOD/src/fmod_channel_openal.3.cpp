// fmod_channel_openal.cpp (part 3 of 3): 3 functions
// Placed here by: neighbours 2, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_017ab867();
};

int sub_017c4988(void);
extern undefined4 g_023ddcac;
// @baa 0x017ab867
undefined4 * C::sub_017ab867(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_017c4988();
  *param_1 = (undefined4)((&g_023ddcac));
  return param_1;
}

// @baa 0x017c3c1c
int __stdcall sub_017c3c1c(int a0, int a1, int a2) { return 0; }

// @baa 0x017c46b7
int sub_017c46b7(void) { return 0; }
