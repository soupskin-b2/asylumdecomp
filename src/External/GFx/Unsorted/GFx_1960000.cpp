// GFx_1960000.cpp (part 1 of 2): 93 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x01962440
int UGFxDataStoreSubscriber::sub_01962440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[1] * 0x18;
}

struct C_view {
    int sub_0195e8a0(int);
};

// @baa 0x019635a0
void UGFxDataStoreSubscriber::sub_019635a0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_0195e8a0(*(int *)(param_1 + 4) + -1);
  return;
}

struct C { void sub_019625e0(int); void sub_019635b0(); };

// @baa 0x019635b0
void C::sub_019635b0() { sub_019625e0(0); }

struct C_01963cd0 { void sub_0194f2c0(int); void sub_01963cd0(); };

// @baa 0x01963cd0
void C_01963cd0::sub_01963cd0() { sub_0194f2c0(0); }

struct C_01963ce0 { int a, b, c; C_01963ce0(); };

// @baa 0x01963ce0
C_01963ce0::C_01963ce0() : a(0), b(0), c(0) {}

struct C_01963d80 { int a, b, c; C_01963d80(); };

// @baa 0x01963d80
C_01963d80::C_01963d80() : a(0), b(0), c(0) {}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019625e0(int NewNum);
    void sub_01963da0();
};

void __stdcall sub_018d7170(int A);
// @baa 0x01963da0
void S018d4a70::sub_01963da0()
{
    S018d4a70* Self = this;
    sub_019625e0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01963e20 { void sub_01962840(int); void sub_01963e20(); };

// @baa 0x01963e20
void C_01963e20::sub_01963e20() { sub_01962840(0); }

struct C_01963e30 { void sub_01962920(int); void sub_01963e30(); };

// @baa 0x01963e30
void C_01963e30::sub_01963e30() { sub_01962920(0); }

struct C_01964300 { int a, b, c; C_01964300(); };

// @baa 0x01964300
C_01964300::C_01964300() : a(0), b(0), c(0) {}

struct S018d4a70_01964310 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019625e0(int NewNum);
    void sub_01964310();
};

// @baa 0x01964310
void S018d4a70_01964310::sub_01964310()
{
    S018d4a70_01964310* Self = this;
    sub_019625e0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01964330 { int a, b, c; C_01964330(); };

// @baa 0x01964330
C_01964330::C_01964330() : a(0), b(0), c(0) {}

struct S018d4a70_019643c0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01962840(int NewNum);
    void sub_019643c0();
};

