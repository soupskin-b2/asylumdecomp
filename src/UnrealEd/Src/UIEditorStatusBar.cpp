// UIEditorStatusBar.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_014069a0(int, int, float *, float *);
};

// @baa 0x014069a0
void C::sub_014069a0(int param_2, int param_3, float * param_4, float * param_5)
{
    int param_1 = (int)this;
  *param_4 = ((float)param_2 - *(float *)(param_1 + 0x374)) / *(float *)(param_1 + 0x380);
  *param_5 = ((float)param_3 - *(float *)(param_1 + 0x378)) / *(float *)(param_1 + 0x380);
  return;
}
