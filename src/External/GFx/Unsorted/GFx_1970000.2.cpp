// GFx_1970000.cpp (part 2 of 4): 100 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_019708c0 { virtual void sub_01970a80(); char pad[104]; };

struct B_019708c0 { virtual void sub_01970a80(); };

struct C_019708c0 : A_019708c0, B_019708c0 { virtual void sub_01970a80(); C_019708c0(); };

C_019708c0::C_019708c0() {}

// @baa 0x019708c0
void C_019708c0::sub_01970a80() {}

struct A_019708d0 { virtual void sub_01970a80(); char pad[12]; };

struct B_019708d0 { virtual void sub_01970a80(); };

struct C_019708d0 : A_019708d0, B_019708d0 { virtual void sub_01970a80(); C_019708d0(); };

C_019708d0::C_019708d0() {}

// @baa 0x019708d0
void C_019708d0::sub_01970a80() {}

int __stdcall sub_018e3f40(int, int, int);
// @baa 0x01970dd0
uint sub_01970dd0(undefined4 param_1, undefined4 param_2)
{
  uint uVar1;
  uVar1 = sub_018e3f40(param_1,param_2,0x1505);
  return uVar1 & 0xffffff;
}

struct C_019710f0 { int a, b; C_019710f0(const C_019710f0 &); };

// @baa 0x019710f0
C_019710f0::C_019710f0(const C_019710f0 &o) : a(o.a), b(o.b) {}

// @baa 0x01971160
DWORD __stdcall sub_01971160(DWORD *param_1)
{
    return param_1[1];
}

void sub_01971290(void);
// @baa 0x019714a0
void sub_019714a0(void) { sub_01971290(); }

struct S { char pad[0x6a]; BYTE b; };

struct C { S s; UINT sub_019721a0(); };

// @baa 0x019721a0
UINT C::sub_019721a0() { return s.b; }

struct S_01972230 { char pad[0x18]; DWORD field; };

// @baa 0x01972230
DWORD __stdcall sub_01972230(S_01972230 *a, S_01972230 *b) { return a->field; }

struct S_019723d0 {
    int Unk0; // 0x00
    BYTE sub_019723d0(S_019723d0* Other);
};

// @baa 0x019723d0
BYTE S_019723d0::sub_019723d0(S_019723d0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct P2 {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void m10();
};

void P2::d0() {}

void P2::d1() {}

void P2::d2() {}

void P2::d3() {}

void P2::d4() {}

void P2::d5() {}

void P2::d6() {}

void P2::d7() {}

void P2::d8() {}

void P2::d9() {}

void P2::m10() {}

struct P1 {
    P2* f0;
    void sub_01972410();
};

// @baa 0x01972410
void P1::sub_01972410() {
    f0->m10();
}

struct X {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
};

struct C_01972420 {
    X *x;
    void sub_01972420();
};

// @baa 0x01972420
void C_01972420::sub_01972420() { x->v11(); }

struct C_01972660 { int a; C_01972660(int); };

// @baa 0x01972660
C_01972660::C_01972660(int x) : a(x) {}

struct C_019726d0 {
    int sub_019726d0(int);
};

// @baa 0x019726d0
int C_019726d0::sub_019726d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

struct C_01972720 { int a, b, c; C_01972720(); };

// @baa 0x01972720
C_01972720::C_01972720() : a(0), b(0), c(0) {}

struct S_01972b40 {
    INT Unk00;
    INT Unk04;
    S_01972b40 *sub_01972b40();
};

// @baa 0x01972b40
S_01972b40 *S_01972b40::sub_01972b40()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_019732f0 { void sub_019731d0(int); void sub_019732f0(); };

// @baa 0x019732f0
void C_019732f0::sub_019732f0() { sub_019731d0(0); }

struct M_01973370 { void sub_019625e0(); };

struct C_01973370 { char pad[216]; M_01973370 m; void sub_01973370(); };

// @baa 0x01973370
void C_01973370::sub_01973370() { m.sub_019625e0(); }

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019731d0(int NewNum);
    void sub_01973410();
};

void __stdcall sub_018d7170(int A);
// @baa 0x01973410
void S018d4a70::sub_01973410()
{
    S018d4a70* Self = this;
    sub_019731d0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019735f0 {
    undefined4 * sub_019735f0(undefined4);
    int sub_01973430(int);
};

// @baa 0x019735f0
undefined4 * C_019735f0::sub_019735f0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_019735f0 *)(this))->sub_01973430(param_2);
  return param_1;
}

