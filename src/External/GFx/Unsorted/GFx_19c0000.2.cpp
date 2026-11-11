// GFx_19c0000.cpp (part 2 of 4): 81 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_019c0280 { int a, b, c; C_019c0280(); };

// @baa 0x019c0280
C_019c0280::C_019c0280() : a(0), b(0), c(0) {}

struct C_019c0290 { int a, b, c; C_019c0290(); };

// @baa 0x019c0290
C_019c0290::C_019c0290() : a(0), b(0), c(0) {}

struct C {
    int sub_019c0450(int);
};

// @baa 0x019c0450
int C::sub_019c0450(int param_2)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 0x5c) + param_2 * 0x28;
}

struct C_019c0460 {
    undefined4 sub_019c0460();
};

// @baa 0x019c0460
undefined4 C_019c0460::sub_019c0460(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x60);
}

struct C_019c0470 {
    int sub_019c0470(int);
};

// @baa 0x019c0470
int C_019c0470::sub_019c0470(int param_2)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 0x68) + param_2 * 0x18;
}

struct C_019c0480 {
    undefined4 sub_019c0480();
};

// @baa 0x019c0480
undefined4 C_019c0480::sub_019c0480(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x6c);
}

struct C_019c1be0 { void sub_019c1980(int); void sub_019c1be0(); };

// @baa 0x019c1be0
void C_019c1be0::sub_019c1be0() { sub_019c1980(0); }

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019c1980(int NewNum);
    void sub_019c1cc0();
};

