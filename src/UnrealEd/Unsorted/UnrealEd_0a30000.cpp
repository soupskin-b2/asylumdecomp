// UnrealEd_0a30000.cpp: 45 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00a33770
void sub_00a33770(void) {  }

struct F1b0 {
    char pad0[0x2ec];
    float f2ec;      // +0x2ec
    float f2f0;      // +0x2f0
    char  pad1[4];   // +0x2f4
    float f2f8;      // +0x2f8
    float f2fc;      // +0x2fc
    int   i300;      // +0x300
    float f304;      // +0x304
    char  pad2[4];   // +0x308
    float f30c;      // +0x30c
    char  pad3[4];   // +0x310
    float f314;      // +0x314
    float f318;      // +0x318
    char  pad4[8];   // +0x31c
    unsigned int flags324; // +0x324
    unsigned int flags328; // +0x328
    unsigned int flags32c; // +0x32c
    float f330;      // +0x330
};

struct VObj {
    virtual void s00();
    virtual void s04();
    virtual void s08();
    virtual void s0c(float);
    virtual void s10();
    virtual void s14(float);
    virtual void s18();
    virtual void s1c(float);
    virtual void s20();
    virtual void s24(float);
    virtual void s28();
    virtual void s2c();
    virtual void s30();
    virtual void s34(float);
    virtual void s38();
    virtual void s3c(float);
    virtual void s40();
    virtual void s44();
    virtual void s48();
    virtual void s4c();
    virtual void s50(int);
    virtual void s54();
    virtual void s58();
    virtual void s5c();
    virtual void s60();
    virtual void s64();
    virtual void s68();
    virtual void s6c();
    virtual void s70();
    virtual void s74();
    virtual void s78();
    virtual void s7c();
    virtual void s80();
    virtual void s84();
    virtual void s88();
    virtual void s8c();
    virtual void s90();
    virtual void s94();
    virtual void s98();
    virtual void s9c();
    virtual void sA0();
    virtual void sA4();
    virtual void sA8();
    virtual void sAC();
    virtual void sB0();
    virtual void sB4();
    virtual void sB8();
    virtual void sBC();
    virtual void sC0();
    virtual void sC4();
    virtual void sC8();
    virtual void sCC();
    virtual void sD0();
    virtual void sD4();
    virtual void sD8();
    virtual void sDC(float);
    virtual void sE0();
    virtual void sE4(float);
    virtual void sE8();
    virtual void sEC();
    virtual void sF0();
    virtual void sF4();
    virtual void sF8();
    virtual void sFC();
    virtual void s100();
    virtual void s104();
    virtual void s108();
    virtual void s10C();
    virtual void s110();
    virtual void s114(float);
    virtual void s118();
    virtual void s11C();
    virtual void s120(unsigned int);
    virtual int  s124();
};

struct C {
    char pad0[0x1b0];
    F1b0* p1b0;   // +0x1b0
    char pad1[0x44c - 0x1b4];
    VObj* pobj;   // +0x44c
    void sub_00a33820();
};

// @baa 0x00a33820
void C::sub_00a33820()
{
    VObj* o = pobj;
    if (o != 0 && p1b0 != 0) {
        o->s0c(p1b0->f2ec);
        o->s14(p1b0->f2f0);
        o->s3c(p1b0->f2f8);
        o->s1c(p1b0->f2fc);
        o->s24(p1b0->f304);
        o->s114(p1b0->f30c);
        o->s50(p1b0->i300);
        o->sE4(p1b0->f314);
        o->sDC(p1b0->f318);
        o->s34(p1b0->f330);
        unsigned int r = o->s124();
        unsigned int v = p1b0->flags324;
        if (v & 2) r |= 0x80; else r &= ~0x80u;
        if (v & 4) r |= 0x800; else r &= ~0x800u;
        unsigned int g = p1b0->flags32c;
        if (g & 1) r |= 0x100; else r &= ~0x100u;
        if (g & 1) r |= 8; else r &= ~8u;
        o->s120(r);
    }
}

struct C_00a33b60 { C_00a33b60* sub_00a33b60(int a0); };

// @baa 0x00a33b60
C_00a33b60* C_00a33b60::sub_00a33b60(int a0) { *(int*)((char*)this + 0) = 0; return this; }

int sub_00d6b1c0(void);
int sub_00d875e0(...);
extern undefined4 g_026c597c;
// @baa 0x00a33b70
int sub_00a33b70(void)
{
  if (g_026c597c == 0) {
    g_026c597c = sub_00d875e0(L"Engine");
    sub_00d6b1c0();
  }
  return g_026c597c;
}

// @baa 0x00a33ba0
int sub_00a33ba0(int a0, int a1) { return a1; }

// @baa 0x00a33bb0
int sub_00a33bb0(int a0, int a1) { return a1; }

// @baa 0x00a33bc0
int sub_00a33bc0(int a0, int a1) { return a1; }