struct C_01973900 {
    undefined4 * sub_01973900(undefined4);
    int sub_01973430(int);
};

// @baa 0x01973900
undefined4 * C_01973900::sub_01973900(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_01973900 *)(this))->sub_01973430(param_2);
  return param_1;
}

struct A_019739b0 { virtual void sub_019750f0(); char pad[12]; };

struct B_019739b0 { virtual void sub_019750f0(); };

struct C_019739b0 : A_019739b0, B_019739b0 { virtual void sub_019750f0(); C_019739b0(); };

C_019739b0::C_019739b0() {}

// @baa 0x019739b0
void C_019739b0::sub_019750f0() {}

struct A_01973b30 { virtual void sub_01975110(); char pad[12]; };

struct B_01973b30 { virtual void sub_01975110(); };

struct C_01973b30 : A_01973b30, B_01973b30 { virtual void sub_01975110(); C_01973b30(); };

C_01973b30::C_01973b30() {}

// @baa 0x01973b30
void C_01973b30::sub_01975110() {}

struct A_01973be0 { virtual void sub_01975130(); char pad[12]; };

struct B_01973be0 { virtual void sub_01975130(); };

struct C_01973be0 : A_01973be0, B_01973be0 { virtual void sub_01975130(); C_01973be0(); };

C_01973be0::C_01973be0() {}

// @baa 0x01973be0
void C_01973be0::sub_01975130() {}

struct C_01973cb0 {
    undefined4 * sub_01973cb0(undefined4);
    int sub_01973af0(int);
};

extern undefined4 g_023fa92c;
extern undefined4 g_023fa984;
// @baa 0x01973cb0
undefined4 * C_01973cb0::sub_01973cb0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01973cb0 *)(this))->sub_01973af0(0);
  param_1[0xc] = param_2;
  *param_1 = (undefined4)((&g_023fa984));
  param_1[4] = (undefined4)((&g_023fa92c));
  return param_1;
}

struct GASAsFunctionObject
{
    BYTE sub_01973e40(UINT arg1);
};

// @baa 0x01973e40
BYTE GASAsFunctionObject::sub_01973e40(UINT arg1)
{
    return 0;
}

struct A_01973e90 { virtual void sub_01975150(); char pad[12]; };

struct B_01973e90 { virtual void sub_01975150(); };

struct C_01973e90 : A_01973e90, B_01973e90 { virtual void sub_01975150(); C_01973e90(); };

C_01973e90::C_01973e90() {}

// @baa 0x01973e90
void C_01973e90::sub_01975150() {}

struct A_01974a00 { virtual void sub_019751e0(); char pad[12]; };

struct B_01974a00 { virtual void sub_019751e0(); };

struct C_01974a00 : A_01974a00, B_01974a00 { virtual void sub_019751e0(); C_01974a00(); };

C_01974a00::C_01974a00() {}

// @baa 0x01974a00
void C_01974a00::sub_019751e0() {}

struct A_01974c40 { virtual void sub_019750a0(); char pad[12]; };

struct B_01974c40 { virtual void sub_019750a0(); };

struct C_01974c40 : A_01974c40, B_01974c40 { virtual void sub_019750a0(); C_01974c40(); };

C_01974c40::C_01974c40() {}

// @baa 0x01974c40
void C_01974c40::sub_019750a0() {}

struct A_019751c0 { virtual void sub_01975200(); char pad[12]; };

struct B_019751c0 { virtual void sub_01975200(); };

struct C_019751c0 : A_019751c0, B_019751c0 { virtual void sub_01975200(); C_019751c0(); };

C_019751c0::C_019751c0() {}

// @baa 0x019751c0
void C_019751c0::sub_01975200() {}

// @baa 0x019753f0
DWORD __stdcall sub_019753f0(DWORD *param_1)
{
    return param_1[1];
}

struct C_019757c0 {
    undefined1 * sub_019757c0(undefined4);
    int sub_019729b0(int, int);
};

