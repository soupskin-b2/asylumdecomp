// fmod_dsp_echo.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef uint size_t;

struct C {
    undefined4 sub_0178a03d();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0178a03d
undefined4 C::sub_0178a03d(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x15c) = 0;
  if (*(void **)(param_1 + 0x150) != (void *)0x0) {
    sub_01a37612(*(void **)(param_1 + 0x150),0,*(size_t *)(param_1 + 0x158));
  }
  return 0;
}
