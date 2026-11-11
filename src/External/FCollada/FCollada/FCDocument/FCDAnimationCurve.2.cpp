// FCDAnimationCurve.cpp (part 2 of 3): 5 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    bool sub_0182f760();
};

// @baa 0x0182f760
bool C::sub_0182f760(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x54) != 0;
}

struct C_0182f770 {
    void sub_0182f770(undefined4 *, undefined4 *);
};

// @baa 0x0182f770
void C_0182f770::sub_0182f770(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x54);
  *param_3 = *(undefined4 *)(param_1 + 0x58);
  return;
}

void sub_0182f770();
// @baa 0x0182f8d0
void sub_0182f8d0(void) { sub_0182f770(); }

struct C_018313e0 {
    void sub_018313e0();
};

void sub_01826080(void *);
// @baa 0x018313e0
void C_018313e0::sub_018313e0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

extern char g_027b7d90[];
// @baa 0x01831450
int sub_01831450(void) { return (int)g_027b7d90; }