// @baa 0x019757c0
undefined1 * C_019757c0::sub_019757c0(undefined4 param_2)
{
    undefined1 * param_1 = (undefined1 *)this;
  *param_1 = 8;
  ((C_019757c0 *)(((char *)this + 4)))->sub_019729b0(param_2, 0);
  return param_1;
}

struct S_01975940 { int sub_01995230(); };

struct C_01975940 { char _pad[0x18]; S_01975940* _ptr; int sub_01975940(); };

// @baa 0x01975940
int C_01975940::sub_01975940() { return _ptr->sub_01995230(); }

struct S_01975950 { int sub_01995240(); };

struct C_01975950 { char _pad[0x18]; S_01975950* _ptr; int sub_01975950(); };

// @baa 0x01975950
int C_01975950::sub_01975950() { return _ptr->sub_01995240(); }

struct V_01975960 {
    virtual void v0();
    virtual void g();
};

struct O_01975960 { char pad[24]; V_01975960* p; void sub_01975960(); };

// @baa 0x01975960
void O_01975960::sub_01975960() { p->g(); }

struct C_019759b0 {
    undefined4 * sub_019759b0();
};

int sub_018d3d50(void);
extern undefined * g_023fac38;
// @baa 0x019759b0
undefined4 * C_019759b0::sub_019759b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fac38);
  return param_1;
}

// @baa 0x01975db0
DWORD __stdcall sub_01975db0(DWORD *param_1)
{
    return param_1[1];
}

struct C_01976c10 {
    void sub_01976c10(undefined4);
    int sub_019723f0(int);
    int sub_01976050();
    int sub_019729b0(int, int);
};

// @baa 0x01976c10
void C_01976c10::sub_01976c10(undefined4 param_2)
{
    char * param_1 = (char *)this;
  char cVar1;
  if ((*param_1 == '\b') && (cVar1 = ((C_01976c10 *)(((char *)this + 4)))->sub_019723f0(param_2), cVar1 == '\0')) {
    return;
  }
  ((C_01976c10 *)(this))->sub_01976050();
  *param_1 = '\b';
  ((C_01976c10 *)(((char *)this + 4)))->sub_019729b0(param_2, 0);
  return;
}

struct C_01976c50 {
    void sub_01976c50(undefined4);
    int sub_01976050();
    int sub_019729b0(int, int);
};

// @baa 0x01976c50
void C_01976c50::sub_01976c50(undefined4 param_2)
{
    undefined1 * param_1 = (undefined1 *)this;
  ((C_01976c50 *)(this))->sub_01976050();
  *param_1 = 0xc;
  ((C_01976c50 *)(((char *)this + 4)))->sub_019729b0(param_2, 0);
  return;
}

struct C_01976f40 {
    void sub_01976f40(int);
    int sub_01976180(int);
};

// @baa 0x01976f40
void C_01976f40::sub_01976f40(int param_2)
{
    int param_1 = (int)this;
  ((C_01976f40 *)(this))->sub_01976180(param_2);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return;
}

struct C_019779a0 {
    undefined4 sub_019779a0(int);
    int sub_01976ea0(int, int);
};

// @baa 0x019779a0
undefined4 C_019779a0::sub_019779a0(int param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_019779a0 *)(this))->sub_01976ea0(param_2, *(uint *)(*param_1 + 4) & *(uint *)(param_2 + 4));
  return uVar1;
}

struct C_01977d30 {
    void sub_01977d30(undefined1);
};

// @baa 0x01977d30
void C_01977d30::sub_01977d30(undefined1 param_2)
{
    int param_1 = (int)this;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x80;
  *(undefined1 *)(param_1 + 0x28) = param_2;
  return;
}

struct S0 {
    char pad[0x14];
    WORD field_14;
    int sub_01977d90(void);
};

// @baa 0x01977d90
int S0::sub_01977d90(void)
{
    return this->field_14;
}

struct C_01977df0 {
    char _pad[0x1a];
    ushort f1a;
    int sub_01977df0();
};

// @baa 0x01977df0
int C_01977df0::sub_01977df0(void)
{
    return f1a;
}

struct C_01977e10 {
    char pad[0x1c];
    WORD f0x1c;
    INT sub_01977e10();
};

// @baa 0x01977e10
INT C_01977e10::sub_01977e10()
{
    INT v = f0x1c;
    return v;
}

struct C_01977e30 {
    void sub_01977e30(undefined4);
    int sub_019aaa90(int);
};

