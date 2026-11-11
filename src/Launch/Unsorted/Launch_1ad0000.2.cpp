// Launch_1ad0000.cpp (part 2 of 4): 31 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01ad0e00(byte);
};

int sub_01ab3290(...);
int sub_01acfe40(void);
// @baa 0x01ad0e00
undefined4 C::sub_01ad0e00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  sub_01acfe40();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

// @baa 0x01ad0e20
void sub_01ad0e20(undefined4 * param_1)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    sub_01ab3290(*puVar1,puVar1[1] * 4);
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  sub_01ab3290(*param_1,0xc);
  *param_1 = 0;
  return;
}

struct C_01ad1620 {
    void sub_01ad1620(float f);
};

// @baa 0x01ad1620
void C_01ad1620::sub_01ad1620(float f)
{
    *reinterpret_cast<float *>(this) = f;
}

struct C_01ad1630 {
    DWORD _0x00;
    FLOAT _0x04;
    void sub_01ad1630(FLOAT f);
};

// @baa 0x01ad1630
void C_01ad1630::sub_01ad1630(FLOAT f)
{
    _0x04 = f;
}

struct C_01ad1640 {
    char _pad[8];
    float f_08;
    void sub_01ad1640(float v);
};

// @baa 0x01ad1640
void C_01ad1640::sub_01ad1640(float v)
{
    f_08 = v;
}

struct C_01ad1650 {
    char pad[0x0C];
    float f_0x0C;
    void sub_01ad1650(float value);
};

// @baa 0x01ad1650
void C_01ad1650::sub_01ad1650(float value)
{
    f_0x0C = value;
}

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ad1f50(volatile FFaceData *Other);
};

// @baa 0x01ad1f50
void FFaceData::sub_01ad1f50(volatile FFaceData *Other)
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

struct FFaceData_01ad2080 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ad2080(volatile FFaceData_01ad2080 *Other);
};

// @baa 0x01ad2080
void FFaceData_01ad2080::sub_01ad2080(volatile FFaceData_01ad2080 *Other)
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

struct C_01ad20b0 {
    void sub_01ad20b0(undefined4);
    int sub_01ad2000(int);
};

// @baa 0x01ad20b0
void C_01ad20b0::sub_01ad20b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_01ad20b0 *)(((char *)this + 0xc)))->sub_01ad2000(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}

struct C_01ad2880 {
    void sub_01ad2880(undefined4, undefined4);
    int sub_01ad2000(int);
    int sub_01ad24c0(int, int);
};

// @baa 0x01ad2880
void C_01ad2880::sub_01ad2880(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01ad2880 *)(((char *)this + 0xc)))->sub_01ad2000(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  ((C_01ad2880 *)(this))->sub_01ad24c0(param_3, 0);
  return;
}

extern int g_027ca554;
int sub_01ad2b30();
// @baa 0x01ad2bc0
int sub_01ad2bc0() { if (!g_027ca554) g_027ca554 = sub_01ad2b30(); return g_027ca554; }

// @baa 0x01ad2fd0
void sub_01ad2fd0(void)
{
  return;
}

// @baa 0x01ad3090
undefined4 sub_01ad3090(void)
{
  return 0x800;
}

struct FFaceData_01ad34d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ad34d0(volatile FFaceData_01ad34d0 *Other);
};

// @baa 0x01ad34d0
void FFaceData_01ad34d0::sub_01ad34d0(volatile FFaceData_01ad34d0 *Other)
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

struct FFaceData_01ad3500 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ad3500(volatile FFaceData_01ad3500 *Other);
};

// @baa 0x01ad3500
void FFaceData_01ad3500::sub_01ad3500(volatile FFaceData_01ad3500 *Other)
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

struct FFaceData_01ad3530 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ad3530(volatile FFaceData_01ad3530 *Other);
};

// @baa 0x01ad3530
void FFaceData_01ad3530::sub_01ad3530(volatile FFaceData_01ad3530 *Other)
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

