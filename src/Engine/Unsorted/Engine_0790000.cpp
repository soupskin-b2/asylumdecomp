// Engine_0790000.cpp (part 1 of 3): 104 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_00790520 { int a, b, c; C_00790520(); };

// @baa 0x00790520
C_00790520::C_00790520() : a(0), b(0), c(0) {}

// @baa 0x00790530
void __stdcall sub_00790530(int a0, int a1) {  }

struct C { int sub_00790820(void); };

// @baa 0x00790820
int C::sub_00790820(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_00549310();
// @baa 0x00790830
void sub_00790830(void) { sub_00549310(); }

struct C_007908a0 {
    int sub_007908a0(int);
};

// @baa 0x007908a0
int C_007908a0::sub_007908a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007908e0 {
    int sub_007908e0(int);
};

// @baa 0x007908e0
int C_007908e0::sub_007908e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00790b00
int UBrushComponent::sub_00790b00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00790b10
int UBrushComponent::sub_00790b10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00790b20
int UBrushComponent::sub_00790b20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00790c10 {
    int sub_00790c10();
};

// @baa 0x00790c10
int C_00790c10::sub_00790c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00790c20 {
    int sub_00790c20();
};

// @baa 0x00790c20
int C_00790c20::sub_00790c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00790c30 {
    int sub_00790c30();
};

// @baa 0x00790c30
int C_00790c30::sub_00790c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_006632e0(void);
extern undefined * g_01f16148;
// @baa 0x007912f0
undefined4 * ULensFlare::sub_007912f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006632e0();
  *param_1 = (undefined4)(&g_01f16148);
  return param_1;
}

