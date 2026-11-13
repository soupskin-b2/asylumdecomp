// CommonGame_1530000.cpp (part 1 of 4): 117 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_01531520();
// @baa 0x01535120
void sub_01535120(void) { sub_01531520(); }

void sub_01531770();
// @baa 0x015365c0
void sub_015365c0(void) { sub_01531770(); }

int sub_0150e0f0(void);
int sub_01534d90(...);
extern undefined4 g_026e0b44;
// @baa 0x01537e40
int sub_01537e40(void)
{
  if (g_026e0b44 == 0) {
    g_026e0b44 = sub_01534d90(L"CommonGame");
    sub_0150e0f0();
  }
  return g_026e0b44;
}

int sub_0150e670(void);
int sub_01534e50(...);
extern undefined4 g_026e0b54;
// @baa 0x01537e90
int sub_01537e90(void)
{
  if (g_026e0b54 == 0) {
    g_026e0b54 = sub_01534e50(L"CommonGame");
    sub_0150e670();
  }
  return g_026e0b54;
}

// @baa 0x0153ac60
IMPLEMENT_CLASS_AT(URDistributionVectorParticleArrayParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameEffectClasses.cpp", 4);

// @baa 0x0153ac90
// @baa 0x0153ada0
int URDistributionVectorParticleArrayParameter::vf_000(void) { return 1; }

// @baa 0x0153adb0
bool URDistributionVectorParticleArrayParameter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0153b070
int ARRotateActor::vf_000(void) { return 1; }

// @baa 0x0153b080
bool ARRotateActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0153b300
int sub_0153b300(int a0, int a1) { return a1; }

// @baa 0x0153b310
int sub_0153b310(int a0, int a1) { return a1; }

// @baa 0x0153b320
int sub_0153b320(int a0, int a1) { return a1; }

// @baa 0x0153b750
int sub_0153b750(int a0, int a1) { return a1; }

struct C { C* sub_0153b760(int a0); };

// @baa 0x0153b760
C* C::sub_0153b760(int a0) { return this; }

// @baa 0x0153b7f0
int sub_0153b7f0(int a0, int a1) { return a1; }

struct C_0153b800 { C_0153b800* sub_0153b800(int a0); };

// @baa 0x0153b800
C_0153b800* C_0153b800::sub_0153b800(int a0) { return this; }

// @baa 0x0153b870
int sub_0153b870(int a0, int a1) { return a1; }

// @baa 0x0153b880
int sub_0153b880(int a0, int a1) { return a1; }

// @baa 0x0153bb90
int sub_0153bb90(int a0, int a1) { return a1; }

struct C_0153bba0 { C_0153bba0* sub_0153bba0(int a0); };

// @baa 0x0153bba0
C_0153bba0* C_0153bba0::sub_0153bba0(int a0) { return this; }

// @baa 0x0153bbf0
undefined4 sub_0153bbf0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x0153bc00
int sub_0153bc00(int a0, int a1) { return a1; }

// @baa 0x0153bc10
int sub_0153bc10(int a0, int a1) { return a1; }

// @baa 0x0153bc20
int sub_0153bc20(int a0, int a1) { return a1; }

// @baa 0x0153bc30
int ARBreakablePropStatic::vf_000(void) { return 1; }

// @baa 0x0153bd50
int ARKActorSpawnable::vf_000(void) { return 1; }

// @baa 0x0153dc40
int sub_0153dc40(int a0, int a1) { return a1; }

// @baa 0x0153dc50
int sub_0153dc50(int a0, int a1) { return a1; }

struct C_0153e1c0 { int sub_0153e1c0(void); };

// @baa 0x0153e1c0
int C_0153e1c0::sub_0153e1c0(void) { return *(int*)((char*)this + 4); }

struct C_0153e1d0 {
    void sub_0153e1d0();
};

int sub_0053df70(...);
// @baa 0x0153e1d0
void C_0153e1d0::sub_0153e1d0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0153e200 { int sub_0153e200(void); };

// @baa 0x0153e200
int C_0153e200::sub_0153e200(void) { return *(int*)((char*)this + 4); }

struct C_0153e210 { int sub_0153e210(void); };

// @baa 0x0153e210
int C_0153e210::sub_0153e210(void) { return *(int*)((char*)this + 4); }

struct C_0153e220 { int sub_0153e220(void); };

// @baa 0x0153e220
int C_0153e220::sub_0153e220(void) { return *(int*)((char*)this + 4); }

struct C_0153e230 { int sub_0153e230(void); };

// @baa 0x0153e230
int C_0153e230::sub_0153e230(void) { return *(int*)((char*)this + 4); }

struct C_0153e240 { int sub_0153e240(void); };

// @baa 0x0153e240
int C_0153e240::sub_0153e240(void) { return *(int*)((char*)this + 4); }

struct C_0153e250 { int sub_0153e250(void); };

// @baa 0x0153e250
int C_0153e250::sub_0153e250(void) { return *(int*)((char*)this + 4); }

struct C_0153e260 { C_0153e260* sub_0153e260(int a0); };

// @baa 0x0153e260
C_0153e260* C_0153e260::sub_0153e260(int a0) { return this; }

struct C_0153e270 { int sub_0153e270(void); };

// @baa 0x0153e270
int C_0153e270::sub_0153e270(void) { return *(int*)((char*)this + 0); }

struct C_0153e280 { C_0153e280* sub_0153e280(int a0); };

// @baa 0x0153e280
C_0153e280* C_0153e280::sub_0153e280(int a0) { return this; }

struct C_0153e290 { int sub_0153e290(void); };

// @baa 0x0153e290
int C_0153e290::sub_0153e290(void) { return *(int*)((char*)this + 0); }

struct C_0153e2a0 { C_0153e2a0* sub_0153e2a0(int a0); };

// @baa 0x0153e2a0
C_0153e2a0* C_0153e2a0::sub_0153e2a0(int a0) { return this; }

struct C_0153e2b0 { C_0153e2b0* sub_0153e2b0(int a0); };

// @baa 0x0153e2b0
C_0153e2b0* C_0153e2b0::sub_0153e2b0(int a0) { return this; }

struct C_0153e2c0 { C_0153e2c0* sub_0153e2c0(int a0); };

// @baa 0x0153e2c0
C_0153e2c0* C_0153e2c0::sub_0153e2c0(int a0) { return this; }

struct C_0153e2d0 { int sub_0153e2d0(void); };

// @baa 0x0153e2d0
int C_0153e2d0::sub_0153e2d0(void) { return *(int*)((char*)this + 0); }

struct C_0153e2e0 { C_0153e2e0* sub_0153e2e0(int a0); };

// @baa 0x0153e2e0
C_0153e2e0* C_0153e2e0::sub_0153e2e0(int a0) { return this; }

struct C_0153e2f0 { int sub_0153e2f0(void); };

// @baa 0x0153e2f0
int C_0153e2f0::sub_0153e2f0(void) { return *(int*)((char*)this + 0); }

struct C_0153e370 { C_0153e370* sub_0153e370(int a0); };

// @baa 0x0153e370
C_0153e370* C_0153e370::sub_0153e370(int a0) { return this; }

struct C_0153e380 { int sub_0153e380(void); };

// @baa 0x0153e380
int C_0153e380::sub_0153e380(void) { return *(int*)((char*)this + 0); }

struct C_0153e390 { C_0153e390* sub_0153e390(int a0); };

// @baa 0x0153e390
C_0153e390* C_0153e390::sub_0153e390(int a0) { return this; }

struct C_0153e3a0 { int sub_0153e3a0(void); };

// @baa 0x0153e3a0
int C_0153e3a0::sub_0153e3a0(void) { return *(int*)((char*)this + 0); }

struct C_0153e3b0 { C_0153e3b0* sub_0153e3b0(int a0); };

// @baa 0x0153e3b0
C_0153e3b0* C_0153e3b0::sub_0153e3b0(int a0) { return this; }

struct C_0153e3c0 { int sub_0153e3c0(void); };

// @baa 0x0153e3c0
int C_0153e3c0::sub_0153e3c0(void) { return *(int*)((char*)this + 0); }

struct C_0153e440 {
    int sub_0153e440();
};

// @baa 0x0153e440
int C_0153e440::sub_0153e440(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0153e450 { int a, b; C_0153e450(int, int); };

// @baa 0x0153e450
C_0153e450::C_0153e450(int x, int y) : a(x), b(y) {}

struct C_0153e470 { int sub_0153e470(void); };

// @baa 0x0153e470
int C_0153e470::sub_0153e470(void) { return *(int*)((char*)this + 0); }

struct C_0153e480 { int sub_0153e480(void); };

// @baa 0x0153e480
int C_0153e480::sub_0153e480(void) { return *(int*)((char*)this + 0); }

// @baa 0x0153e500
int sub_0153e500(int a0) { return *(int*)a0; }

// @baa 0x0153e510
undefined4 sub_0153e510(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_0153e550 {
    void sub_0153e550(int *);
};

// @baa 0x0153e550
void C_0153e550::sub_0153e550(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_0153e560 { int sub_0153e560(void); };

// @baa 0x0153e560
int C_0153e560::sub_0153e560(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0153e5a0 { int sub_0153e5a0(void); };

// @baa 0x0153e5a0
int C_0153e5a0::sub_0153e5a0(void) { return *(int*)((char*)this + 0); }

struct C_0153e5b0 { int sub_0153e5b0(void); };

// @baa 0x0153e5b0
int C_0153e5b0::sub_0153e5b0(void) { return *(int*)((char*)this + 0); }

struct C_0153e630 { int sub_0153e630(void); };

// @baa 0x0153e630
int C_0153e630::sub_0153e630(void) { return *(int*)((char*)this + 0); }

struct C_0153e640 { int sub_0153e640(void); };

// @baa 0x0153e640
int C_0153e640::sub_0153e640(void) { return *(int*)((char*)this + 0); }

struct C_0153e650 { int sub_0153e650(void); };

// @baa 0x0153e650
int C_0153e650::sub_0153e650(void) { return *(int*)((char*)this + 0); }

struct C_0153e660 { int sub_0153e660(void); };

// @baa 0x0153e660
int C_0153e660::sub_0153e660(void) { return *(int*)((char*)this + 0); }

struct C_0153e670 { int sub_0153e670(void); };

// @baa 0x0153e670
int C_0153e670::sub_0153e670(void) { return *(int*)((char*)this + 0); }

struct C_0153e680 { int sub_0153e680(void); };

// @baa 0x0153e680
int C_0153e680::sub_0153e680(void) { return *(int*)((char*)this + 0); }

struct C_0153e6b0 { int sub_0153e6b0(void); };

// @baa 0x0153e6b0
int C_0153e6b0::sub_0153e6b0(void) { return *(int*)((char*)this + 0); }

struct C_0153e6c0 { int sub_0153e6c0(void); };

// @baa 0x0153e6c0
int C_0153e6c0::sub_0153e6c0(void) { return *(int*)((char*)this + 20); }

struct C_0153e6d0 { int sub_0153e6d0(void); };

// @baa 0x0153e6d0
int C_0153e6d0::sub_0153e6d0(void) { return *(int*)((char*)this + 20); }

struct C_0153e820 { int sub_0153e820(void); };

// @baa 0x0153e820
int C_0153e820::sub_0153e820(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[20]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_0153e830(INT Index) const;
};

// @baa 0x0153e830
const E* S::sub_0153e830(INT Index) const
{
    return &Items(Index);
}

struct E_0153eec0 { BYTE Bytes[12]; };

struct S_0153eec0 {
    TArray<E_0153eec0> Items; // 0x00
    E_0153eec0* sub_0153eec0(INT Index);
};

// @baa 0x0153eec0
E_0153eec0* S_0153eec0::sub_0153eec0(INT Index)
{
    return &Items(Index);
}

struct S_0153ef10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0153ef10(INT Index);
};

// @baa 0x0153ef10
DWORD* S_0153ef10::sub_0153ef10(INT Index)
{
    return &Items(Index);
}

struct E_0153ef60 { BYTE Bytes[44]; };

struct S_0153ef60 {
    TArray<E_0153ef60> Items; // 0x00
    E_0153ef60* sub_0153ef60(INT Index);
};

// @baa 0x0153ef60
E_0153ef60* S_0153ef60::sub_0153ef60(INT Index)
{
    return &Items(Index);
}

struct S_0153efb0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0153efb0(INT Index);
};

// @baa 0x0153efb0
DWORD* S_0153efb0::sub_0153efb0(INT Index)
{
    return &Items(Index);
}

struct E_0153f060 { BYTE Bytes[16]; };

struct S_0153f060 {
    TArray<E_0153f060> Items; // 0x00
    E_0153f060* sub_0153f060(INT Index);
};

// @baa 0x0153f060
E_0153f060* S_0153f060::sub_0153f060(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0153f0b0(INT Index);
};

// @baa 0x0153f0b0
FFaceFXElement* UFxRenderWidget::sub_0153f0b0(INT Index)
{
	return &BoneArray(Index);
}

struct E_0153f100 { BYTE Bytes[48]; };

struct S_0153f100 {
    TArray<E_0153f100> Items; // 0x00
    E_0153f100* sub_0153f100(INT Index);
};

// @baa 0x0153f100
E_0153f100* S_0153f100::sub_0153f100(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_0153f150 {
    int sub_0153f150(int);
    int sub_0153e3d0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0153f150
int C_0153f150::sub_0153f150(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0153f150 *)(this))->sub_0153e3d0(param_2);
  sub_01a37612((void *)(iVar1 * 0x30 + *param_1),0,param_2 * 0x30);
  return iVar1;
}

struct C_0153f190 {
    int sub_0153f190(int);
};

// @baa 0x0153f190
int C_0153f190::sub_0153f190(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0153f200 {
    int sub_0153f200(int);
};

// @baa 0x0153f200
int C_0153f200::sub_0153f200(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0153f210
void __stdcall sub_0153f210(int a0, int a1) {  }

struct S_0153f220 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0153f220(INT Index);
};

// @baa 0x0153f220
DWORD* S_0153f220::sub_0153f220(INT Index)
{
    return &Items(Index);
}

struct C_0153f2d0 {
    int sub_0153f2d0(int);
};

// @baa 0x0153f2d0
int C_0153f2d0::sub_0153f2d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0153f2e0
void __stdcall sub_0153f2e0(int a0, int a1) {  }

struct C_0153f2f0 {
    int sub_0153f2f0(int);
};

// @baa 0x0153f2f0
int C_0153f2f0::sub_0153f2f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0153f300 {
    int sub_0153f300(int);
};

// @baa 0x0153f300
int C_0153f300::sub_0153f300(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_0153f310 {
    int sub_0153f310(int);
};

// @baa 0x0153f310
int C_0153f310::sub_0153f310(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0153f320
void __stdcall sub_0153f320(int a0, int a1) {  }

struct C_0153f330 {
    int sub_0153f330(int);
};

// @baa 0x0153f330
int C_0153f330::sub_0153f330(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0153f340
void __stdcall sub_0153f340(int a0, int a1) {  }

struct C_0153f350 {
    int sub_0153f350(int);
};

// @baa 0x0153f350
int C_0153f350::sub_0153f350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0153f360
void __stdcall sub_0153f360(int a0, int a1) {  }

struct C_0153f370 {
    int sub_0153f370(int);
};

// @baa 0x0153f370
int C_0153f370::sub_0153f370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x0153f380
void __stdcall sub_0153f380(int a0, int a1) {  }

struct UFxRenderWidget_0153f390
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0153f390(INT Index);
};

// @baa 0x0153f390
FFaceFXElement* UFxRenderWidget_0153f390::sub_0153f390(INT Index)
{
	return &BoneArray(Index);
}

struct C_0153f410 {
    int sub_0153f410(int);
};

// @baa 0x0153f410
int C_0153f410::sub_0153f410(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0153f420 {
    int sub_0153f420();
};

// @baa 0x0153f420
int C_0153f420::sub_0153f420(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0153f440 {
    int sub_0153f440(int);
};

// @baa 0x0153f440
int C_0153f440::sub_0153f440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0153f450 {
    int sub_0153f450();
};

// @baa 0x0153f450
int C_0153f450::sub_0153f450(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0153f470
void sub_0153f470(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

int sub_005c7a20(void);
extern undefined * g_022e5508;
// @baa 0x0153fbf0
undefined4 * UObject::sub_0153fbf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5508);
  return param_1;
}

// @baa 0x0153fc10
IMPLEMENT_CLASS_AT(URActorFactoryMoverNoCL, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 8);

// @baa 0x0153fcb0
IMPLEMENT_CLASS_AT(URActorFactoryRigidBody, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 7);

// @baa 0x0153fd10
extern undefined * g_022e5758;
// @baa 0x0153ff40
undefined4 * UObject::sub_0153ff40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5758);
  return param_1;
}

// @baa 0x0153ff60
int URSeqVar_AnalogControlFloat::vf_198(int a0) { return 0; }

// @baa 0x0153ff70
IMPLEMENT_CLASS_AT(URSeqVar_AnalogControlFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 11);

extern FName g_026e0c1c;
 /* COMMONGAME_InitCollideDamageScale */
struct ARBreakablePropStatic_ : public ARBreakablePropStatic
{
    void eventInitCollideDamageScale(FLOAT Scale);
};

// @baa 0x0153bbb0
/* The InitCollideDamageScale script event's generated glue (CommonGameClasses.h); called on the
 * spawned ARBreakablePropStatic by URActorFactoryBreakablePropStatic (0154a3a0). The parameter's
 * script name isn't known. */
void ARBreakablePropStatic_::eventInitCollideDamageScale(FLOAT Scale)
{
    struct RBreakablePropStatic_eventInitCollideDamageScale_Parms
    {
        FLOAT Scale;
    };
    RBreakablePropStatic_eventInitCollideDamageScale_Parms Parms;
    Parms.Scale = Scale;
    ProcessEvent(FindFunctionChecked(g_026e0c1c), &Parms);
}

// @baa 0x0153b0c0
/* UObject slot 0x1c (a placeholder vf_01c in the kit; UE3's PostLoad there): a rotating actor
 * remembers the rotation it was placed with. */
void ARRotateActor::PostLoad()
{
    Super::PostLoad();
    BaseRotation = Rotation;
}

/* Kit gap: TArray has no AddZeroed (Array.h); same body as UE3's. */
template<class T> struct TArray_ : public TArray<T>
{
	FORCEINLINE INT AddZeroed(INT Count = 1)
	{
		const INT Index = this->Add(Count);
		appMemzero((T*)this->GetData() + Index, Count * sizeof(T));
		return Index;
	}
};

// @baa 0x0153fe10
/* Grows LastSeenTime as needed and stamps the current time at Idx. */
void ARPathNode::UpdateLastSeenTime(INT Idx)
{
	if (LastSeenTime.Num() <= Idx)
	{
		((TArray_<FLOAT>&)LastSeenTime).AddZeroed(Idx - LastSeenTime.Num() + 1);
	}
	LastSeenTime(Idx) = WorldInfo->TimeSeconds;
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

// @baa 0x0153fea0
/* Slot 0x3b8 (unnamed in the kit): seconds since path user Index last saw this node (a large time for an unknown
 * user). */
FLOAT ARPathNode::GetTimeSinceLastSighting(INT Index)
{
	if (LastSeenTime.Num() > Index)
	{
		return WorldInfo->TimeSeconds - ((TArrayAt_<FLOAT>&)LastSeenTime).At(Index);
	}
	return 50000.f;
}

#line 833 "candidate.cpp"