// @baa 0x019643c0
void S018d4a70_019643c0::sub_019643c0()
{
    S018d4a70_019643c0* Self = this;
    sub_01962840(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_01964420 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01962920(int NewNum);
    void sub_01964420();
};

// @baa 0x01964420
void S018d4a70_01964420::sub_01964420()
{
    S018d4a70_01964420* Self = this;
    sub_01962920(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01964d00 { int a, b, c; C_01964d00(); };

// @baa 0x01964d00
C_01964d00::C_01964d00() : a(0), b(0), c(0) {}

struct S018d4a70_01964d10 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01962840(int NewNum);
    void sub_01964d10();
};

// @baa 0x01964d10
void S018d4a70_01964d10::sub_01964d10()
{
    S018d4a70_01964d10* Self = this;
    sub_01962840(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01964e10 { int a, b, c; C_01964e10(); };

// @baa 0x01964e10
C_01964e10::C_01964e10() : a(0), b(0), c(0) {}

struct S018d4a70_01964e20 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01962920(int NewNum);
    void sub_01964e20();
};

// @baa 0x01964e20
void S018d4a70_01964e20::sub_01964e20()
{
    S018d4a70_01964e20* Self = this;
    sub_01962920(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct V_01964f30 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void g();
};

struct O_01964f30 { char pad[16]; V_01964f30* p; void sub_01964f30(); };

// @baa 0x01964f30
void O_01964f30::sub_01964f30() { p->g(); }

struct V_01964f40 {
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
    virtual void v12();
    virtual void v13();
    virtual void g();
};

struct O_01964f40 { char pad[16]; V_01964f40* p; void sub_01964f40(); };

// @baa 0x01964f40
void O_01964f40::sub_01964f40() { p->g(); }

struct GFxSpriteDef {
    BYTE sub_01964f80(INT a, INT b);
};

// @baa 0x01964f80
BYTE GFxSpriteDef::sub_01964f80(INT a, INT b)
{
    return 0;
}

struct C_01965030 { int a, b, c; C_01965030(); };

// @baa 0x01965030
C_01965030::C_01965030() : a(0), b(0), c(0) {}

struct S018d4a70_01965040 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01962840(int NewNum);
    void sub_01965040();
};

// @baa 0x01965040
void S018d4a70_01965040::sub_01965040()
{
    S018d4a70_01965040* Self = this;
    sub_01962840(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019657f0 { void sub_01964440(int); void sub_019657f0(); };

// @baa 0x019657f0
void C_019657f0::sub_019657f0() { sub_01964440(0); }

struct S018d4a70_01965870 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01964440(int NewNum);
    void sub_01965870();
};

// @baa 0x01965870
void S018d4a70_01965870::sub_01965870()
{
    S018d4a70_01965870* Self = this;
    sub_01964440(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_01965930 { int a, b, c; C_01965930(); };

// @baa 0x01965930
C_01965930::C_01965930() : a(0), b(0), c(0) {}

struct S018d4a70_01965940 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01964440(int NewNum);
    void sub_01965940();
};

// @baa 0x01965940
void S018d4a70_01965940::sub_01965940()
{
    S018d4a70_01965940* Self = this;
    sub_01964440(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct A_01965b50 { virtual void sub_01966970(); char pad[12]; };

struct B_01965b50 { virtual void sub_01966970(); };

struct C_01965b50 : A_01965b50, B_01965b50 { virtual void sub_01966970(); C_01965b50(); };

C_01965b50::C_01965b50() {}

// @baa 0x01965b50
void C_01965b50::sub_01966970() {}

struct A_01966150 { virtual void sub_019669f0(); char pad[104]; };

struct B_01966150 { virtual void sub_019669f0(); };

struct C_01966150 : A_01966150, B_01966150 { virtual void sub_019669f0(); C_01966150(); };

C_01966150::C_01966150() {}

// @baa 0x01966150
void C_01966150::sub_019669f0() {}

struct A_01966160 { virtual void sub_019669f0(); char pad[12]; };

struct B_01966160 { virtual void sub_019669f0(); };

struct C_01966160 : A_01966160, B_01966160 { virtual void sub_019669f0(); C_01966160(); };

C_01966160::C_01966160() {}

// @baa 0x01966160
void C_01966160::sub_019669f0() {}

struct A_01966170 { virtual void sub_01966140(); char pad[104]; };

struct B_01966170 { virtual void sub_01966140(); };

struct C_01966170 : A_01966170, B_01966170 { virtual void sub_01966140(); C_01966170(); };

C_01966170::C_01966170() {}

// @baa 0x01966170
void C_01966170::sub_01966140() {}

struct V_01966190 {
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
    virtual void g(int a0);
};

struct O_01966190 { char pad[152]; V_01966190* p; void sub_01966190(int a0); };

// @baa 0x01966190
void O_01966190::sub_01966190(int a0) { p->g(a0); }

struct A_01966510 { virtual void sub_01966910(); char pad[12]; };

struct B_01966510 { virtual void sub_01966910(); };

struct C_01966510 : A_01966510, B_01966510 { virtual void sub_01966910(); C_01966510(); };

C_01966510::C_01966510() {}

// @baa 0x01966510
void C_01966510::sub_01966910() {}

struct A_01966b40 { virtual void sub_01968030(); char pad[12]; };

struct B_01966b40 { virtual void sub_01968030(); };

struct C_01966b40 : A_01966b40, B_01966b40 { virtual void sub_01968030(); C_01966b40(); };

C_01966b40::C_01966b40() {}

// @baa 0x01966b40
void C_01966b40::sub_01968030() {}

struct C_019680a0 {
    void sub_019680a0(undefined4 *);
};

// @baa 0x019680a0
void C_019680a0::sub_019680a0(undefined4 * param_2)
{
    int param_1 = (int)this;
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  return;
}

struct C_01968170 { int a, b, c; C_01968170(); };

// @baa 0x01968170
C_01968170::C_01968170() : a(0), b(0), c(0) {}

struct C_019682a0 { int a; C_019682a0(int); };

// @baa 0x019682a0
C_019682a0::C_019682a0(int x) : a(x) {}

struct C_019682f0 { int a; C_019682f0(int); };

// @baa 0x019682f0
C_019682f0::C_019682f0(int x) : a(x) {}

struct C_019683e0 { int a, b, c; C_019683e0(); };

// @baa 0x019683e0
C_019683e0::C_019683e0() : a(0), b(0), c(0) {}

void __stdcall sub_018d7170(int Obj);
// @baa 0x01968450
void __cdecl sub_01968450(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01968460
void __cdecl sub_01968460(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01968470
void __cdecl sub_01968470(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01968480
void __cdecl sub_01968480(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01968490
void __cdecl sub_01968490(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019684a0
void __cdecl sub_019684a0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019684b0
void __cdecl sub_019684b0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

struct C_019684c0 { int a, b; C_019684c0(int, int); };

// @baa 0x019684c0
C_019684c0::C_019684c0(int x, int y) : a(x), b(y) {}

struct C_019684e0 {
    int sub_019684e0(int);
};

// @baa 0x019684e0
int C_019684e0::sub_019684e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_019684f0 {
    bool sub_019684f0();
};

// @baa 0x019684f0
bool C_019684f0::sub_019684f0(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

void __stdcall sub_018d7150(int Index);
// @baa 0x01968530
void sub_01968530(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x01968550
void sub_01968550(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x01968570
void sub_01968570(int Value)
{
    sub_018d7150(Value * 4);
}

struct C_01968640 {
    int sub_01968640(int);
};

// @baa 0x01968640
int C_01968640::sub_01968640(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

// @baa 0x01968650
uint sub_01968650(uint * param_1)
{
  return *param_1 >> 6 ^ param_1[2] ^ *param_1;
}

struct V_019686e0 {
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
    virtual void v12();
    virtual void g();
};

struct O_019686e0 { char pad[12]; V_019686e0* p; void sub_019686e0(); };

// @baa 0x019686e0
void O_019686e0::sub_019686e0() { p->g(); }

struct C_01969760 { C_01969760* sub_01969760(void); };

// @baa 0x01969760
C_01969760* C_01969760::sub_01969760(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0196a250 { int a, b, c; C_0196a250(); };

// @baa 0x0196a250
C_0196a250::C_0196a250() : a(0), b(0), c(0) {}

struct C_0196a7e0 {
    undefined4 * sub_0196a7e0();
};

int sub_018d3d50(void);
extern undefined * g_023f9e74;
// @baa 0x0196a7e0
undefined4 * C_0196a7e0::sub_0196a7e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f9e74);
  return param_1;
}

struct C_0196a840 { int a; C_0196a840(int); };

// @baa 0x0196a840
C_0196a840::C_0196a840(int x) : a(x) {}

struct C_0196aba0 {
    undefined4 sub_0196aba0();
};

// @baa 0x0196aba0
undefined4 C_0196aba0::sub_0196aba0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_0196ad90 {
    float10 sub_0196ad90();
};

// @baa 0x0196ad90
float10 C_0196ad90::sub_0196ad90(void)
{
    int param_1 = (int)this;
  return (float10)*(float *)(param_1 + 0x20);
}

struct GFxCharacter {
    virtual void v00() {}
    virtual void v01() {}
    virtual void v02() {}
    virtual void v03() {}
    virtual void v04() {}
    virtual void v05() {}
    virtual void v06() {}
    virtual void v07() {}
    virtual void v08() {}
    virtual void v09() {}
    virtual void v10() {}
    virtual void v11() {}
    virtual void v12() {}
    virtual void v13() {}
    virtual void v14() {}
    virtual void v15() {}
    virtual void v16() {}
    virtual void v17() {}
    virtual void v18() {}
    virtual void v19() {}
    virtual void v20() {}
    virtual void v21() {}
    virtual void sub_0196b1c0();
    virtual void v23() {}
};

// @baa 0x0196b1c0
void GFxCharacter::sub_0196b1c0()
{
    v23();
}

struct C_0196b720 {
    undefined4 * sub_0196b720();
};

extern undefined * g_023fa38c;
// @baa 0x0196b720
undefined4 * C_0196b720::sub_0196b720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023fa38c);
  return param_1;
}

struct C_0196b790 { int a, b; C_0196b790(int, int); };

// @baa 0x0196b790
C_0196b790::C_0196b790(int x, int y) : a(x), b(y) {}

struct C_0196b7b0 { int a, b; C_0196b7b0(int, int); };

// @baa 0x0196b7b0
C_0196b7b0::C_0196b7b0(int x, int y) : a(x), b(y) {}

struct C_0196b810 {
    int sub_0196b810(int);
};

// @baa 0x0196b810
int C_0196b810::sub_0196b810(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x20 + 8 + *param_1;
}

struct C_0196b820 {
    int sub_0196b820(int);
};

// @baa 0x0196b820
int C_0196b820::sub_0196b820(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x20 + 8 + *param_1;
}

struct C_0196b830 { C_0196b830* sub_0196b830(void); };

// @baa 0x0196b830
C_0196b830* C_0196b830::sub_0196b830(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0196b840 {
    int sub_0196b840(int);
};

// @baa 0x0196b840
int C_0196b840::sub_0196b840(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_0196b850 {
    bool sub_0196b850();
};

// @baa 0x0196b850
bool C_0196b850::sub_0196b850(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

struct C_0196b8a0 { int a, b; C_0196b8a0(int, int); };

// @baa 0x0196b8a0
C_0196b8a0::C_0196b8a0(int x, int y) : a(x), b(y) {}

struct C_0196b940 {
    int sub_0196b940(int);
};

// @baa 0x0196b940
int C_0196b940::sub_0196b940(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_0196b950 {
    uint sub_0196b950();
};

// @baa 0x0196b950
uint C_0196b950::sub_0196b950(void)
{
    uint * param_1 = (uint *)this;
  uint uVar1;
  uVar1 = param_1[1];
  if ((*param_1 & 0x20000) != 0) {
    uVar1 = uVar1 ^ (int)(short)param_1[2];
  }
  return uVar1;
}

struct S {
    int Unk0; // 0x00
    BYTE sub_0196ba80(S* Other);
};

// @baa 0x0196ba80
BYTE S::sub_0196ba80(S* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct A_0196bc30 { virtual void sub_0196ca90(); char pad[12]; };

struct B_0196bc30 { virtual void sub_0196ca90(); };

struct C_0196bc30 : A_0196bc30, B_0196bc30 { virtual void sub_0196ca90(); C_0196bc30(); };

C_0196bc30::C_0196bc30() {}

// @baa 0x0196bc30
void C_0196bc30::sub_0196ca90() {}

struct A_0196c3c0 { virtual void sub_0196e2d0(); char pad[12]; };

struct B_0196c3c0 { virtual void sub_0196e2d0(); };

struct C_0196c3c0 : A_0196c3c0, B_0196c3c0 { virtual void sub_0196e2d0(); C_0196c3c0(); };

C_0196c3c0::C_0196c3c0() {}

// @baa 0x0196c3c0
void C_0196c3c0::sub_0196e2d0() {}

struct C_0196c5b0 { int a, b; C_0196c5b0(int, int); };

// @baa 0x0196c5b0
C_0196c5b0::C_0196c5b0(int x, int y) : a(x), b(y) {}

struct C_0196e480 {
    undefined4 sub_0196e480(uint *);
    int sub_0196c790(int, int);
};

// @baa 0x0196e480
undefined4 C_0196e480::sub_0196e480(uint * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  uint uVar2;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar2 = param_2[1];
  if ((*param_2 & 0x20000) != 0) {
    uVar2 = uVar2 ^ (int)(short)param_2[2];
  }
  uVar1 = ((C_0196e480 *)(this))->sub_0196c790((int)(param_2), *(uint *)(*param_1 + 4) & uVar2);
  return uVar1;
}

struct C_0196e4c0 {
    undefined4 sub_0196e4c0(int *);
    int sub_0196c830(int, int);
};

// @baa 0x0196e4c0
undefined4 C_0196e4c0::sub_0196e4c0(int * param_2)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ((C_0196e4c0 *)(this))->sub_0196c830((int)(param_2), *(uint *)(*param_2 + 0x10) & *(uint *)(*param_1 + 4));
  return uVar1;
}

struct C_0196ebe0 {
    undefined4 * sub_0196ebe0(undefined4);
    int sub_0190cb60(int);
};

// @baa 0x0196ebe0
undefined4 * C_0196ebe0::sub_0196ebe0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_0196ebe0 *)(this))->sub_0190cb60(param_2);
  return param_1;
}

struct C_0196eda0 {
    undefined4 * sub_0196eda0(undefined4 *);
    int sub_0190cb60(int);
};

// @baa 0x0196eda0
undefined4 * C_0196eda0::sub_0196eda0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  ((C_0196eda0 *)(((char *)this + 0x10)))->sub_0190cb60((int)(param_2 + 4));
  return param_1;
}

struct C_0196edd0 {
    undefined4 * sub_0196edd0(undefined4);
    int sub_0190cb60(int);
};

// @baa 0x0196edd0
undefined4 * C_0196edd0::sub_0196edd0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_0196edd0 *)(this))->sub_0190cb60(param_2);
  return param_1;
}

// @baa 0x0196c660
INT __stdcall sub_0196c660(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x0196c820
INT __stdcall sub_0196c820(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x0196ace0
unsigned int __stdcall sub_0196ace0(unsigned int * param)
{
    unsigned int v = param[1];
    if ((*param & 0x20000) != 0)
    {
        v ^= *(short*)&param[2];
    }
    return v;
}

extern double g_023f9e60;
struct S01968240
{
	char _Reserved[0x20];
	int Value;

	float sub_01968240(int arg);
};

// @baa 0x01968240
float S01968240::sub_01968240(int arg)
{
	return (float)((double)Value * g_023f9e60 / (double)arg);
}

struct F0196c770Data
{
	unsigned int Flags;
	int Value;
	short Delta;
};

// @baa 0x0196c770
int __stdcall sub_0196c770(const F0196c770Data* Data)
{
	int Value = Data->Value;
	if (Data->Flags & 0x20000)
	{
		Value ^= Data->Delta;
	}
	return Value;
}

struct sub_0196c640_Desc
{
	DWORD Flags;	// bit 0x20000: value is a signed short
	DWORD Value;
	// signed value lives in the next word, offset 8
	short Sign;
};

// @baa 0x0196c640
unsigned __stdcall sub_0196c640(const sub_0196c640_Desc* Desc)
{
	DWORD Value = Desc->Value;
	if (Desc->Flags & 0x20000)
		Value ^= (DWORD)(short)Desc->Sign;
	return Value;
}

extern BYTE sub_0196b8c0(INT Value);
struct C_0196bae0
{
    INT Value;

    INT sub_0196bae0();
};

// @baa 0x0196bae0
INT C_0196bae0::sub_0196bae0()
{
    return sub_0196b8c0(Value);
}

struct Sub
{
    char pad_00[0xc];
    INT RefCount;

    void sub_01971650();
};

struct C_0196b870
{
    Sub* Object;

    void sub_0196b870();
};

// @baa 0x0196b870
void C_0196b870::sub_0196b870()
{
    Sub* Object = this->Object;
    if (--Object->RefCount == 0)
        Object->sub_01971650();
}

struct TThreeWord {
    unsigned int w0, w1, w2;

    TThreeWord* sub_01968180(unsigned int a, unsigned int b, unsigned int c) {
        w0 = a;
        w1 = b;
        w2 = c;
        return this;
    }
};

// @baa 0x01968180
void caller(TThreeWord* t, unsigned int a, unsigned int b, unsigned int c) {
    t->sub_01968180(a, b, c);
}

struct UGFxDataStoreSubscriber_ : public UGFxDataStoreSubscriber {
    INT sub_0196e740(); // 0x0196e740
    INT sub_0196b020(); // 0x0196b020
    INT sub_0196ec00(); // 0x0196ec00
};

// @baa 0x0196ec00
INT UGFxDataStoreSubscriber_::sub_0196ec00()
{
    INT R = sub_0196e740();
    if (R)
        return R + 8;
    return sub_0196b020();
}

// 0196e3c0: decrement the reference count held by the node this handle points
// to; when the count reaches zero the node detaches itself (0x01971650). The
// handle is then marked closed (-2).
struct GFxHandleNode
{
    int      m_RefCount;   // +0x00
    void*    m_Prev;       // +0x04
    void*    m_Next;       // +0x08
    int      m_References; // +0x0c

    void Detach(); // 0x01971650
};

struct GFxHandle
{
    int             m_State; // +0x00
    GFxHandleNode*  m_Node;  // +0x04

    void Release(); // 0x0196e3c0
};

// @baa 0x0196e3c0
void GFxHandle::Release()
{
    GFxHandleNode* Node = m_Node;
    if (--Node->m_References == 0)
        Node->Detach();
    m_State = -2;
}