// @baa 0x01977e30
void C_01977e30::sub_01977e30(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_01977e30 *)(this))->sub_019aaa90(param_2);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x40;
  return;
}

struct C_01977e80 {
    undefined4 sub_01977e80(int);
    int sub_019aa6f0(int);
};

// @baa 0x01977e80
undefined4 C_01977e80::sub_01977e80(int param_2)
{
    int param_1 = (int)this;
  char cVar1;
  if (((((*(short *)(param_1 + 0x2a) == *(short *)(param_2 + 0x2a)) &&
        (*(short *)(param_1 + 0x14) == *(short *)(param_2 + 0x14))) &&
       (*(short *)(param_1 + 0x16) == *(short *)(param_2 + 0x16))) &&
      ((*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18) &&
       (*(short *)(param_1 + 0x1a) == *(short *)(param_2 + 0x1a))))) &&
     (*(short *)(param_1 + 0x1c) == *(short *)(param_2 + 0x1c))) {
    cVar1 = ((C_01977e80 *)(this))->sub_019aa6f0(*(undefined4 *)(param_2 + 0x10));
    if (((cVar1 != '\0') && (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))) &&
       ((*(char *)(param_1 + 0x28) == *(char *)(param_2 + 0x28) &&
        (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))))) {
      return 1;
    }
  }
  return 0;
}

struct C_01977f40 {
    char pad[0x18];
    DWORD field_18;
    DWORD sub_01977f40();
};

// @baa 0x01977f40
DWORD C_01977f40::sub_01977f40()
{
    DWORD v = field_18;
    field_18 = v + 1;
    return v;
}

struct C_01977f90 { int a, b, c; C_01977f90(); };

// @baa 0x01977f90
C_01977f90::C_01977f90() : a(0), b(0), c(0) {}

struct C_01978020 { int a; C_01978020(int); };

// @baa 0x01978020
C_01978020::C_01978020(int x) : a(x) {}

struct S_01978520 {
    int Unk0; // 0x00
    BYTE sub_01978520(S_01978520* Other);
};

