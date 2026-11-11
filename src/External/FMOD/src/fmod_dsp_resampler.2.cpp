// fmod_dsp_resampler.cpp (part 2 of 2): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0177942b(undefined4 *);
};

// @baa 0x0177942b
undefined4 C::sub_0177942b(undefined4 * param_2)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 200);
  }
  return 0;
}

struct C_0177950d {
    undefined4 sub_0177950d(undefined4);
};

// @baa 0x0177950d
undefined4 C_0177950d::sub_0177950d(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xb4) = param_2;
  return 0;
}

struct C_01779536 {
    undefined4 sub_01779536(undefined4);
};

// @baa 0x01779536
undefined4 C_01779536::sub_01779536(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x50) = param_2;
  return 0;
}

// @baa 0x017a613d
int __stdcall sub_017a613d(int a0) { return 0; }
