// Launch_1ab0000.cpp (part 3 of 4): 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_01ab3c50 { int a; C_01ab3c50(int); };

// @baa 0x01ab3c50
C_01ab3c50::C_01ab3c50(int x) : a(x) {}

struct C {
    C *sub_01ab3c60();
};

// @baa 0x01ab3c60
C *C::sub_01ab3c60()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01ab3dc0();
};

// @baa 0x01ab3dc0
S *S::sub_01ab3dc0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

// @baa 0x01ab3dd0
void sub_01ab3dd0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct C_01ab3e50 {
    int pad;
    int a;
    int b;
    C_01ab3e50 *sub_01ab3e50();
};

// @baa 0x01ab3e50
C_01ab3e50 *C_01ab3e50::sub_01ab3e50()
{
    a = 0;
    b = 0;
    return this;
}

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab4020(volatile FFaceData *Other);
};

// @baa 0x01ab4020
void FFaceData::sub_01ab4020(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_01ab4050 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab4050(volatile FFaceData_01ab4050 *Other);
};

// @baa 0x01ab4050
void FFaceData_01ab4050::sub_01ab4050(volatile FFaceData_01ab4050 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct C_01ab4380 {
    int sub_01ab4380(undefined4, undefined4 *);
    int sub_00414220(int);
};

// @baa 0x01ab4380
int C_01ab4380::sub_01ab4380(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;
  ((C_01ab4380 *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  return param_1;
}

struct C_01ab44d0 {
    int sub_01ab44d0(int);
    int sub_00414220(int);
};

// @baa 0x01ab44d0
int C_01ab44d0::sub_01ab44d0(int param_2)
{
    int param_1 = (int)this;
  ((C_01ab44d0 *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

struct C_01ab5740 {
    undefined4 * sub_01ab5740(undefined4);
};

int __stdcall sub_01ab5210(int);
// @baa 0x01ab5740
undefined4 * C_01ab5740::sub_01ab5740(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  sub_01ab5210(param_2);
  return param_1;
}

extern int g_027ca4d0;
int sub_01ab5d40();
// @baa 0x01ab5df0
int sub_01ab5df0() { if (!g_027ca4d0) g_027ca4d0 = sub_01ab5d40(); return g_027ca4d0; }

// @baa 0x01ab5f30
void sub_01ab5f30(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

struct C_01ab5f70 {
    undefined4 sub_01ab5f70(byte);
};

int sub_01ab3290(...);
int sub_01ab58f0(void);
// @baa 0x01ab5f70
undefined4 C_01ab5f70::sub_01ab5f70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  sub_01ab58f0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x18);
  }
  return param_1;
}

// @baa 0x01ab5f90
void sub_01ab5f90(void)
{
  return;
}

struct FFaceData_01ab6050 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab6050(volatile FFaceData_01ab6050 *Other);
};

// @baa 0x01ab6050
void FFaceData_01ab6050::sub_01ab6050(volatile FFaceData_01ab6050 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_01ab6080 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab6080(volatile FFaceData_01ab6080 *Other);
};

// @baa 0x01ab6080
void FFaceData_01ab6080::sub_01ab6080(volatile FFaceData_01ab6080 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_01ab60b0 { void sub_01ab58f0(); };

// @baa 0x01ab60b0
void sub_01ab60b0(S_01ab60b0 *p) { if (p) p->sub_01ab58f0(); }

struct M_01ab67a0 { void sub_01ab5820(); };

struct C_01ab67a0 { char pad[4]; M_01ab67a0 m; void sub_01ab67a0(); };

// @baa 0x01ab67a0
void C_01ab67a0::sub_01ab67a0() { m.sub_01ab5820(); }

struct M_01ab67b0 { void sub_01ab4ee0(); };

struct C_01ab67b0 { char pad[4]; M_01ab67b0 m; void sub_01ab67b0(); };

// @baa 0x01ab67b0
void C_01ab67b0::sub_01ab67b0() { m.sub_01ab4ee0(); }

extern int g_027ca4d8;
int sub_01ab6860();
// @baa 0x01ab6910
int sub_01ab6910() { if (!g_027ca4d8) g_027ca4d8 = sub_01ab6860(); return g_027ca4d8; }

struct C_01ab6a30 {
    void sub_01ab6a30(float);
};

// @baa 0x01ab6a30
void C_01ab6a30::sub_01ab6a30(float f) {
    *(float *)(this + 0x10) = f;
}

struct C_01ab6a40 {
    void sub_01ab6a40(float);
};

// @baa 0x01ab6a40
void C_01ab6a40::sub_01ab6a40(float f)
{
    *(float *)(this + 0x14) = f;
}

struct FFaceData_01ab6ec0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab6ec0(volatile FFaceData_01ab6ec0 *Other);
};

// @baa 0x01ab6ec0
void FFaceData_01ab6ec0::sub_01ab6ec0(volatile FFaceData_01ab6ec0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_01ab6ef0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab6ef0(volatile FFaceData_01ab6ef0 *Other);
};

// @baa 0x01ab6ef0
void FFaceData_01ab6ef0::sub_01ab6ef0(volatile FFaceData_01ab6ef0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct M_01ab7090 { void sub_01ab6e00(); };

struct C_01ab7090 { char pad[28]; M_01ab7090 m; void sub_01ab7090(); };

// @baa 0x01ab7090
void C_01ab7090::sub_01ab7090() { m.sub_01ab6e00(); }

extern int g_027ca4dc;
int sub_01ab69a0();
// @baa 0x01ab76d0
int sub_01ab76d0() { if (!g_027ca4dc) g_027ca4dc = sub_01ab69a0(); return g_027ca4dc; }
