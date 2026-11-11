// fmod_soundbank.cpp: 2 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017e16c0(byte *);
};

// @baa 0x017e16c0
undefined4 C::sub_017e16c0(byte * param_2)
{
    int param_1 = (int)this;

  if (param_2 != (byte *)0x0) {
    *param_2 = (byte)(*(uint *)(param_1 + 0x24) >> 0xd) & 1;
  }
  return 0;
}

struct C_017e1e30 {
    bool sub_017e1e30();
};

// @baa 0x017e1e30
bool C_017e1e30::sub_017e1e30(void)
{
    int param_1 = (int)this;

  return (*(uint *)(param_1 + 0x14) & 0x300) != 0;
}
