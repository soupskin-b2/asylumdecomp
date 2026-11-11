// fmod_eventi.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017cec50();
};

// @baa 0x017cec50
undefined4 C::sub_017cec50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xb4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x20);
  }
  return 0;
}
