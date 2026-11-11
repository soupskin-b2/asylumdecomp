// LaunchEngineLoop.cpp (part 4 of 4): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01af0030();
    int sub_01aef150(int);
};

extern "C" __declspec(dllimport) void __cdecl free(void *);
// @baa 0x01af0030
void C::sub_01af0030(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_01aef150(0);
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_01af0070 {
    undefined4 sub_01af0070(undefined4 *);
    int sub_01aef300(int, int);
};

// @baa 0x01af0070
undefined4 C_01af0070::sub_01af0070(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01af0070 *)(this))->sub_01aef300(*param_2, param_2[1]);
  return param_1;
}

struct C_01af0150 { void sub_01af0090(int); void sub_01af0150(); };

// @baa 0x01af0150
void C_01af0150::sub_01af0150() { sub_01af0090(0); }