// @baa 0x01978520
BYTE S_01978520::sub_01978520(S_01978520* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_01978540 {
    int Unk0; // 0x00
    BYTE sub_01978540(S_01978540* Other);
};

// @baa 0x01978540
BYTE S_01978540::sub_01978540(S_01978540* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_01978580 {
    int Unk0; // 0x00
    BYTE sub_01978580(S_01978580* Other);
};

// @baa 0x01978580
BYTE S_01978580::sub_01978580(S_01978580* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct S_019785e0 {
    int Unk0; // 0x00
    BYTE sub_019785e0(S_019785e0* Other);
};

// @baa 0x019785e0
BYTE S_019785e0::sub_019785e0(S_019785e0* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_01978650 { int a; C_01978650(int); };

// @baa 0x01978650
C_01978650::C_01978650(int x) : a(x) {}

struct C_019787b0 { int a, b; C_019787b0(const C_019787b0 &); };

// @baa 0x019787b0
C_019787b0::C_019787b0(const C_019787b0 &o) : a(o.a), b(o.b) {}

struct C_019787e0 {
    undefined4 * sub_019787e0();
};

extern undefined * g_023facd0;
// @baa 0x019787e0
undefined4 * C_019787e0::sub_019787e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023facd0);
  return param_1;
}

struct C_01978820 { int a, b; C_01978820(const C_01978820 &); };

// @baa 0x01978820
C_01978820::C_01978820(const C_01978820 &o) : a(o.a), b(o.b) {}

struct C_01978840 { int a, b; C_01978840(const C_01978840 &); };

// @baa 0x01978840
C_01978840::C_01978840(const C_01978840 &o) : a(o.a), b(o.b) {}

struct C_01978970 { int a, b, c; C_01978970(); };

// @baa 0x01978970
C_01978970::C_01978970() : a(0), b(0), c(0) {}

struct C_01978990 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01978990* sub_01978990(INT value);
};

// @baa 0x01978990
C_01978990* C_01978990::sub_01978990(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_019789b0 { int a, b, c; C_019789b0(); };

// @baa 0x019789b0
C_019789b0::C_019789b0() : a(0), b(0), c(0) {}

struct C_019789c0 { int a, b; C_019789c0(int, int); };

// @baa 0x019789c0
C_019789c0::C_019789c0(int x, int y) : a(x), b(y) {}

struct C_019789e0 { int a, b; C_019789e0(int, int); };

// @baa 0x019789e0
C_019789e0::C_019789e0(int x, int y) : a(x), b(y) {}

struct C_01978a20 {
    int sub_01978a20(int);
};

// @baa 0x01978a20
int C_01978a20::sub_01978a20(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0xc;
}

struct C_01978a40 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01978a40* sub_01978a40(INT value);
};

// @baa 0x01978a40
C_01978a40* C_01978a40::sub_01978a40(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_01978b80 { int a; C_01978b80(int); };

// @baa 0x01978b80
C_01978b80::C_01978b80(int x) : a(x) {}

struct C_01978c20 { int a, b, c; C_01978c20(); };

// @baa 0x01978c20
C_01978c20::C_01978c20() : a(0), b(0), c(0) {}

struct C_01978c80 { int a, b; C_01978c80(const C_01978c80 &); };

// @baa 0x01978c80
C_01978c80::C_01978c80(const C_01978c80 &o) : a(o.a), b(o.b) {}

struct C_01978cc0 {
    int sub_01978cc0(int);
};

// @baa 0x01978cc0
int C_01978cc0::sub_01978cc0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x68 + *param_1;
}

struct C_01978ce0 {
    char pad[0x18];
    void *field;
    void sub_01978ce0();
};

void __stdcall sub_018d7170(void *);
// @baa 0x01978ce0
void C_01978ce0::sub_01978ce0()
{
    sub_018d7170(field);
}

struct S_01978d10 {
    int Unk0; // 0x00
    BYTE sub_01978d10(S_01978d10* Other);
};

// @baa 0x01978d10
BYTE S_01978d10::sub_01978d10(S_01978d10* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_01978d70 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01978d70* sub_01978d70(INT value);
};

// @baa 0x01978d70
C_01978d70* C_01978d70::sub_01978d70(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_01978d90 { int a, b, c; C_01978d90(); };

// @baa 0x01978d90
C_01978d90::C_01978d90() : a(0), b(0), c(0) {}

struct C_01979150 {
    undefined4 sub_01977e80(int);
};

struct D {
    undefined4 sub_01979150(int);
};

// @baa 0x01979150
undefined4 D::sub_01979150(int a)
{
    C_01979150 **t = (C_01979150 **)this;
    return (*t)->sub_01977e80(a);
}

struct C_01979160 {
    int sub_01979160(int);
};

// @baa 0x01979160
int C_01979160::sub_01979160(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01979170 {
    int sub_01979170(int);
};

// @baa 0x01979170
int C_01979170::sub_01979170(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01979180 {
    UINT f0;
    char pad[4];
    UINT f8;
    INT sub_01979180();
};

// @baa 0x01979180
INT C_01979180::sub_01979180()
{
    return f0 >= f8;
}

struct C_01979260 { int a, b; C_01979260(int, int); };

// @baa 0x01979260
C_01979260::C_01979260(int x, int y) : a(x), b(y) {}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_01979960();
};

// @baa 0x01979960
S16* S16::sub_01979960()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct C_01979be0 {
    undefined4 sub_01979be0();
};

// @baa 0x01979be0
undefined4 C_01979be0::sub_01979be0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_01979c20 {
    undefined4 sub_01979c20();
};

// @baa 0x01979c20
undefined4 C_01979c20::sub_01979c20(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_01979c30 {
    void sub_01979c30(undefined4 *);
};

// @baa 0x01979c30
void C_01979c30::sub_01979c30(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct C_01979cf0 {
    void sub_01979cf0(undefined4 *);
};

// @baa 0x01979cf0
void C_01979cf0::sub_01979cf0(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct C_01979fb0 {
    void sub_01979fb0(undefined4 *);
};

// @baa 0x01979fb0
void C_01979fb0::sub_01979fb0(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct T {
    int sub_019797c0(int arg);
};

struct C_0197a690 {
    int sub_0197a690(int arg);
};

// @baa 0x0197a690
int C_0197a690::sub_0197a690(int arg) {
    return ((T *)*((int *)this))->sub_019797c0(arg);
}

struct C_0197c2d0 { void sub_0197aa30(int); void sub_0197c2d0(); };

// @baa 0x0197c2d0
void C_0197c2d0::sub_0197c2d0() { sub_0197aa30(0); }

struct C_0197d1a0 { void sub_0197aa30(int); void sub_0197d1a0(); };

// @baa 0x0197d1a0
void C_0197d1a0::sub_0197d1a0() { sub_0197aa30(0); }

struct C_0197d1b0 {
    undefined4 * sub_0197d1b0(undefined4);
    int sub_0197c2e0(int);
};

// @baa 0x0197d1b0
undefined4 * C_0197d1b0::sub_0197d1b0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_0197d1b0 *)(this))->sub_0197c2e0(param_2);
  return param_1;
}

struct S018d4a70_0197d1d0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0197aa30(int NewNum);
    void sub_0197d1d0();
};

// @baa 0x0197d1d0
void S018d4a70_0197d1d0::sub_0197d1d0()
{
    S018d4a70_0197d1d0* Self = this;
    sub_0197aa30(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0197d350 {
    undefined4 * sub_0197d350(undefined4 *);
    int sub_0190d790(int);
    int sub_019aab10(int);
};

// @baa 0x0197d350
undefined4 * C_0197d350::sub_0197d350(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  ((C_0197d350 *)(((char *)this + 0x10)))->sub_0190d790((int)(param_2 + 4));
  ((C_0197d350 *)(((char *)this + 0x3c)))->sub_019aab10((int)(param_2 + 0xf));
  return param_1;
}

struct C_0197d3d0 {
    void sub_0197d3d0(undefined4);
    int sub_0197ccd0(int, int);
};

// @baa 0x0197d3d0
void C_0197d3d0::sub_0197d3d0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0197d3d0 *)((*(char **)((char *)this + 0))))->sub_0197ccd0(*(undefined4 *)(param_1 + 4), param_2);
  return;
}

struct C_0197d3f0 {
    void sub_0197d3f0(undefined4);
    int sub_0197ccd0(int, int);
};

// @baa 0x0197d3f0
void C_0197d3f0::sub_0197d3f0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0197d3f0 *)((*(char **)((char *)this + 0))))->sub_0197ccd0(*(int *)(param_1 + 4) + 1, param_2);
  return;
}