int sub_00d876a0(...);
int sub_00d88cb0(void);
extern undefined4 g_026c5980;
// @baa 0x00a33bd0
int sub_00a33bd0(void)
{
  if (g_026c5980 == 0) {
    g_026c5980 = sub_00d876a0(L"Engine");
    sub_00d88cb0();
  }
  return g_026c5980;
}

// @baa 0x00a33c00
int sub_00a33c00(int a0, int a1) { return a1; }

// @baa 0x00a33c10
int sub_00a33c10(int a0, int a1) { return a1; }

// @baa 0x00a33c20
int sub_00a33c20(int a0, int a1) { return a1; }

// @baa 0x00a33c30
int sub_00a33c30(int a0, int a1) { return a1; }

// @baa 0x00a33c40
int sub_00a33c40(int a0, int a1) { return a1; }

struct C_00a33c50 { C_00a33c50* sub_00a33c50(int a0); };

// @baa 0x00a33c50
C_00a33c50* C_00a33c50::sub_00a33c50(int a0) { return this; }

struct C_00a33c60 { C_00a33c60* sub_00a33c60(int a0); };

// @baa 0x00a33c60
C_00a33c60* C_00a33c60::sub_00a33c60(int a0) { return this; }

struct C_00a33c70 { C_00a33c70* sub_00a33c70(int a0); };

// @baa 0x00a33c70
C_00a33c70* C_00a33c70::sub_00a33c70(int a0) { return this; }

struct C_00a33c80 { C_00a33c80* sub_00a33c80(int a0); };

// @baa 0x00a33c80
C_00a33c80* C_00a33c80::sub_00a33c80(int a0) { return this; }

// @baa 0x00a33de0
undefined4 sub_00a33de0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00a33df0
IMPLEMENT_CLASS_AT(UForceFieldShape, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ForceFieldShape.cpp", 13);

// @baa 0x00a33e50
int UForceFieldShape::vf_10c(void) { return 0; }

// @baa 0x00a33e60
int sub_005c7a20(void);
extern undefined * g_01fc0840;
// @baa 0x00a33e80
undefined4 * UObject::sub_00a33e80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fc0840);
  return param_1;
}

struct C_00a33ea0 { C_00a33ea0* sub_00a33ea0(int a0); };

// @baa 0x00a33ea0
C_00a33ea0* C_00a33ea0::sub_00a33ea0(int a0) { return this; }

// @baa 0x00a33f10
int sub_00a33f10(int a0, int a1) { return a1; }

extern undefined * g_01fc0950;
// @baa 0x00a33f20
undefined4 * UObject::sub_00a33f20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fc0950);
  return param_1;
}

// @baa 0x00a33f40
IMPLEMENT_CLASS_AT(UForceFieldShapeBox, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ForceFieldShapeBox.cpp", 13);

// @baa 0x00a33fa0
struct C_00a33fc0 {
    int sub_00a33fc0(int arg1);
};

// @baa 0x00a33fc0
int C_00a33fc0::sub_00a33fc0(int arg1)
{
    return (int)this;
}

struct C_00a33fd0 { C_00a33fd0* sub_00a33fd0(int a0); };

// @baa 0x00a33fd0
C_00a33fd0* C_00a33fd0::sub_00a33fd0(int a0) { return this; }

// @baa 0x00a34060
int sub_00a34060(int a0, int a1) { return a1; }

extern undefined * g_01fc0a60;
// @baa 0x00a34070
undefined4 * UObject::sub_00a34070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fc0a60);
  return param_1;
}

// @baa 0x00a34090
IMPLEMENT_CLASS_AT(UForceFieldShapeCapsule, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ForceFieldShapeCapsule.cpp", 13);

// @baa 0x00a340f0
struct C_00a34110 {
    C_00a34110* sub_00a34110(int arg1);
};

// @baa 0x00a34110
C_00a34110* C_00a34110::sub_00a34110(int arg1)
{
    return this;
}

// @baa 0x00a34160
int sub_00a34160(int a0, int a1) { return a1; }

extern undefined * g_01fc0b70;
// @baa 0x00a34170
undefined4 * UObject::sub_00a34170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fc0b70);
  return param_1;
}

// @baa 0x00a34190
IMPLEMENT_CLASS_AT(UForceFieldShapeSphere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ForceFieldShapeSphere.cpp", 13);

// @baa 0x00a341f0
// @baa 0x00a34210
// @baa 0x00a34320
int UForceFieldShape::vf_000(void) { return 1; }

// @baa 0x00a34330
bool UForceFieldShape::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a34370
int UForceFieldShapeBox::vf_000(void) { return 1; }

// @baa 0x00a34380
int UForceFieldShapeCapsule::vf_000(void) { return 1; }

// @baa 0x00a34390
int UForceFieldShapeSphere::vf_000(void) { return 1; }

// @baa 0x00a343a0
IMPLEMENT_CLASS_AT(ANxForceFieldGeneric, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxForceFieldGeneric.cpp", 14);
