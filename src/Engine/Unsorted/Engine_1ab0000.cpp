// Engine_1ab0000.cpp (part 1 of 5): 32 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int * sub_01ab0050(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01ab0050
int * C::sub_01ab0050(int * param_2)
{
    int * param_1 = (int *)this;
  *param_1 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  if (*param_2 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_2;
  return param_1;
}

struct C_01ab0af0 { void sub_01ab0920(int); C_01ab0af0 *sub_01ab0af0(int); };

// @baa 0x01ab0af0
C_01ab0af0 *C_01ab0af0::sub_01ab0af0(int a) { sub_01ab0920(a); return this; }

struct C_01ab0ce0 {
    undefined4 sub_01ab0ce0(undefined4, undefined4);
    int sub_01ab0b80(int, int);
};

// @baa 0x01ab0ce0
undefined4 C_01ab0ce0::sub_01ab0ce0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01ab0ce0 *)(this))->sub_01ab0b80(param_2, param_3);
  return param_1;
}

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab7aa0(volatile FFaceData *Other);
};

// @baa 0x01ab7aa0
void FFaceData::sub_01ab7aa0(volatile FFaceData *Other)
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

struct M_01ab7b50 { void sub_01ab79e0(); };

struct C_01ab7b50 { char pad[68]; M_01ab7b50 m; void sub_01ab7b50(); };

// @baa 0x01ab7b50
void C_01ab7b50::sub_01ab7b50() { m.sub_01ab79e0(); }

extern int g_027ca4e0;
int sub_01ab8200();
// @baa 0x01ab8290
int sub_01ab8290() { if (!g_027ca4e0) g_027ca4e0 = sub_01ab8200(); return g_027ca4e0; }

struct C_01ab8bb0 {
    undefined4 sub_01ab8bb0();
};

// @baa 0x01ab8bb0
undefined4 C_01ab8bb0::sub_01ab8bb0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}

struct FFaceData_01ab9440 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab9440(volatile FFaceData_01ab9440 *Other);
};

// @baa 0x01ab9440
void FFaceData_01ab9440::sub_01ab9440(volatile FFaceData_01ab9440 *Other)
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

struct FFaceData_01ab9470 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab9470(volatile FFaceData_01ab9470 *Other);
};

// @baa 0x01ab9470
void FFaceData_01ab9470::sub_01ab9470(volatile FFaceData_01ab9470 *Other)
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

struct FFaceData_01ab94a0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab94a0(volatile FFaceData_01ab94a0 *Other);
};

// @baa 0x01ab94a0
void FFaceData_01ab94a0::sub_01ab94a0(volatile FFaceData_01ab94a0 *Other)
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

struct FFaceData_01ab94d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab94d0(volatile FFaceData_01ab94d0 *Other);
};

// @baa 0x01ab94d0
void FFaceData_01ab94d0::sub_01ab94d0(volatile FFaceData_01ab94d0 *Other)
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

struct FFaceData_01ab9500 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab9500(volatile FFaceData_01ab9500 *Other);
};

// @baa 0x01ab9500
void FFaceData_01ab9500::sub_01ab9500(volatile FFaceData_01ab9500 *Other)
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

struct FFaceData_01ab9530 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab9530(volatile FFaceData_01ab9530 *Other);
};

// @baa 0x01ab9530
void FFaceData_01ab9530::sub_01ab9530(volatile FFaceData_01ab9530 *Other)
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

struct FFaceData_01ab9560 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab9560(volatile FFaceData_01ab9560 *Other);
};

// @baa 0x01ab9560
void FFaceData_01ab9560::sub_01ab9560(volatile FFaceData_01ab9560 *Other)
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

struct FFaceData_01ab9620 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ab9620(volatile FFaceData_01ab9620 *Other);
};

// @baa 0x01ab9620
void FFaceData_01ab9620::sub_01ab9620(volatile FFaceData_01ab9620 *Other)
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

struct C_01ab9e30 {
    int sub_01ab9e30(undefined4, undefined2 *);
    int sub_00414220(int);
};