int sub_0053dfa0(...);
int sub_00656790(void);
// @baa 0x00791310
undefined4 ULensFlare::sub_00791310(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0078fd80();
// @baa 0x00791330
void sub_00791330(void) { sub_0078fd80(); }

void sub_0078fde0();
// @baa 0x00791340
void sub_00791340(void) { sub_0078fde0(); }

void sub_007902a0();
// @baa 0x00791350
void sub_00791350(void) { sub_007902a0(); }

void sub_00790300();
// @baa 0x00791360
void sub_00791360(void) { sub_00790300(); }

void sub_007903a0();
// @baa 0x00791370
void sub_00791370(void) { sub_007903a0(); }

struct C_00792a30 {
    undefined4 sub_00792a30();
};

int sub_007927f0(...);
// @baa 0x00792a30
undefined4 C_00792a30::sub_00792a30(void)
{
    int param_1 = (int)this;

  sub_007927f0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  return 0x10;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00792ba0 { void* Data; int Num; int Max; void sub_00792ba0(); };

// @baa 0x00792ba0
void C_00792ba0::sub_00792ba0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_00793ff0(void);
// @baa 0x00794050
undefined4 ULensFlare::sub_00794050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00793ff0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00794490 {
    undefined4 sub_00794490(byte);
};

int sub_007927a0(void);
// @baa 0x00794490
undefined4 C_00794490::sub_00794490(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007927a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00794810 { C_00794810* sub_00794810(void); };

// @baa 0x00794810
C_00794810* C_00794810::sub_00794810(void) { return this; }

struct C_00794820 { C_00794820* sub_00794820(void); };

// @baa 0x00794820
C_00794820* C_00794820::sub_00794820(void) { return this; }

struct C_00794830 { C_00794830* sub_00794830(void); };

// @baa 0x00794830
C_00794830* C_00794830::sub_00794830(void) { return this; }

struct C_view {
    int sub_00790960(int, int);
};

// @baa 0x00794840
int UBrushComponent::sub_00794840(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_00790960((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_00794a80 {
    int sub_00793510(int, int);
};

// @baa 0x00794a80
int UBrushComponent::sub_00794a80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00794a80 *)(this))->sub_00793510((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

extern char g_01ecdfdc[];
struct C_00795630 { void sub_00795630(void); };

// @baa 0x00795630
void C_00795630::sub_00795630(void) { *(int*)((char*)this + 0) = (int)g_01ecdfdc; }

// @baa 0x00795640
int sub_00795640(void) { return 0; }

struct C_00795650 {
    uint sub_00795650();
};

// @baa 0x00795650
uint C_00795650::sub_00795650(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x78) >> 10 & 7;
}

struct C_00795660 { int sub_00795660(void); };

// @baa 0x00795660
int C_00795660::sub_00795660(void) { return *(int*)((char*)this + 28); }

struct C_00795670 { int sub_00795670(void); };

// @baa 0x00795670
int C_00795670::sub_00795670(void) { return *(int*)((char*)this + 28); }

// @baa 0x00795830
int sub_00795830(void) { return 1690; }

struct C_00795840 { int sub_00795840(void); };

// @baa 0x00795840
int C_00795840::sub_00795840(void) { return *(int*)((char*)this + 4); }

struct C_007958e0 {
    undefined4 * sub_007958e0(byte);
};

// @baa 0x007958e0
undefined4 * C_007958e0::sub_007958e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfdc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00795e90 {
    int sub_00795e90();
};

// @baa 0x00795e90
int C_00795e90::sub_00795e90(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_00795ea0 {
    int sub_00795ea0();
};

// @baa 0x00795ea0
int C_00795ea0::sub_00795ea0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0x5b0;
}

struct C_00795fd0 {
    undefined4 sub_00795fd0(byte);
};

int sub_00795eb0(void);
// @baa 0x00795fd0
undefined4 C_00795fd0::sub_00795fd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00795eb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00798640();
// @baa 0x00799330
void sub_00799330(void) { sub_00798640(); }

void sub_007986a0();
// @baa 0x00799340
void sub_00799340(void) { sub_007986a0(); }

void sub_00798710();
// @baa 0x00799350
void sub_00799350(void) { sub_00798710(); }

void sub_00798770();
// @baa 0x00799360
void sub_00799360(void) { sub_00798770(); }

void sub_007987e0();
// @baa 0x00799660
void sub_00799660(void) { sub_007987e0(); }

void sub_007988c0();
// @baa 0x00799670
void sub_00799670(void) { sub_007988c0(); }

void sub_00798930();
// @baa 0x00799680
void sub_00799680(void) { sub_00798930(); }

int sub_00794da0(void);
// @baa 0x007996d0
int UBrushComponent::sub_007996d0(void)
{
    int param_1 = (int)this;

  sub_00794da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_007876e0(void);
int sub_00799030(...);
extern undefined4 g_026b43b4;
// @baa 0x00799730
int sub_00799730(void)
{
  if (g_026b43b4 == 0) {
    g_026b43b4 = sub_00799030(L"Engine");
    sub_007876e0();
  }
  return g_026b43b4;
}

int sub_00787840(void);
int sub_007990f0(...);
extern undefined4 g_026b43b8;
// @baa 0x00799760
int sub_00799760(void)
{
  if (g_026b43b8 == 0) {
    g_026b43b8 = sub_007990f0(L"Engine");
    sub_00787840();
  }
  return g_026b43b8;
}

void sub_007985d0();
// @baa 0x00799790
void sub_00799790(void) { sub_007985d0(); }

int sub_00785b10(void);
int sub_00798d30(...);
extern undefined4 g_026b4390;
// @baa 0x007997a0
int sub_007997a0(void)
{
  if (g_026b4390 == 0) {
    g_026b4390 = sub_00798d30(L"Engine");
    sub_00785b10();
  }
  return g_026b4390;
}

// @baa 0x0079b0e0
IMPLEMENT_CLASS_AT(ADynamicCameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 13);

// @baa 0x0079b1f0
bool ADynamicCameraActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0079b230
IMPLEMENT_CLASS_AT(AAnimatedCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 14);

// @baa 0x0079b340
bool AAnimatedCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0079bdd0
int UBrushComponent::sub_0079bdd0(void)
{
    int param_1 = (int)this;

  sub_00794da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0079f2c0
int sub_0079f2c0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01f28a50;
// @baa 0x0079f2d0
undefined4 * UObject::sub_0079f2d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f28a50);
  return param_1;
}

// @baa 0x0079f2f0
IMPLEMENT_CLASS_AT(UBloomEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDOFEffect.cpp", 10);

// @baa 0x0079f350
// @baa 0x0079f370
undefined4 sub_0079f370(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_0079f380 { C_0079f380* sub_0079f380(int a0); };

// @baa 0x0079f380
C_0079f380* C_0079f380::sub_0079f380(int a0) { return this; }

struct C_0079f390 { C_0079f390* sub_0079f390(int a0); };

// @baa 0x0079f390
C_0079f390* C_0079f390::sub_0079f390(int a0) { return this; }

struct C_0079f3a0 { C_0079f3a0* sub_0079f3a0(int a0); };

// @baa 0x0079f3a0
C_0079f3a0* C_0079f3a0::sub_0079f3a0(int a0) { return this; }

extern "C" int g_026c47e0;
extern "C" int g_026c47e4;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0079f3b0();
};

// @baa 0x0079f3b0
void UObjectThunk::sub_0079f3b0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c47e0, g_026c47e4, 0), 0, 0);
}

extern "C" int g_026c543c;
extern "C" int g_026c5440;
struct UObjectThunk_0079f3e0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0079f3e0();
};

// @baa 0x0079f3e0
void UObjectThunk_0079f3e0::sub_0079f3e0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c543c, g_026c5440, 0), 0, 0);
}

int sub_0077b8f0(...);
int sub_00783330(void);
extern undefined4 g_026b3c84;
// @baa 0x0079f690
int sub_0079f690(void)
{
  if (g_026b3c84 == 0) {
    g_026b3c84 = sub_0077b8f0(L"Engine");
    sub_00783330();
  }
  return g_026b3c84;
}

struct C_0079f6c0 { C_0079f6c0* sub_0079f6c0(int a0); };

// @baa 0x0079f6c0
C_0079f6c0* C_0079f6c0::sub_0079f6c0(int a0) { return this; }

int sub_00779af0(...);
int sub_0077efc0(void);
extern undefined4 g_026b3b94;
// @baa 0x0079f720
int sub_0079f720(void)
{
  if (g_026b3b94 == 0) {
    g_026b3b94 = sub_00779af0(L"Engine");
    sub_0077efc0();
  }
  return g_026b3b94;
}

