// fmod_compositioncore.cpp (part 1 of 2): 18 functions
// Placed here by: neighbours 16, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x017e7290
int __stdcall sub_017e7290(int a0) { return 0; }

// @baa 0x017e72a0
int __stdcall sub_017e72a0(int a0) { return 0; }

struct C {
    void sub_017e72b0(undefined4, undefined4);
};

// @baa 0x017e72b0
void C::sub_017e72b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x14) = param_3;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

struct C_017e72d0 {
    void sub_017e72d0();
};

// @baa 0x017e72d0
void C_017e72d0::sub_017e72d0(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  return;
}

struct C_017e7540 {
    void sub_017e7540(undefined4);
};

// @baa 0x017e7540
void C_017e7540::sub_017e7540(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}

struct C_017e7b40 {
    undefined4 sub_017e7b40(undefined4 *, undefined1 *);
};

// @baa 0x017e7b40
undefined4 C_017e7b40::sub_017e7b40(undefined4 * param_2, undefined1 * param_3)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x30);
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = *(undefined1 *)(param_1 + 0x34);
  }
  return 0;
}

struct C_017e7b60 {
    undefined4 sub_017e7b60(undefined4);
};

// @baa 0x017e7b60
undefined4 C_017e7b60::sub_017e7b60(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = param_2;
  return 0;
}

// @baa 0x017e7e90
int sub_017e7e90(void) { return 0; }

// @baa 0x017e7ea0
int sub_017e7ea0(void) { return 0; }

// @baa 0x017e8000
int __stdcall sub_017e8000(int a0) { return 0; }

// @baa 0x017e8020
int __stdcall sub_017e8020(int a0) { return 0; }

// @baa 0x017e8040
int __stdcall sub_017e8040(int a0) { return 0; }

// @baa 0x017e8060
int __stdcall sub_017e8060(int a0) { return 0; }

// @baa 0x017e8080
int __stdcall sub_017e8080(int a0) { return 0; }

// @baa 0x017e80b0
int __stdcall sub_017e80b0(int a0) { return 0; }

// @baa 0x017e80d0
int __stdcall sub_017e80d0(int a0) { return 0; }

extern undefined4 g_027b7d0c;
// @baa 0x017e80e0
void sub_017e80e0(undefined4 param_1)
{
  g_027b7d0c = param_1;
  return;
}

// @baa 0x017e80f0
undefined4 sub_017e80f0(void)
{
  return g_027b7d0c;
}
