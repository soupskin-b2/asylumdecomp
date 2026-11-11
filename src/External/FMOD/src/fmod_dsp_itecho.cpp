// fmod_dsp_itecho.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef uint size_t;

struct C {
    undefined4 sub_01784bf8();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01784bf8
undefined4 C::sub_01784bf8(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(void **)(param_1 + 0x13c) != (void *)0x0) {
    sub_01a37612(*(void **)(param_1 + 0x13c),0,*(size_t *)(param_1 + 0x144));
  }
  if (*(void **)(param_1 + 0x140) != (void *)0x0) {
    sub_01a37612(*(void **)(param_1 + 0x140),0,*(size_t *)(param_1 + 0x148));
  }
  return 0;
}