struct C_0079f750 { C_0079f750* sub_0079f750(int a0); };

// @baa 0x0079f750
C_0079f750* C_0079f750::sub_0079f750(int a0) { return this; }

int sub_006ca060(...);
int sub_006cc830(void);
extern undefined4 g_026b0d90;
// @baa 0x0079f7a0
int sub_0079f7a0(void)
{
  if (g_026b0d90 == 0) {
    g_026b0d90 = sub_006ca060(L"Engine");
    sub_006cc830();
  }
  return g_026b0d90;
}

// @baa 0x0079f7d0
int sub_0079f7d0(int a0, int a1) { return a1; }

// @baa 0x0079f7e0
IMPLEMENT_CLASS_AT(UDistributionFloatConstant, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 8);

// @baa 0x0079f850
// @baa 0x0079f870
undefined4 sub_0079f870(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x0079f880
int sub_0079f880(int a0, int a1) { return a1; }

// @baa 0x0079f890
int sub_0079f890(int a0, int a1) { return a1; }

// @baa 0x0079f8a0
int sub_0079f8a0(int a0, int a1) { return a1; }

// @baa 0x0079f8b0
int sub_0079f8b0(int a0, int a1) { return a1; }

// @baa 0x0079fb80
undefined4 sub_0079fb80(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x0079fb90
int sub_0079fb90(int a0, int a1) { return a1; }

extern undefined * g_01f29168;
// @baa 0x0079fba0
undefined4 * UObject::sub_0079fba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f29168);
  return param_1;
}

// @baa 0x0079fbc0
IMPLEMENT_CLASS_AT(UCheatManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnController.cpp", 20);

// @baa 0x0079fc20
// @baa 0x0079fc40
undefined4 sub_0079fc40(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_01f29278;
// @baa 0x0079fc50
undefined4 * UObject::sub_0079fc50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f29278);
  return param_1;
}

// @baa 0x0079fc70
IMPLEMENT_CLASS_AT(UForceFeedbackManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnForceFeedbackWaveform.cpp", 10);

// @baa 0x0079fcd0
void UForceFeedbackManager::vf_110(int a0, int a1) {  }

// @baa 0x0079fce0
void UForceFeedbackManager::vf_114(int a0) {  }

// @baa 0x0079fcf0
struct C_0079fd40 { C_0079fd40* sub_0079fd40(void); };

// @baa 0x0079fd40
C_0079fd40* C_0079fd40::sub_0079fd40(void) { *(int*)((char*)this + 256) = 0; return this; }

struct C_0079fd50 {
    undefined4 sub_0079fd50();
};

// @baa 0x0079fd50
undefined4 C_0079fd50::sub_0079fd50(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return *(undefined4 *)(param_1 + 0x2c);
  }
  return 0;
}

struct C_0079fe20 { int sub_0079fe20(void); };

// @baa 0x0079fe20
int C_0079fe20::sub_0079fe20(void) { return *(int*)((char*)this + 0); }

struct C_0079fe30 {
    int sub_0079fe30(int);
};

// @baa 0x0079fe30
int C_0079fe30::sub_0079fe30(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) * param_2 + *(int *)(param_1 + 0x20);
}

struct C_0079fe40 {
    int sub_0079fe40(int);
};

// @baa 0x0079fe40
int C_0079fe40::sub_0079fe40(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) * param_2 + *(int *)(param_1 + 0x20);
}

struct C_0079fe50 { int sub_0079fe50(void); };

// @baa 0x0079fe50
int C_0079fe50::sub_0079fe50(void) { return *(int*)((char*)this + 36); }

struct C_0079fe60 { int sub_0079fe60(void); };

// @baa 0x0079fe60
int C_0079fe60::sub_0079fe60(void) { return *(int*)((char*)this + 40); }

struct C_0079fe70 { int sub_0079fe70(void); };

// @baa 0x0079fe70
int C_0079fe70::sub_0079fe70(void) { return *(int*)((char*)this + 36); }

struct C_0079fe80 { int sub_0079fe80(void); };

// @baa 0x0079fe80
int C_0079fe80::sub_0079fe80(void) { return *(int*)((char*)this + 44); }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x0079fe90
void sub_0079fe90(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_00df3e30(void);
int sub_00e16780(...);
extern undefined4 g_026c5ec4;
// @baa 0x0079feb0
int sub_0079feb0(void)
{
  if (g_026c5ec4 == 0) {
    g_026c5ec4 = sub_00e16780(L"Engine");
    sub_00df3e30();
  }
  return g_026c5ec4;
}

// @baa 0x0079fee0
// @baa 0x0079fff0
int UCheatManager::vf_000(void) { return 1; }

int sub_007654e0(void);
struct UAudioComponent_ : public UAudioComponent
{
    void sub_00793c40(void);
    void sub_00791770(void);
};

// @baa 0x00793c40
void UAudioComponent_::sub_00793c40(void)
{
    sub_007654e0();
    if (bAutoPlay)
        sub_00791770();
}