// @baa 0x01ab9e30
int C_01ab9e30::sub_01ab9e30(undefined4 param_2, undefined2 * param_3)
{
    int param_1 = (int)this;
  ((C_01ab9e30 *)(this))->sub_00414220(param_2);
  *(undefined2 *)(param_1 + 0xc) = *param_3;
  return param_1;
}

struct C_01ab9e50 { int a, b, c; C_01ab9e50(); };

// @baa 0x01ab9e50
C_01ab9e50::C_01ab9e50() : a(0), b(0), c(0) {}

struct C_01ab9fb0 {
    int sub_01ab9fb0(int);
    int sub_00414220(int);
};

// @baa 0x01ab9fb0
int C_01ab9fb0::sub_01ab9fb0(int param_2)
{
    int param_1 = (int)this;
  ((C_01ab9fb0 *)(this))->sub_00414220(param_2);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  return param_1;
}

struct S_01aba410 { void sub_01ab9c00(); };

// @baa 0x01aba410
void sub_01aba410(S_01aba410 *p) { if (p) p->sub_01ab9c00(); }

struct S_01abc2b0 { void sub_01abbc40(); };

// @baa 0x01abc2b0
void sub_01abc2b0(S_01abc2b0 *p) { if (p) p->sub_01abbc40(); }

struct S_01abc3c0 { void sub_01abc2f0(); };

// @baa 0x01abc3c0
void sub_01abc3c0(S_01abc3c0 *p) { if (p) p->sub_01abc2f0(); }

// @baa 0x01abc610
int sub_01abc610(void) { return 0; }

extern int g_027ca4e8;
int sub_01abc6a0();
// @baa 0x01abcf40
int sub_01abcf40() { if (!g_027ca4e8) g_027ca4e8 = sub_01abc6a0(); return g_027ca4e8; }

struct C_01abd6a0 {
    char pad[0x20];
    float f;
    void sub_01abd6a0(float a);
};

// @baa 0x01abd6a0
void C_01abd6a0::sub_01abd6a0(float a)
{
    f = a;
}

struct C_01abd6b0 {
    void sub_01abd6b0(FLOAT f);
};

// @baa 0x01abd6b0
void C_01abd6b0::sub_01abd6b0(FLOAT f)
{
    *(FLOAT *)(this + 0x24) = f;
}

struct FFaceData_01abdd20 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01abdd20(volatile FFaceData_01abdd20 *Other);
};

// @baa 0x01abdd20
void FFaceData_01abdd20::sub_01abdd20(volatile FFaceData_01abdd20 *Other)
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

struct FFaceData_01abdd50 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01abdd50(volatile FFaceData_01abdd50 *Other);
};

// @baa 0x01abdd50
void FFaceData_01abdd50::sub_01abdd50(volatile FFaceData_01abdd50 *Other)
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

struct FFaceData_01abdd80 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01abdd80(volatile FFaceData_01abdd80 *Other);
};

// @baa 0x01abdd80
void FFaceData_01abdd80::sub_01abdd80(volatile FFaceData_01abdd80 *Other)
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

extern int g_027ca4f0;
int sub_01abee40();
// @baa 0x01abef60
int sub_01abef60() { if (!g_027ca4f0) g_027ca4f0 = sub_01abee40(); return g_027ca4f0; }

extern int g_027ca4ec;
int sub_01abf860();
// @baa 0x01abfbd0
int sub_01abfbd0() { if (!g_027ca4ec) g_027ca4ec = sub_01abf860(); return g_027ca4ec; }

struct FFaceData_01abffa0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01abffa0(volatile FFaceData_01abffa0 *Other);
};

// @baa 0x01abffa0
void FFaceData_01abffa0::sub_01abffa0(volatile FFaceData_01abffa0 *Other)
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

struct FFaceData_01abffd0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01abffd0(volatile FFaceData_01abffd0 *Other);
};

// @baa 0x01abffd0
void FFaceData_01abffd0::sub_01abffd0(volatile FFaceData_01abffd0 *Other)
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
