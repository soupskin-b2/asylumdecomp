// fmod_eventreverb.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023e02e4[];
struct C { C* sub_017ede30(void); };

// @baa 0x017ede30
C* C::sub_017ede30(void) { *(int*)((char*)this + 0) = (int)g_023e02e4; return this; }

struct C_017ede40 {
    undefined4 sub_017ede40(undefined4);
};

// @baa 0x017ede40
undefined4 C_017ede40::sub_017ede40(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x9c) = param_2;
  return 0;
}
