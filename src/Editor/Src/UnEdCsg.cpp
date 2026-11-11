// UnEdCsg.cpp: 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00eecc80
undefined4 sub_00eecc80(int param_1, uint param_2)
{
  if ((*(byte *)(param_1 + 0x1a8) == param_2) && ((*(byte *)(param_1 + 0x1b0) & 0x28) == 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x00eeccb0
uint sub_00eeccb0(int param_1, uint param_2)
{
  return *(uint *)(param_1 + 0x1b0) & param_2;
}
