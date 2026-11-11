// fmod_async.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017a0623();
};

// @baa 0x017a0623
undefined4 C::sub_017a0623(void)
{
    int param_1 = (int)this;

  if (*(char *)(param_1 + 0x148) != '\0') {
    *(undefined1 *)(param_1 + 0x14a) = 1;
  }
  return 0;
}
