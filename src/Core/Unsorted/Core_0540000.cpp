// Core_0540000.cpp (part 1 of 2): 198 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x005402d0
int sub_005402d0(int a0, int a1) { return a1; }

struct C { int sub_005412d0(void); };

// @baa 0x005412d0
int C::sub_005412d0(void) { return *(int*)((char*)this + 0); }

struct C_005412e0 { int a, b, c; C_005412e0(); };

// @baa 0x005412e0
C_005412e0::C_005412e0() : a(0), b(0), c(0) {}

struct C_005412f0 { int sub_005412f0(void); };

// @baa 0x005412f0
int C_005412f0::sub_005412f0(void) { return *(int*)((char*)this + 0); }

struct C_00541300 { int sub_00541300(void); };

// @baa 0x00541300
int C_00541300::sub_00541300(void) { return *(int*)((char*)this + 0); }

struct C_00541310 { C_00541310* sub_00541310(void); };

// @baa 0x00541310
C_00541310* C_00541310::sub_00541310(void) { return this; }

struct C_00541320 { int sub_00541320(void); };

// @baa 0x00541320
int C_00541320::sub_00541320(void) { return *(int*)((char*)this + 0); }

struct C_00541330 { int sub_00541330(void); };

// @baa 0x00541330
int C_00541330::sub_00541330(void) { return *(int*)((char*)this + 0); }

struct C_00541340 { int sub_00541340(void); };

// @baa 0x00541340
int C_00541340::sub_00541340(void) { return *(int*)((char*)this + 0); }

struct C_00541350 { int sub_00541350(void); };

// @baa 0x00541350
int C_00541350::sub_00541350(void) { return *(int*)((char*)this + 0); }

