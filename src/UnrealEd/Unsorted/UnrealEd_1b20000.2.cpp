// UnrealEd_1b20000.cpp (part 2 of 2): 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01b22d50();
};

// @baa 0x01b22d50
S *S::sub_01b22d50()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C {
    undefined4 sub_01b22d60();
};

// @baa 0x01b22d60
undefined4 C::sub_01b22d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct S_01b22e10 {
    INT Unk00;
    INT Unk04;
    S_01b22e10 *sub_01b22e10();
};

// @baa 0x01b22e10
S_01b22e10 *S_01b22e10::sub_01b22e10()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01b22e20 {
    undefined4 sub_01b22e20();
};

// @baa 0x01b22e20
undefined4 C_01b22e20::sub_01b22e20(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_01b26c10();
};

// @baa 0x01b26c10
S16* S16::sub_01b26c10()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct S16_01b26d10 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16_01b26d10* sub_01b26d10();
};

// @baa 0x01b26d10
S16_01b26d10* S16_01b26d10::sub_01b26d10()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

// @baa 0x01b28c60
float10 sub_01b28c60(float * param_1, float * param_2)
{
  if (*param_1 < *param_2) {
    return (float10)*param_2;
  }
  return (float10)*param_1;
}

struct C_01b290a0 {
    void sub_01b290a0(int, int);
    int sub_01b28b60();
    int sub_01b28bb0(int, int);
};

// @baa 0x01b290a0
void C_01b290a0::sub_01b290a0(int param_2, int param_3)
{
    int param_1 = (int)this;
  if ((param_3 != *(int *)(param_1 + 4)) || (param_2 != *(int *)(param_1 + 8))) {
    ((C_01b290a0 *)(this))->sub_01b28b60();
    ((C_01b290a0 *)(this))->sub_01b28bb0(param_3, param_2);
  }
  return;
}

struct C_01b2f250 { int a, b, c; C_01b2f250(); };

// @baa 0x01b2f250
C_01b2f250::C_01b2f250() : a(0), b(0), c(0) {}

struct C_01b2f3d0 { void sub_01b2f310(int); void sub_01b2f3d0(); };

// @baa 0x01b2f3d0
void C_01b2f3d0::sub_01b2f3d0() { sub_01b2f310(0); }

struct C_01b2f3e0 {
    void sub_01b2f3e0();
    int sub_01b2f310(int);
};

extern "C" __declspec(dllimport) void __cdecl free(void *);
// @baa 0x01b2f3e0
void C_01b2f3e0::sub_01b2f3e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01b2f3e0 *)(this))->sub_01b2f310(0);
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_01b28b30
{
    INT Value_00;
    INT Value_04;
    INT Value_08;

    C_01b28b30* sub_01b28b30();
};

// @baa 0x01b28b30
C_01b28b30* C_01b28b30::sub_01b28b30()
{
    Value_04 = 0;
    Value_08 = 0;
    Value_00 = 0;
    return this;
}

struct C_01b2d3d0
{
    char pad_0[0xc];
    INT Value_c;
    INT Value_10;
    INT Value_14;

    C_01b2d3d0* sub_01b2d3d0();
};

// @baa 0x01b2d3d0
C_01b2d3d0* C_01b2d3d0::sub_01b2d3d0()
{
    Value_c = 0;
    Value_10 = 0;
    Value_14 = 0;
    return this;
}