void __stdcall sub_018d7170(int A);
// @baa 0x019c1cc0
void S018d4a70::sub_019c1cc0()
{
    S018d4a70* Self = this;
    sub_019c1980(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019c1ce0 { int a, b, c; C_019c1ce0(); };

// @baa 0x019c1ce0
C_019c1ce0::C_019c1ce0() : a(0), b(0), c(0) {}

struct S018d4a70_019c1cf0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019c1980(int NewNum);
    void sub_019c1cf0();
};

// @baa 0x019c1cf0
void S018d4a70_019c1cf0::sub_019c1cf0()
{
    S018d4a70_019c1cf0* Self = this;
    sub_019c1980(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019c1f30 { void sub_019c1e30(int); void sub_019c1f30(); };

// @baa 0x019c1f30
void C_019c1f30::sub_019c1f30() { sub_019c1e30(0); }

struct S018d4a70_019c1f90 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019c1e30(int NewNum);
    void sub_019c1f90();
};

// @baa 0x019c1f90
void S018d4a70_019c1f90::sub_019c1f90()
{
    S018d4a70_019c1f90* Self = this;
    sub_019c1e30(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019c2800 { int a, b, c; C_019c2800(); };

// @baa 0x019c2800
C_019c2800::C_019c2800() : a(0), b(0), c(0) {}

struct S018d4a70_019c2810 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019c1e30(int NewNum);
    void sub_019c2810();
};

// @baa 0x019c2810
void S018d4a70_019c2810::sub_019c2810()
{
    S018d4a70_019c2810* Self = this;
    sub_019c1e30(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019c2ae0 {
    char pad_00[0x2c];
    BYTE field_2c;
    BYTE sub_019c2ae0();
};

// @baa 0x019c2ae0
BYTE C_019c2ae0::sub_019c2ae0()
{
    BYTE t = field_2c;
    t >>= 2;
    t &= 1;
    return t;
}

struct C_019c2f50 { int a, b, c; C_019c2f50(); };

// @baa 0x019c2f50
C_019c2f50::C_019c2f50() : a(0), b(0), c(0) {}

struct C_019c2f60 { int a, b, c; C_019c2f60(); };

// @baa 0x019c2f60
C_019c2f60::C_019c2f60() : a(0), b(0), c(0) {}

struct C_019c2f70 { int a, b, c; C_019c2f70(); };

// @baa 0x019c2f70
C_019c2f70::C_019c2f70() : a(0), b(0), c(0) {}

struct C_019c31c0 { int a, b, c; C_019c31c0(); };

// @baa 0x019c31c0
C_019c31c0::C_019c31c0() : a(0), b(0), c(0) {}

int sub_01973ce0(void);
// @baa 0x019c31f0
int sub_019c31f0(void)
{
    return sub_01973ce0();
}

struct A_019c3200 { virtual void sub_019c3210(); char pad[12]; };

struct B_019c3200 { virtual void sub_019c3210(); };

struct C_019c3200 : A_019c3200, B_019c3200 { virtual void sub_019c3210(); C_019c3200(); };

C_019c3200::C_019c3200() {}

// @baa 0x019c3200
void C_019c3200::sub_019c3210() {}

struct C_019c3bc0 { void sub_019c3a30(int); void sub_019c3bc0(); };

// @baa 0x019c3bc0
void C_019c3bc0::sub_019c3bc0() { sub_019c3a30(0); }

struct S018d4a70_019c4050 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019c3a30(int NewNum);
    void sub_019c4050();
};

// @baa 0x019c4050
void S018d4a70_019c4050::sub_019c4050()
{
    S018d4a70_019c4050* Self = this;
    sub_019c3a30(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019c4070 { int a, b, c; C_019c4070(); };

// @baa 0x019c4070
C_019c4070::C_019c4070() : a(0), b(0), c(0) {}

struct C_019c4090 { int a, b, c; C_019c4090(); };

// @baa 0x019c4090
C_019c4090::C_019c4090() : a(0), b(0), c(0) {}

struct C_019c40b0 { int a, b, c; C_019c40b0(); };

// @baa 0x019c40b0
C_019c40b0::C_019c40b0() : a(0), b(0), c(0) {}

struct S018d4a70_019c40c0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019c3a30(int NewNum);
    void sub_019c40c0();
};

// @baa 0x019c40c0
void S018d4a70_019c40c0::sub_019c40c0()
{
    S018d4a70_019c40c0* Self = this;
    sub_019c3a30(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct M_019c41b0 { void sub_019c3ff0(); };

struct C_019c41b0 { char pad[20]; M_019c41b0 m; void sub_019c41b0(); };

// @baa 0x019c41b0
void C_019c41b0::sub_019c41b0() { m.sub_019c3ff0(); }

struct M_019c42e0 { void sub_019c3ff0(); };

struct C_019c42e0 { char pad[28]; M_019c42e0 m; void sub_019c42e0(); };

// @baa 0x019c42e0
void C_019c42e0::sub_019c42e0() { m.sub_019c3ff0(); }

struct C_019c44a0 { void sub_019c4300(int); void sub_019c44a0(); };

// @baa 0x019c44a0
void C_019c44a0::sub_019c44a0() { sub_019c4300(0); }

struct S018d4a70_019c4990 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019c4300(int NewNum);
    void sub_019c4990();
};

// @baa 0x019c4990
void S018d4a70_019c4990::sub_019c4990()
{
    S018d4a70_019c4990* Self = this;
    sub_019c4300(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct A_019c4a00 { virtual void sub_019c70f0(); char pad[12]; };

struct B_019c4a00 { virtual void sub_019c70f0(); };

struct C_019c4a00 : A_019c4a00, B_019c4a00 { virtual void sub_019c70f0(); C_019c4a00(); };

C_019c4a00::C_019c4a00() {}

// @baa 0x019c4a00
void C_019c4a00::sub_019c70f0() {}

struct A_019c5090 { virtual void sub_019c4f00(); char pad[104]; };

struct B_019c5090 { virtual void sub_019c4f00(); };

struct C_019c5090 : A_019c5090, B_019c5090 { virtual void sub_019c4f00(); C_019c5090(); };

C_019c5090::C_019c5090() {}

// @baa 0x019c5090
void C_019c5090::sub_019c4f00() {}

struct A_019c50a0 { virtual void sub_019c6aa0(); char pad[104]; };

struct B_019c50a0 { virtual void sub_019c6aa0(); };

struct C_019c50a0 : A_019c50a0, B_019c50a0 { virtual void sub_019c6aa0(); C_019c50a0(); };

C_019c50a0::C_019c50a0() {}

// @baa 0x019c50a0
void C_019c50a0::sub_019c6aa0() {}

struct A_019c50b0 { virtual void sub_019c6aa0(); char pad[12]; };

struct B_019c50b0 { virtual void sub_019c6aa0(); };

struct C_019c50b0 : A_019c50b0, B_019c50b0 { virtual void sub_019c6aa0(); C_019c50b0(); };

C_019c50b0::C_019c50b0() {}

// @baa 0x019c50b0
void C_019c50b0::sub_019c6aa0() {}

struct Q { char pad[0x294]; unsigned char b; };

struct P3 { char pad[0x78]; Q* q; unsigned char b7c; };

struct Y { char pad[0x9ca]; unsigned char b; };

struct Sub { virtual int f0(); virtual int f1(); virtual int f2(); };

struct D2 { char pad[0x10]; Sub s; void sub_019b2690(P3*, double*); };

struct D { D2* sub_01975e10(P3*); char sub_01975b70(P3*); };

float sub_018e9830(float);
void __stdcall sub_018d7170(void*);
struct C_019c56a0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual Y* v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual P3* v23();
    char pad[0x6a-4];
    unsigned char b6a;
    char pad2[0x9c-0x6b];
    void* p9c;
    char sub_0196cc30(int, D*, int);
    void sub_019139b0(char);
    void sub_019c2b00(float*);
    bool sub_019c56a0(int, D*, int);
};

// @baa 0x019c56a0
bool C_019c56a0::sub_019c56a0(int a, D* d, int c)
{
    if (sub_0196cc30(a, d, c)) goto done;
    volatile float& cf = *(float*)&c;
    switch (a) {
    case 0x24:
        if (v23()->b7c >= 8) {
            P3* p = v23();
            D2* o = d->sub_01975e10(p);
            if (o && o->s.f2() == 0x11) {
                double r[4];
                o->sub_019b2690(p, r);
                float f[4];
                cf = (float)r[0];
                f[0] = sub_018e9830(cf);
                cf = (float)r[1];
                f[1] = sub_018e9830(cf);
                cf = (float)(r[2] - r[0]);
                f[2] = sub_018e9830(cf);
                cf = (float)(r[3] - r[1]);
                f[3] = sub_018e9830(cf);
                sub_019c2b00(f);
                return true;
            }
            bool had = p9c != 0;
            sub_018d7170(p9c);
            b6a &= 0xfe;
            p9c = 0;
            v16()->b = 1;
            if (had) v15();
            goto done;
        }
        break;
    case 0x45:
        if (v23()->q->b == 1) {
            sub_019139b0(d->sub_01975b70(v23()));
            return true;
        }
        break;
    }
    return false;
done:
    return true;
}

struct C_019c6b10 { int a, b, c; C_019c6b10(); };

// @baa 0x019c6b10
C_019c6b10::C_019c6b10() : a(0), b(0), c(0) {}

struct S018d4a70_019c6b20 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019c4300(int NewNum);
    void sub_019c6b20();
};

// @baa 0x019c6b20
void S018d4a70_019c6b20::sub_019c6b20()
{
    S018d4a70_019c6b20* Self = this;
    sub_019c4300(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct A_019c6c90 { virtual void sub_019c7090(); char pad[12]; };

struct B_019c6c90 { virtual void sub_019c7090(); };

struct C_019c6c90 : A_019c6c90, B_019c6c90 { virtual void sub_019c7090(); C_019c6c90(); };

C_019c6c90::C_019c6c90() {}

// @baa 0x019c6c90
void C_019c6c90::sub_019c7090() {}

struct A_019c7260 { virtual void sub_019c7450(); char pad[12]; };

struct B_019c7260 { virtual void sub_019c7450(); };

struct C_019c7260 : A_019c7260, B_019c7260 { virtual void sub_019c7450(); C_019c7260(); };

C_019c7260::C_019c7260() {}

// @baa 0x019c7260
void C_019c7260::sub_019c7450() {}

struct C_019c7570 {
    uint sub_019c7570();
};

// @baa 0x019c7570
uint C_019c7570::sub_019c7570(void)
{
    byte * param_1 = (byte *)this;
  return *(uint *)(param_1 + 4) >> 0x10 ^ (uint)*param_1 ^ *(uint *)(param_1 + 4);
}

struct C_019c7580 {
    undefined2 sub_019c7580();
};

// @baa 0x019c7580
undefined2 C_019c7580::sub_019c7580(void)
{
    int param_1 = (int)this;
  return *(undefined2 *)(param_1 + 0x12);
}

struct S_019c7600 {
    char f0;
    S_019c7600();
};

// @baa 0x019c7600
S_019c7600::S_019c7600()
{
    f0 = 0;
}

struct C_019c8110 {
    undefined4 * sub_019c8110();
};

int sub_018d3d50(void);
extern undefined * g_023feae8;
// @baa 0x019c8110
undefined4 * C_019c8110::sub_019c8110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023feae8);
  return param_1;
}

struct C_019c98f0 {
    undefined4 * sub_019c98f0(undefined4);
    int sub_019c9170(int);
};

extern undefined4 g_023feadc;
// @baa 0x019c98f0
undefined4 * C_019c98f0::sub_019c98f0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023feadc));
  param_1[3] = 0;
  ((C_019c98f0 *)(this))->sub_019c9170(param_2);
  return param_1;
}

struct C_019ca050 { int a, b; C_019ca050(int, int); };

// @baa 0x019ca050
C_019ca050::C_019ca050(int x, int y) : a(x), b(y) {}

struct C_019ca160 {
    void sub_019ca160(float);
};

// @baa 0x019ca160
void C_019ca160::sub_019ca160(float param_2)
{
    int param_1 = (int)this;

  *(float *)(param_1 + 0x1c) = param_2 * 0.5;
  *(float *)(param_1 + 0x18) = param_2 * 0.5;
  return;
}

struct C_019ca1c0 {
    char pad[0x0C];
    float f_0x0C;
    void sub_019ca1c0(float value);
};

// @baa 0x019ca1c0
void C_019ca1c0::sub_019ca1c0(float value)
{
    f_0x0C = value;
}

struct C_019ca1d0 {
    char pad[0x28];
    float f28;
    void sub_019ca1d0(float);
};

// @baa 0x019ca1d0
void C_019ca1d0::sub_019ca1d0(float f)
{
    f28 = f;
}

struct C_019ca210 {
    void sub_019ca210(undefined4);
};

// @baa 0x019ca210
void C_019ca210::sub_019ca210(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = 1;
  return;
}

struct C_019ca220 {
    undefined4 sub_019ca220();
};

// @baa 0x019ca220
undefined4 C_019ca220::sub_019ca220(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

// @baa 0x019ca2a0
float sub_019ca2a0(void)
{
    return 10.0f;
}

struct C_019ca770 { int a, b, c; C_019ca770(); };

// @baa 0x019ca770
C_019ca770::C_019ca770() : a(0), b(0), c(0) {}

struct C_019ca780 { int a, b, c; C_019ca780(); };

// @baa 0x019ca780
C_019ca780::C_019ca780() : a(0), b(0), c(0) {}

struct C_019ca840 { int a, b, c; C_019ca840(); };

// @baa 0x019ca840
C_019ca840::C_019ca840() : a(0), b(0), c(0) {}

struct C_019ca890 { int a, b, c; C_019ca890(); };

// @baa 0x019ca890
C_019ca890::C_019ca890() : a(0), b(0), c(0) {}

int __stdcall sub_018d7150(int);
// @baa 0x019ca9c0
void sub_019ca9c0(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

// @baa 0x019caa00
void sub_019caa00(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

struct C_019caa30 { int a, b, c; C_019caa30(); };

// @baa 0x019caa30
C_019caa30::C_019caa30() : a(0), b(0), c(0) {}

struct C_019caa40 { int a, b, c; C_019caa40(); };

// @baa 0x019caa40
C_019caa40::C_019caa40() : a(0), b(0), c(0) {}

struct C_019caa50 { int a, b, c; C_019caa50(); };

// @baa 0x019caa50
C_019caa50::C_019caa50() : a(0), b(0), c(0) {}

struct C_019caa60 { int a, b, c; C_019caa60(); };

// @baa 0x019caa60
C_019caa60::C_019caa60() : a(0), b(0), c(0) {}

struct C_019caa70 { int a, b, c; C_019caa70(); };

// @baa 0x019caa70
C_019caa70::C_019caa70() : a(0), b(0), c(0) {}

struct C_019caa80 { int a, b, c; C_019caa80(); };

// @baa 0x019caa80
C_019caa80::C_019caa80() : a(0), b(0), c(0) {}

struct C_019caa90 { int a, b, c; C_019caa90(); };

// @baa 0x019caa90
C_019caa90::C_019caa90() : a(0), b(0), c(0) {}

struct C_019caaa0 { int a, b, c; C_019caaa0(); };

// @baa 0x019caaa0
C_019caaa0::C_019caaa0() : a(0), b(0), c(0) {}

struct C_019ccaf0 { void sub_019cc840(int); void sub_019ccaf0(); };

// @baa 0x019ccaf0
void C_019ccaf0::sub_019ccaf0() { sub_019cc840(0); }

struct C_019ccb70 { void sub_019cc8e0(int); void sub_019ccb70(); };

// @baa 0x019ccb70
void C_019ccb70::sub_019ccb70() { sub_019cc8e0(0); }

struct C_019cd130 { int a, b, c; C_019cd130(); };

// @baa 0x019cd130
C_019cd130::C_019cd130() : a(0), b(0), c(0) {}

struct C_019cd150 { int a, b, c; C_019cd150(); };

// @baa 0x019cd150
C_019cd150::C_019cd150() : a(0), b(0), c(0) {}

struct C_019cd170 { int a, b, c; C_019cd170(); };

// @baa 0x019cd170
C_019cd170::C_019cd170() : a(0), b(0), c(0) {}

struct C_019cd190 { int a, b, c; C_019cd190(); };

// @baa 0x019cd190
C_019cd190::C_019cd190() : a(0), b(0), c(0) {}

struct C_019cd1f0 { int a, b, c; C_019cd1f0(); };

// @baa 0x019cd1f0
C_019cd1f0::C_019cd1f0() : a(0), b(0), c(0) {}

struct C_019cee90 { int a, b, c; C_019cee90(); };

// @baa 0x019cee90
C_019cee90::C_019cee90() : a(0), b(0), c(0) {}

struct C_019cf290 { void sub_019cf030(int); void sub_019cf290(); };

// @baa 0x019cf290
void C_019cf290::sub_019cf290() { sub_019cf030(0); }

struct C_019cf2d0 { void sub_019cf1c0(int); void sub_019cf2d0(); };

// @baa 0x019cf2d0
void C_019cf2d0::sub_019cf2d0() { sub_019cf1c0(0); }

struct C_019cfa30 { int a, b, c; C_019cfa30(); };

// @baa 0x019cfa30
C_019cfa30::C_019cfa30() : a(0), b(0), c(0) {}

struct C_019cfa80 { int a, b, c; C_019cfa80(); };

// @baa 0x019cfa80
C_019cfa80::C_019cfa80() : a(0), b(0), c(0) {}

struct C_019cfc10 {
    void sub_019cfc10(float *, float *);
};

// @baa 0x019cfc10
void C_019cfc10::sub_019cfc10(float * param_2, float * param_3)
{
    float * param_1 = (float *)this;

  float fVar1;
  float fVar2;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  *param_2 = fVar2 * param_1[1] + fVar1 * *param_1 + param_1[2];
  *param_3 = fVar2 * param_1[4] + param_1[3] * fVar1 + param_1[5];
  return;
}

struct C_019cfdf0 {
    undefined4 * sub_019cfdf0();
};

extern undefined * g_023febfc;
// @baa 0x019cfdf0
undefined4 * C_019cfdf0::sub_019cfdf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023febfc);
  return param_1;
}

struct C_019cfe40 { int a, b, c; C_019cfe40(); };

// @baa 0x019cfe40
C_019cfe40::C_019cfe40() : a(0), b(0), c(0) {}