struct C_0197d7f0 {
    void sub_0197d7f0();
    int sub_0197aa30(int);
};

// @baa 0x0197d7f0
void C_0197d7f0::sub_0197d7f0(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 0;
  ((C_0197d7f0 *)(((char *)this + 0x10)))->sub_0197aa30(0);
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  return;
}

struct C_0197dea0 { int a, b, c; C_0197dea0(); };

// @baa 0x0197dea0
C_0197dea0::C_0197dea0() : a(0), b(0), c(0) {}

struct C_0197deb0 {
    undefined4 * sub_0197deb0(undefined4);
    int sub_0197c2e0(int);
};

// @baa 0x0197deb0
undefined4 * C_0197deb0::sub_0197deb0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_0197deb0 *)(this))->sub_0197c2e0(param_2);
  return param_1;
}

struct S018d4a70_0197ded0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0197aa30(int NewNum);
    void sub_0197ded0();
};

// @baa 0x0197ded0
void S018d4a70_0197ded0::sub_0197ded0()
{
    S018d4a70_0197ded0* Self = this;
    sub_0197aa30(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0197eb20 { int a, b, c; C_0197eb20(); };

// @baa 0x0197eb20
C_0197eb20::C_0197eb20() : a(0), b(0), c(0) {}

struct S018d4a70_0197eb30 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0197aa30(int NewNum);
    void sub_0197eb30();
};

// @baa 0x0197eb30
void S018d4a70_0197eb30::sub_0197eb30()
{
    S018d4a70_0197eb30* Self = this;
    sub_0197aa30(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0197eb90 {
    undefined4 * sub_0197eb90(undefined4);
    int sub_0197c2e0(int);
};

// @baa 0x0197eb90
undefined4 * C_0197eb90::sub_0197eb90(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_0197eb90 *)(this))->sub_0197c2e0(param_2);
  return param_1;
}

struct C_0197f650 { void sub_0197ee30(int); void sub_0197f650(); };

// @baa 0x0197f650
void C_0197f650::sub_0197f650() { sub_0197ee30(0); }
