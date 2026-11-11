// FaceFX_0480000.cpp (part 1 of 2): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_004803d0();
};

int sub_0047d9e0(...);
int sub_01ab3290(...);
// @baa 0x004803d0
void C::sub_004803d0(void)
{
    int * param_1 = (int *)this;

  sub_0047d9e0(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00480410 {
    void sub_00480410();
};

// @baa 0x00480410
void C_00480410::sub_00480410(void)
{
    int * param_1 = (int *)this;

  sub_0047d9e0(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern int g_027d344c;
int sub_01b92c90();
// @baa 0x004820d0
int sub_004820d0() { if (!g_027d344c) g_027d344c = sub_01b92c90(); return g_027d344c; }

struct C_004824a0 {
    undefined4 sub_004824a0(byte);
};

int sub_00482110(void);
// @baa 0x004824a0
undefined4 C_004824a0::sub_004824a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00482110();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0xdc);
  }
  return param_1;
}

void sub_00481ce0();
// @baa 0x004824d0
void sub_004824d0(void) { sub_00481ce0(); }

struct C_00483450 {
    int * sub_00483450(byte);
};

int sub_0053dfa0(...);
// @baa 0x00483450
int * C_00483450::sub_00483450(byte param_2)
{
    int * param_1 = (int *)this;

  sub_0047d9e0(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_004834a0 { int a, b, c; C_004834a0(); };

// @baa 0x004834a0
C_004834a0::C_004834a0() : a(0), b(0), c(0) {}