struct FFaceData_01ad3560 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ad3560(volatile FFaceData_01ad3560 *Other);
};

// @baa 0x01ad3560
void FFaceData_01ad3560::sub_01ad3560(volatile FFaceData_01ad3560 *Other)
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

struct FFaceData_01ad36d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ad36d0(volatile FFaceData_01ad36d0 *Other);
};

// @baa 0x01ad36d0
void FFaceData_01ad36d0::sub_01ad36d0(volatile FFaceData_01ad36d0 *Other)
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

struct FFaceData_01ad3700 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ad3700(volatile FFaceData_01ad3700 *Other);
};

// @baa 0x01ad3700
void FFaceData_01ad3700::sub_01ad3700(volatile FFaceData_01ad3700 *Other)
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

struct C_01ad4710 {
    int sub_01ad4710(undefined4, undefined4 *);
    int sub_00414220(int);
};

// @baa 0x01ad4710
int C_01ad4710::sub_01ad4710(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;
  ((C_01ad4710 *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  return param_1;
}

struct C_01ad4730 { int a, b, c; C_01ad4730(); };

// @baa 0x01ad4730
C_01ad4730::C_01ad4730() : a(0), b(0), c(0) {}

struct C_01ad4780 {
    int sub_01ad4780(int);
    int sub_00414220(int);
};

// @baa 0x01ad4780
int C_01ad4780::sub_01ad4780(int param_2)
{
    int param_1 = (int)this;
  ((C_01ad4780 *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

struct C_01ad4920 {
    undefined4 * sub_01ad4920(undefined4 *);
    int sub_0043d3d0(int);
};

// @baa 0x01ad4920
undefined4 * C_01ad4920::sub_01ad4920(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_01ad4920 *)(((char *)this + 8)))->sub_0043d3d0((int)(param_2 + 2));
  return param_1;
}

struct C_01ad5360 {
    void sub_01ad5360();
};

// @baa 0x01ad5360
void C_01ad5360::sub_01ad5360(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct S_01ad5fe0 { void sub_01ad5860(); };

// @baa 0x01ad5fe0
void sub_01ad5fe0(S_01ad5fe0 *p) { if (p) p->sub_01ad5860(); }

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01ad6af0();
};

// @baa 0x01ad6af0
S *S::sub_01ad6af0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01ad6b00 {
    int m_0;
    bool sub_01ad6b00();
};

// @baa 0x01ad6b00
bool C_01ad6b00::sub_01ad6b00(void)
{
    bool b;
    b = m_0 != 0;
    return b;
}

struct C_01ad6c70 {
    undefined4 * sub_01ad6c70(undefined4, undefined4);
    int sub_01ad6b10(int, int);
};

// @baa 0x01ad6c70
undefined4 * C_01ad6c70::sub_01ad6c70(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  ((C_01ad6c70 *)(this))->sub_01ad6b10(param_2, param_3);
  return param_1;
}

extern undefined4 g_0240dc48;
// @baa 0x01ad6e30
undefined4 sub_01ad6e30(int param_1)
{
  return (&g_0240dc48)[param_1];
}

// @baa 0x01ad6e40
undefined4 sub_01ad6e40(int param_1)
{
  return (&g_0240dc48)[param_1];
}

struct C_01ad6e90 {
    undefined4 * sub_01ad6e90(undefined4, undefined4 *, undefined4 *, undefined4 *);
    int sub_01ab66c0(int);
};

extern undefined4 g_0240d21c;
// @baa 0x01ad6e90
undefined4 * C_01ad6e90::sub_01ad6e90(undefined4 param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01ad6e90 *)(this))->sub_01ab66c0(param_2);
  *param_1 = (undefined4)((&g_0240d21c));
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = param_3[2];
  param_1[5] = *param_4;
  param_1[6] = param_4[1];
  param_1[7] = param_4[2];
  param_1[8] = param_4[3];
  param_1[9] = *param_5;
  param_1[10] = param_5[1];
  param_1[0xb] = param_5[2];
  return param_1;
}
