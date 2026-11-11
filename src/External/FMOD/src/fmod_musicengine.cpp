// fmod_musicengine.cpp (part 1 of 2): 14 functions
// Placed here by: neighbours 11, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x017f6830
int sub_017f6830(void) { return 0; }

struct C {
    undefined4 sub_017f69f0(undefined4);
};

// @baa 0x017f69f0
undefined4 C::sub_017f69f0(undefined4 param_2)
{
    int param_1 = (int)this;

  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + *(uint *)(param_1 + 0xc) * 8) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc) * 8) =
         *(undefined4 *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return *(undefined4 *)(*(int *)(param_1 + 0x14) + -8 + *(int *)(param_1 + 0xc) * 8);
  }
  return 0;
}

struct C_017f6a80 { void sub_017f6a80(void); };

// @baa 0x017f6a80
void C_017f6a80::sub_017f6a80(void) { *(int*)((char*)this + 12) = 0; }

extern char g_023e0838[];
struct C_017f6b00 { void sub_017f6b00(void); };

// @baa 0x017f6b00
void C_017f6b00::sub_017f6b00(void) { *(int*)((char*)this + 0) = (int)g_023e0838; }

// @baa 0x017f6c10
int sub_017f6c10(void) { return 1; }

struct C_017f6cb0 {
    undefined4 sub_017f6cb0(undefined4, undefined4 *);
};

// @baa 0x017f6cb0
undefined4 C_017f6cb0::sub_017f6cb0(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_2;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return 0;
}

struct C_017f6cd0 {
    undefined4 sub_017f6cd0(int);
};

// @baa 0x017f6cd0
undefined4 C_017f6cd0::sub_017f6cd0(int param_2)
{
    int param_1 = (int)this;

  if (param_2 == *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}

struct C_017f6d10 { int sub_017f6d10(void); };

// @baa 0x017f6d10
int C_017f6d10::sub_017f6d10(void) { return *(int*)((char*)this + 8); }

// @baa 0x017f6d40
int __stdcall sub_017f6d40(int a0) { return 0; }

// @baa 0x017f6d80
void sub_017f6d80(void) {  }

struct C_017f7450 {
    undefined4 sub_017f7450(undefined1 *);
};

// @baa 0x017f7450
undefined4 C_017f7450::sub_017f7450(undefined1 * param_2)
{
    int param_1 = (int)this;

  if (param_2 == (undefined1 *)0x0) {
    return 0x25;
  }
  *param_2 = *(undefined1 *)(param_1 + 0x1c);
  return 0;
}

struct C_017f7510 {
    undefined4 sub_017f7510(undefined4, undefined4);
};

// @baa 0x017f7510
undefined4 C_017f7510::sub_017f7510(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  return 0;
}

struct C_017fabd0 {
    undefined4 sub_017fabd0(undefined4, undefined4);
};

// @baa 0x017fabd0
undefined4 C_017fabd0::sub_017fabd0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x9c) = param_2;
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  return 0;
}

struct C_017fac20 {
    undefined4 sub_017fac20();
};

// @baa 0x017fac20
undefined4 C_017fac20::sub_017fac20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  return 0;
}
