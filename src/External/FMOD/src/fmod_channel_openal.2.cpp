// fmod_channel_openal.cpp (part 2 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_017ab860();
};

extern undefined4 g_023dd674;
// @baa 0x017ab860
void C::sub_017ab860(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  return;
}
