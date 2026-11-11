// UnSkeletalRenderGPUSkin.cpp (part 2 of 2): 7 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_026b1090[];
// @baa 0x00967880
int sub_00967880(void) { return (int)g_026b1090; }

struct C {
    undefined4 sub_00967890(byte);
};

int sub_0053dfa0(...);
int sub_007c2810(void);
// @baa 0x00967890
undefined4 C::sub_00967890(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c2810();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_026b1060[];
// @baa 0x00967990
int sub_00967990(void) { return (int)g_026b1060; }

struct C_009679a0 {
    int sub_009679a0();
};

// @baa 0x009679a0
int C_009679a0::sub_009679a0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x240;
}

struct A_009679c0 { virtual void sub_00967a00(); char pad[572]; };

struct B_009679c0 { virtual void sub_00967a00(); };

struct C_009679c0 : A_009679c0, B_009679c0 { virtual void sub_00967a00(); C_009679c0(); };

C_009679c0::C_009679c0() {}

// @baa 0x009679c0
void C_009679c0::sub_00967a00() {}

struct C_00968a30 {
    undefined4 sub_00968a30(byte);
};

int sub_00961930(void);
// @baa 0x00968a30
undefined4 C_00968a30::sub_00968a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00961930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009679b0
{
    C_009679b0* sub_009679b0();
};

// @baa 0x009679b0
C_009679b0* C_009679b0::sub_009679b0()
{
    return (C_009679b0*)((char*)this - 0x240) == 0 ? 0 : this;
}
