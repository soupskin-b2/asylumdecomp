// UnLevTic.cpp: 2 functions
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00a497e0();
    int sub_00a491d0(int);
};

int sub_00a3b8e0(...);
extern undefined4 g_026b62b8;
// @baa 0x00a497e0
void C::sub_00a497e0(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x15c) != 0) {
    sub_00a3b8e0(*(int *)(param_1 + 0x15c));
    if (*(int *)(*(int *)(param_1 + 0x15c) + 0x78) == 0) {
      ((C *)((*(char **)((char *)this + 0x15c))))->sub_00a491d0(*(undefined4 *)(g_026b62b8 + 0x148));
    }
  }
  return;
}

void sub_0080b170();
struct C_0080b400
{
    C_0080b400* sub_0080b400(INT Unused);
};

// @baa 0x0080b400
C_0080b400* C_0080b400::sub_0080b400(INT)
{
    sub_0080b170();
    return this;
}