struct C_00541360 {
    void sub_00541360(undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00541360
void C_00541360::sub_00541360(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3);
  return;
}

// @baa 0x005413c0
int sub_005413c0(int param_1, int param_2)
{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// @baa 0x005414d0
int sub_005414d0(int param_1)
{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}

// @baa 0x005414e0
float10 sub_005414e0(float param_1)
{
  return (float10)param_1 * (float10)param_1;
}

// @baa 0x00541510
uint sub_00541510(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00541530
uint sub_00541530(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00541550
uint sub_00541550(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct C_00542070 {
    void sub_00542070();
};

extern "C" __declspec(dllimport) int GetCurrentThreadId(...);
// @baa 0x00542070
void C_00542070::sub_00542070(void)
{
    int param_1 = (int)this;

  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x3c) = DVar1;
  return;
}

// @baa 0x005421a0
int UDistributionFloat::vf_000(void) { return 1; }

// @baa 0x005421b0
bool UDistributionFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_01e730a4[];
struct C_00542820 { C_00542820* sub_00542820(void); };

// @baa 0x00542820
C_00542820* C_00542820::sub_00542820(void) { *(int*)((char*)this + 0) = (int)g_01e730a4; return this; }

// @baa 0x00542830
int __stdcall sub_00542830(int a0, int a1) { return 0; }

// @baa 0x00542840
void __stdcall sub_00542840(int a0) {  }

// @baa 0x00542850
int __stdcall sub_00542850(int a0, int a1) { return 0; }

// @baa 0x00542860
void __stdcall sub_00542860(int a0) {  }

// @baa 0x00542870
int sub_00542870(void) { return 0; }

// @baa 0x005428f0
int __stdcall sub_005428f0(int a0, int a1) { return 0; }

void sub_00543b50();
// @baa 0x00543c20
void sub_00543c20(void) { sub_00543b50(); }

struct T_00543d30 { BYTE b[12]; };

// @baa 0x00543d30
template INT TArray<T_00543d30>::Add(INT);

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00543dc0
int UObject::sub_00543dc0(int param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return *param_1 + -4 + (param_1[1] - param_2) * 4;
}

typedef uint size_t;

struct C_view {
    int sub_0040cf70(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00543e00
int UObject::sub_00543e00(size_t param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_0040cf70(param_2);
  sub_01a37612((void *)(*param_1 + iVar1),0,param_2);
  return iVar1;
}

struct C_00543e30 { int a, b, c; C_00543e30(); };

// @baa 0x00543e30
C_00543e30::C_00543e30() : a(0), b(0), c(0) {}

// @baa 0x00543e40
int UObject::sub_00543e40(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00543e50(INT Index);
};

// @baa 0x00543e50
DWORD* S::sub_00543e50(INT Index)
{
    return &Items(Index);
}

struct C_00543ea0 { int a, b, c; C_00543ea0(); };

// @baa 0x00543ea0
C_00543ea0::C_00543ea0() : a(0), b(0), c(0) {}

struct T_00544490 { BYTE b[16]; };

// @baa 0x00544490
template INT TArray<T_00544490>::Add(INT);

struct T_00544520 { BYTE b[80]; };

// @baa 0x00544520
template INT TArray<T_00544520>::Add(INT);

struct T_005445b0 { BYTE b[12]; };

// @baa 0x005445b0
template INT TArray<T_005445b0>::Add(INT);

struct T_005446a0 { BYTE b[4]; };

// @baa 0x005446a0
template INT TArray<T_005446a0>::Add(INT);

struct C_00544730 {
    int sub_00544730(int);
};

// @baa 0x00544730
int C_00544730::sub_00544730(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00544740
void __stdcall sub_00544740(int a0, int a1) {  }

struct C_00544750 {
    int sub_00544750(int);
};

// @baa 0x00544750
int C_00544750::sub_00544750(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00544760
void __stdcall sub_00544760(int a0, int a1) {  }

struct C_00544770 {
    int sub_00544770(int);
};

// @baa 0x00544770
int C_00544770::sub_00544770(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00544780 {
    int sub_00544780(int);
};

// @baa 0x00544780
int C_00544780::sub_00544780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00544790
void __stdcall sub_00544790(int a0, int a1) {  }

struct C_005447f0 {
    int sub_005447f0(int);
};

// @baa 0x005447f0
int C_005447f0::sub_005447f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00544800
void __stdcall sub_00544800(int a0, int a1) {  }

struct C_00544810 {
    int sub_00544810(int);
};

// @baa 0x00544810
int C_00544810::sub_00544810(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00544820
void __stdcall sub_00544820(int a0, int a1) {  }

struct C_00544880 {
	int sub_0053ea70(int, int);
	void sub_00544880(int, int);
};

// @baa 0x00544880
void C_00544880::sub_00544880(int Arg1, int Arg2)
{
	Arg2 = 4;
	sub_0053ea70(Arg1, Arg2);
}

struct C_00544890 {
    int sub_00544890();
};

// @baa 0x00544890
int C_00544890::sub_00544890(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005448a0 {
    int sub_005448a0();
};

// @baa 0x005448a0
int C_005448a0::sub_005448a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005448b0 {
    int sub_005448b0();
};

// @baa 0x005448b0
int C_005448b0::sub_005448b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

int sub_0053ec70(void);
extern undefined * g_01e72a60;
// @baa 0x005448c0
undefined4 * UTexture2D::sub_005448c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  return param_1;
}

struct C_005448e0 {
    int sub_005448e0();
};

// @baa 0x005448e0
int C_005448e0::sub_005448e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005448f0 {
    int sub_005448f0();
};

// @baa 0x005448f0
int C_005448f0::sub_005448f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00544900 {
    int sub_00544900();
};

// @baa 0x00544900
int C_00544900::sub_00544900(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00544910 {
    int sub_00544910();
};

// @baa 0x00544910
int C_00544910::sub_00544910(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00544920 {
    int sub_00544920();
};

// @baa 0x00544920
int C_00544920::sub_00544920(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00544930 {
    int sub_00544930();
};

// @baa 0x00544930
int C_00544930::sub_00544930(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct S_00544940 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00544940(INT Index) const;
};

// @baa 0x00544940
const DWORD* S_00544940::sub_00544940(INT Index) const
{
    return &Items(Index);
}

struct C_00544990 { int sub_00544990(void); };

// @baa 0x00544990
int C_00544990::sub_00544990(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005449a0 { int sub_005449a0(void); };

// @baa 0x005449a0
int C_005449a0::sub_005449a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct E { BYTE Bytes[16]; };

struct S_005449b0 {
    TArray<E> Items; // 0x00
    E* sub_005449b0(INT Index);
};

// @baa 0x005449b0
E* S_005449b0::sub_005449b0(INT Index)
{
    return &Items(Index);
}

struct S_00544a00 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00544a00(INT Index);
};

// @baa 0x00544a00
DWORD* S_00544a00::sub_00544a00(INT Index)
{
    return &Items(Index);
}

struct C_00544a50 { int sub_00544a50(void); };

// @baa 0x00544a50
int C_00544a50::sub_00544a50(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_00544a60 {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S_00544a60 *sub_00544a60(const S_00544a60 &Other);
};

// @baa 0x00544a60
S_00544a60 *S_00544a60::sub_00544a60(const S_00544a60 &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

struct C_00544a80 { int sub_00544a80(void); };

// @baa 0x00544a80
int C_00544a80::sub_00544a80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_005458d0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_005458d0(INT Index) const;
};

// @baa 0x005458d0
const DWORD* S_005458d0::sub_005458d0(INT Index) const
{
    return &Items(Index);
}

struct E_00545920 { BYTE Bytes[12]; };

struct S_00545920 {
    TArray<E_00545920> Items; // 0x00
    const E_00545920* sub_00545920(INT Index) const;
};

// @baa 0x00545920
const E_00545920* S_00545920::sub_00545920(INT Index) const
{
    return &Items(Index);
}

struct S_00545970 {
    TArray<E> Items; // 0x00
    const E* sub_00545970(INT Index) const;
};

// @baa 0x00545970
const E* S_00545970::sub_00545970(INT Index) const
{
    return &Items(Index);
}

struct E_005459c0 { BYTE Bytes[40]; };

struct S_005459c0 {
    TArray<E_005459c0> Items; // 0x00
    const E_005459c0* sub_005459c0(INT Index) const;
};

// @baa 0x005459c0
const E_005459c0* S_005459c0::sub_005459c0(INT Index) const
{
    return &Items(Index);
}

struct E_00545a10 { BYTE Bytes[80]; };

struct S_00545a10 {
    TArray<E_00545a10> Items; // 0x00
    const E_00545a10* sub_00545a10(INT Index) const;
};

// @baa 0x00545a10
const E_00545a10* S_00545a10::sub_00545a10(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00545a60
void sub_00545a60(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00545c50
int UDistributionFloat::vf_110(void) { return 1; }

// @baa 0x00545c60
int UDistributionFloat::vf_114(int a0) { return 0; }

// @baa 0x00545c70
uint UDistributionFloat::vf_120(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x40) & 1;
}

int sub_00545be0(void);
int sub_005c7a70(...);
// @baa 0x00545c80
undefined4 UDistributionFloat::sub_00545c80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00545be0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x44);
  }
  return param_1;
}

struct C_00545cd0 { int sub_00545cd0(void); };

// @baa 0x00545cd0
int C_00545cd0::sub_00545cd0(void) { return *(int*)((char*)this + 60); }

extern undefined * g_01e73400;
// @baa 0x00545ce0
undefined4 * UTexture2D::sub_00545ce0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  param_1[0x20] = param_2;
  *param_1 = (undefined4)(&g_01e73400);
  param_1[0x1f] = 0;
  return param_1;
}

// @baa 0x00545d10
void UTexture2D::sub_00545d10(int a0) { *(int*)((char*)this + 124) = a0; }

// @baa 0x00545d20
int UTexture2D::sub_00545d20(void) { return *(int*)((char*)this + 124); }

// @baa 0x00545d30
undefined4 UTexture2D::sub_00545d30(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x80) + 4);
}

struct E_00545e50 { BYTE Bytes[12]; };

struct S_00545e50 {
    TArray<E_00545e50> Items; // 0x00
    E_00545e50* sub_00545e50(INT Index);
};

// @baa 0x00545e50
E_00545e50* S_00545e50::sub_00545e50(INT Index)
{
    return &Items(Index);
}

struct S_00545ea0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00545ea0(INT Index);
};

// @baa 0x00545ea0
DWORD* S_00545ea0::sub_00545ea0(INT Index)
{
    return &Items(Index);
}

struct S_00545ef0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00545ef0(INT Index);
};

// @baa 0x00545ef0
DWORD* S_00545ef0::sub_00545ef0(INT Index)
{
    return &Items(Index);
}

struct S_00545f80 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00545f80(INT Index) const;
};

// @baa 0x00545f80
const DWORD* S_00545f80::sub_00545f80(INT Index) const
{
    return &Items(Index);
}

struct S_00545fd0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00545fd0(INT Index) const;
};

// @baa 0x00545fd0
const QWORD* S_00545fd0::sub_00545fd0(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00546060
int UObject::sub_00546060(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00546070
int UObject::sub_00546070(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00546080
void __stdcall sub_00546080(int a0, int a1) {  }

// @baa 0x00546100
int UObject::sub_00546100(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x00546110
void __stdcall sub_00546110(int a0, int a1) {  }

// @baa 0x00546120
int UObject::sub_00546120(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00546130
int UObject::sub_00546130(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00546140
int UObject::sub_00546140(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x00546150
int UObject::sub_00546150(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_005461a0 { C_005461a0* sub_005461a0(void); };

// @baa 0x005461a0
C_005461a0* C_005461a0::sub_005461a0(void) { *(int*)((char*)this + 4) = 0; return this; }

struct S_005461b0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_005461b0(INT Index);
};

// @baa 0x005461b0
QWORD* S_005461b0::sub_005461b0(INT Index)
{
    return &Items(Index);
}

struct E_00546200 { BYTE Bytes[12]; };

struct S_00546200 {
    TArray<E_00546200> Items; // 0x00
    E_00546200* sub_00546200(INT Index);
};

// @baa 0x00546200
E_00546200* S_00546200::sub_00546200(INT Index)
{
    return &Items(Index);
}

struct S_00546250 {
    TArray<E> Items; // 0x00
    E* sub_00546250(INT Index);
};

// @baa 0x00546250
E* S_00546250::sub_00546250(INT Index)
{
    return &Items(Index);
}

struct E_005462a0 { BYTE Bytes[40]; };

struct S_005462a0 {
    TArray<E_005462a0> Items; // 0x00
    E_005462a0* sub_005462a0(INT Index);
};

// @baa 0x005462a0
E_005462a0* S_005462a0::sub_005462a0(INT Index)
{
    return &Items(Index);
}

struct E_005462f0 { BYTE Bytes[80]; };

struct S_005462f0 {
    TArray<E_005462f0> Items; // 0x00
    E_005462f0* sub_005462f0(INT Index);
};

// @baa 0x005462f0
E_005462f0* S_005462f0::sub_005462f0(INT Index)
{
    return &Items(Index);
}

struct E_00546340 { BYTE Bytes[12]; };

struct S_00546340 {
    TArray<E_00546340> Items; // 0x00
    E_00546340* sub_00546340(INT Index);
};

// @baa 0x00546340
E_00546340* S_00546340::sub_00546340(INT Index)
{
    return &Items(Index);
}

// @baa 0x00546390
uint UObject::sub_00546390(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 4) | -(uint)(*(uint *)(param_1 + 4) == 0) & param_1;
}

// @baa 0x005463b0
int UObject::sub_005463b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005463c0
int UObject::sub_005463c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

int sub_005413d0(...);
// @baa 0x00546420
void sub_00546420(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

// @baa 0x00546430
void UObject::sub_00546430(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00546450
int UObject::sub_00546450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00546460
int UObject::sub_00546460(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00546470
int UObject::sub_00546470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00546480
int UObject::sub_00546480(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005464a0
int UObject::sub_005464a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005464c0 { C_005464c0* sub_005464c0(void); };

// @baa 0x005464c0
C_005464c0* C_005464c0::sub_005464c0(void) { *(int*)((char*)this + 16) = 0; return this; }

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
	FFaceFXElement* sub_00546560(INT Index);
};

// @baa 0x00546560
FFaceFXElement* UFxRenderWidget::sub_00546560(INT Index)
{
	return &BoneArray(Index);
}

struct E_005465b0 { BYTE Bytes[32]; };

struct S_005465b0 {
    TArray<E_005465b0> Items; // 0x00
    E_005465b0* sub_005465b0(INT Index);
};

// @baa 0x005465b0
E_005465b0* S_005465b0::sub_005465b0(INT Index)
{
    return &Items(Index);
}

struct S_00546600 {
    TArray<E> Items; // 0x00
    E* sub_00546600(INT Index);
};

// @baa 0x00546600
E* S_00546600::sub_00546600(INT Index)
{
    return &Items(Index);
}

struct E_00546650 { BYTE Bytes[12]; };

struct S_00546650 {
    TArray<E_00546650> Items; // 0x00
    E_00546650* sub_00546650(INT Index);
};

// @baa 0x00546650
E_00546650* S_00546650::sub_00546650(INT Index)
{
    return &Items(Index);
}

// @baa 0x005466a0
uint UObject::sub_005466a0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x10) | -(uint)(*(uint *)(param_1 + 0x10) == 0) & param_1;
}

struct C_00546750 {
    int sub_00546750(int);
};

// @baa 0x00546750
int C_00546750::sub_00546750(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x20 + *param_1;
}

struct C_00546760 {
    int sub_00546760(int);
};

// @baa 0x00546760
int C_00546760::sub_00546760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

extern undefined * g_01e73550;
// @baa 0x00546ff0
undefined4 * UTexture2D::sub_00546ff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  param_1[9] = 1;
  param_1[5] = 1;
  *param_1 = (undefined4)(&g_01e73550);
  param_1[0x1f] = 0;
  return param_1;
}

struct C_00547020 { void sub_00547020(int a0); };

// @baa 0x00547020
void C_00547020::sub_00547020(int a0) { *(int*)((char*)this + 124) = a0; }

struct C_00547030 { int sub_00547030(void); };

// @baa 0x00547030
int C_00547030::sub_00547030(void) { return *(int*)((char*)this + 124); }

struct C_00547040 {
    void sub_00547040(undefined4, int);
};

// @baa 0x00547040
void C_00547040::sub_00547040(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + param_3;
  return;
}

void sub_00542ad0();
// @baa 0x005470a0
void sub_005470a0(void) { sub_00542ad0(); }

struct C_view_005470b0 {
    int sub_00544140(int, int);
};

// @baa 0x005470b0
int UObject::sub_005470b0(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_view_005470b0 *)(this))->sub_00544140(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct S_005471d0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005471d0(INT Index);
};

// @baa 0x005471d0
DWORD* S_005471d0::sub_005471d0(INT Index)
{
    return &Items(Index);
}

struct S_00547310 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00547310(INT Index) const;
};

// @baa 0x00547310
const DWORD* S_00547310::sub_00547310(INT Index) const
{
    return &Items(Index);
}

struct C_005473c0 {
    int sub_005473c0(int);
    int sub_00544400(int);
};

// @baa 0x005473c0
int C_005473c0::sub_005473c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_005473c0 *)(this))->sub_00544400(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct C_00547440 {
    int sub_00547440(int);
    int sub_005445b0(int);
};

// @baa 0x00547440
int C_00547440::sub_00547440(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00547440 *)(this))->sub_005445b0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct C_00547500 {
    int sub_00547500(int);
    int sub_005446a0(int);
};

// @baa 0x00547500
int C_00547500::sub_00547500(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00547500 *)(this))->sub_005446a0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

// @baa 0x00547980
void __stdcall sub_00547980(int a0, int a1) {  }

// @baa 0x00547990
void __stdcall sub_00547990(int a0, int a1) {  }

struct C_005479a0 {
    int sub_005479a0();
};

// @baa 0x005479a0
int C_005479a0::sub_005479a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct S_005479f0 { int sub_00544d40(int); };

// @baa 0x005479f0
int sub_005479f0(S_005479f0 *s, int a) { return s->sub_00544d40(a); }

struct C_00547ac0 {
    int sub_00547ac0(int);
};

// @baa 0x00547ac0
int C_00547ac0::sub_00547ac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00547ad0 {
    int sub_00547ad0(int);
};

// @baa 0x00547ad0
int C_00547ad0::sub_00547ad0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00547ae0 { int a, b, c; C_00547ae0(); };

// @baa 0x00547ae0
C_00547ae0::C_00547ae0() : a(0), b(0), c(0) {}

struct C_view_00547af0 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00547af0
undefined4 * UObject::sub_00547af0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00547af0 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  return param_1;
}

// @baa 0x00547ca0
int UObject::sub_00547ca0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00548120 {
    int sub_00548120(int);
};

// @baa 0x00548120
int C_00548120::sub_00548120(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00548130 {
    int sub_00548130(int);
};

// @baa 0x00548130
int C_00548130::sub_00548130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_view_00548da0 {
    int sub_00417dc0(int);
};

// @baa 0x00548da0
undefined4 * UObject::sub_00548da0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00548da0 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}

struct C_view_00548e20 {
    int sub_00417dc0(int);
};

// @baa 0x00548e20
undefined4 * UObject::sub_00548e20(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00548e20 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct C_00549070 {
    FString sub_00549070();
};

// @baa 0x00549070
FString C_00549070::sub_00549070()
{
    return TEXT("FMemoryArchive");
}

struct C_00549120 {
    FString sub_00549120();
};

// @baa 0x00549120
FString C_00549120::sub_00549120()
{
    return TEXT("FMemoryWriter");
}

struct M_00549150 { void sub_0040fcc0(); };

struct C_00549150 { char pad[4]; M_00549150 m; void sub_00549150(); };

// @baa 0x00549150
void C_00549150::sub_00549150() { m.sub_0040fcc0(); }

// @baa 0x00549390
void __stdcall sub_00549390(int a0, int a1) {  }

// @baa 0x005493a0
void __stdcall sub_005493a0(int a0, int a1) {  }

// @baa 0x005493b0
void __stdcall sub_005493b0(int a0, int a1) {  }

// @baa 0x005493c0
void __stdcall sub_005493c0(int a0, int a1) {  }

struct M_00549450 { void sub_00549160(); };

struct C_00549450 { char pad[60]; M_00549450 m; void sub_00549450(); };

// @baa 0x00549450
void C_00549450::sub_00549450() { m.sub_00549160(); }

// @baa 0x00549460
int UObject::sub_00549460(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00549470
int UObject::sub_00549470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x005494e0
void __stdcall sub_005494e0(int a0, int a1) {  }

// @baa 0x005494f0
void __stdcall sub_005494f0(int a0, int a1) {  }

// @baa 0x00549500
void __stdcall sub_00549500(int a0, int a1) {  }

// @baa 0x00549510
void __stdcall sub_00549510(int a0, int a1) {  }

// @baa 0x00549520
int UObject::sub_00549520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

// @baa 0x00549530
uint UObject::sub_00549530(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x10) | -(uint)(*(uint *)(param_1 + 0x10) == 0) & param_1;
}

// @baa 0x005495b0
int UObject::sub_005495b0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x20 + *param_1;
}

// @baa 0x005495c0
uint UObject::sub_005495c0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x10) | -(uint)(*(uint *)(param_1 + 0x10) == 0) & param_1;
}

// @baa 0x005495e0
void __stdcall sub_005495e0(int a0, int a1) {  }

struct C_005499c0 {
    FString sub_005499c0();
};

// @baa 0x005499c0
FString C_005499c0::sub_005499c0()
{
    return TEXT("");
}

struct C_0054b460 {
    FString sub_0054b460();
};

// @baa 0x0054b460
FString C_0054b460::sub_0054b460()
{
    return TEXT("FArchiveFileWriterDummy");
}

struct VBase
{
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
};

struct C_0054b490 : VBase
{
    virtual FString GetStr(int Arg);                    // slot 0x50
    virtual FString GetStr2(const TCHAR* Str);          // slot 0x54
    virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
    virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33();
    virtual void v34();
    virtual INT Find(const TCHAR* Str);                 // slot 0x8c
    INT sub_0054b490(int Arg);
};

static const TCHAR* GetText(const FString& S)
{
    return S.Num() ? &S(0) : TEXT("");
}

// @baa 0x0054b490
INT C_0054b490::sub_0054b490(int Arg)
{
    INT Result = Find(GetText(GetStr2(GetText(GetStr(Arg)))));
    if (Result == -1)
        return Find(GetText(GetStr(Arg)));
    return Result;
}

// @baa 0x0054cfc0
int UObject::sub_0054cfc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0054d070
int UObject::sub_0054d070(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x0054d080
int UObject::sub_0054d080(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x0054d090
int UObject::sub_0054d090(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0054d0a0
int UObject::sub_0054d0a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0054d0b0
int UObject::sub_0054d0b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0054d0d0
int UObject::sub_0054d0d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0054d0f0
int UObject::sub_0054d0f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0054d110
int UObject::sub_0054d110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0054d130
int UObject::sub_0054d130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x0054d150
int UObject::sub_0054d150(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x0054d160
int UObject::sub_0054d160(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x0054d170
int UObject::sub_0054d170(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct M_0054d180 { void sub_00549240(); };

struct C_0054d180 { char pad[4]; M_0054d180 m; void sub_0054d180(); };

// @baa 0x0054d180
void C_0054d180::sub_0054d180() { m.sub_00549240(); }

struct M_0054d1e0 { void sub_0040fcc0(); };

struct C_0054d1e0 { char pad[4]; M_0054d1e0 m; void sub_0054d1e0(); };

// @baa 0x0054d1e0
void C_0054d1e0::sub_0054d1e0() { m.sub_0040fcc0(); }

struct M_0054d200 { void sub_0040fcc0(); };

struct C_0054d200 { char pad[4]; M_0054d200 m; void sub_0054d200(); };

// @baa 0x0054d200
void C_0054d200::sub_0054d200() { m.sub_0040fcc0(); }

void sub_0040fcc0();
// @baa 0x0054d210
void sub_0054d210(void) { sub_0040fcc0(); }

// @baa 0x0054d2a0
int UObject::sub_0054d2a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_view_0054d3f0 {
    int sub_0054d350(int);
};

// @baa 0x0054d3f0
int UObject::sub_0054d3f0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_0054d3f0 *)(this))->sub_0054d350(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

// @baa 0x0054d410
int UObject::sub_0054d410(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x0054d610
int APrefabInstance::sub_0054d610(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0054d690 {
    int sub_0054d690();
};

// @baa 0x0054d690
int C_0054d690::sub_0054d690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0054d700 {
    int sub_0054d700(int);
};

// @baa 0x0054d700
int C_0054d700::sub_0054d700(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0054ef40 { void sub_00549650(int); C_0054ef40 *sub_0054ef40(int); };

// @baa 0x0054ef40
C_0054ef40 *C_0054ef40::sub_0054ef40(int a) { sub_00549650(a); return this; }

void sub_00549480();
// @baa 0x0054f370
void sub_0054f370(void) { sub_00549480(); }

struct C_0054f580 {
    int sub_0054f580();
};

// @baa 0x0054f580
int C_0054f580::sub_0054f580(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00549160
template TArray<INT>::~TArray();

/* TArray<UObject*>::FindItemIndex, an out-of-line instance */
struct TArray_UObjectPtr_ : public TArray<UObject*>
{
	INT sub_005460d0(UObject* const& Item) const; /* 0x005460d0 */
};

// @baa 0x005460d0
INT TArray_UObjectPtr_::sub_005460d0(UObject* const& Item) const
{
	return FindItemIndex(Item);
}

/* TArray<FName>::FindItemIndex, an out-of-line instance (Array.h's body, with FName::operator==) */
struct TArray_FName_ : public TArray<FName>
{
	INT sub_00546020(const FName& Item) const; /* 0x00546020 */
};

// @baa 0x00546020
INT TArray_FName_::sub_00546020(const FName& Item) const
{
	const FName* DataEnd = GetTypedData() + ArrayNum;
	for (const FName* Data = GetTypedData(); Data < DataEnd; Data++)
	{
		if (Data->Index == Item.Index && Data->Number == Item.Number)
		{
			return (INT)(Data - GetTypedData());
		}
	}
	return INDEX_NONE;
}
