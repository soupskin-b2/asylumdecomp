// OnlineSubsystemSteamworks_0620000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00629880(undefined4 *);
};

// @baa 0x00629880
void C::sub_00629880(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x60);
  param_2[1] = *(undefined4 *)(param_1 + 100);
  param_2[2] = *(undefined4 *)(param_1 + 0x68);
  param_2[3] = *(undefined4 *)(param_1 + 0x6c);
  param_2[4] = *(undefined4 *)(param_1 + 0x70);
  return;
}

extern undefined4 g_025d572c;
// @baa 0x00629b50
undefined4 sub_00629b50(void)
{
  return g_025d572c;
}
