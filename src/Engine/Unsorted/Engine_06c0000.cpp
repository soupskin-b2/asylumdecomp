// Engine_06c0000.cpp (part 1 of 10): 82 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

int sub_0053dfa0(...);
int sub_006b88c0(void);
struct C_006c1300 { undefined4 sub_006c1300(byte param_2); };
// @baa 0x006c1300
undefined4 C_006c1300::sub_006c1300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006b88c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_006c4a20(); };

// @baa 0x006c4a20
void C::sub_006c4a20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006c4b50 { void* Data; int Num; int Max; void sub_006c4b50(); };

// @baa 0x006c4b50
void C_006c4b50::sub_006c4b50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006c4bb0 {
    undefined4 sub_006c4bb0(undefined4);
    int sub_006bd7a0(int);
};

// @baa 0x006c4bb0
undefined4 C_006c4bb0::sub_006c4bb0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006c4bb0 *)(this))->sub_006bd7a0(param_2);
  return param_1;
}

struct C_006c4bd0 { void sub_006bd8d0(int); C_006c4bd0 *sub_006c4bd0(int); };

// @baa 0x006c4bd0
C_006c4bd0 *C_006c4bd0::sub_006c4bd0(int a) { sub_006bd8d0(a); return this; }

extern TArray<int> g_026a1ca4;
struct C_006c4bf0 {
    int sub_006c4bf0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x006c4bf0
int C_006c4bf0::sub_006c4bf0()
{
    return g_026a1ca4(Index);
}

struct C_006c4cf0 { void* Data; int Num; int Max; void sub_006c4cf0(); };

// @baa 0x006c4cf0
void C_006c4cf0::sub_006c4cf0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006c4d50 {
    undefined4 sub_006c4d50();
};

// @baa 0x006c4d50
undefined4 C_006c4d50::sub_006c4d50(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_006c4d60 { C_006c4d60* sub_006c4d60(void); };

// @baa 0x006c4d60
C_006c4d60* C_006c4d60::sub_006c4d60(void) { return this; }

struct C_006c4d70 {
    int sub_006c4d70();
};

// @baa 0x006c4d70
int C_006c4d70::sub_006c4d70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

struct C_006c4d80 {
    int sub_006c4d80();
};

// @baa 0x006c4d80
int C_006c4d80::sub_006c4d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

struct C_006c4d90 {
    int sub_006c4d90();
};

// @baa 0x006c4d90
int C_006c4d90::sub_006c4d90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006c4db0 {
    int sub_006c4db0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x006c4db0
int C_006c4db0::sub_006c4db0()
{
    return g_026a1ca4(Index);
}

struct C_006c4e10 {
    int sub_006c4e10();
};

// @baa 0x006c4e10
int C_006c4e10::sub_006c4e10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006c4e30 {
    int sub_006c4e30();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x006c4e30
int C_006c4e30::sub_006c4e30()
{
    return g_026a1ca4(Index);
}

struct C_006c4e90 {
    int sub_006c4e90();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x006c4e90
int C_006c4e90::sub_006c4e90()
{
    return g_026a1ca4(Index);
}

struct C_006c4ef0 {
    int sub_006c4ef0(int);
    int sub_006bd290(int, int);
};

// @baa 0x006c4ef0
int C_006c4ef0::sub_006c4ef0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_006c4ef0 *)(this))->sub_006bd290((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0xc;
  }
  return 0;
}

struct C_006c4f20 {
    int sub_006c4f20(int);
};

// @baa 0x006c4f20
int C_006c4f20::sub_006c4f20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_006c5020 {
    int sub_006c5020();
};

// @baa 0x006c5020
int C_006c5020::sub_006c5020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006c5030 {
    int sub_006c5030(int);
};

// @baa 0x006c5030
int C_006c5030::sub_006c5030(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_view {
    int sub_005a9e30(int, int);
};

struct C_006c5040 { int sub_006c5040(int param_2); };
// @baa 0x006c5040
int C_006c5040::sub_006c5040(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_005a9e30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_006c5070 {
    int sub_006c5070(int);
};

// @baa 0x006c5070
int C_006c5070::sub_006c5070(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1 | *(uint *)(param_1 + 0x18c0));
}

struct C_006c5090 {
    int sub_006c5090();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x006c5090
int C_006c5090::sub_006c5090()
{
    return g_026a1ca4(Index);
}

struct C_006c50f0 {
    int sub_006c50f0();
};

// @baa 0x006c50f0
int C_006c50f0::sub_006c50f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_006c5110 {
    int sub_006c5110();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x006c5110
int C_006c5110::sub_006c5110()
{
    return g_026a1ca4(Index);
}

struct C_006c5170 {
    int sub_006c5170();
};

// @baa 0x006c5170
int C_006c5170::sub_006c5170(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006c5190 {
    int sub_006c5190();
};

// @baa 0x006c5190
int C_006c5190::sub_006c5190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

int sub_006bd200(void);
struct C_006c51a0 { undefined4 sub_006c51a0(byte param_2); };
// @baa 0x006c51a0
undefined4 C_006c51a0::sub_006c51a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006bd200();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006c5250 { int sub_006c5250(int param_2); };
// @baa 0x006c5250
int C_006c5250::sub_006c5250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

DWORD sub_006bd6b0();
// @baa 0x006c5d70
DWORD sub_006c5d70() {
    return sub_006bd6b0();
}

int sub_006c7ed0(void);
struct C_006c7fc0 { undefined4 sub_006c7fc0(byte param_2); };
// @baa 0x006c7fc0
undefined4 C_006c7fc0::sub_006c7fc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006c7ed0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006c7fe0 {
    undefined4 * sub_006c7fe0(byte);
};

int sub_006be4d0(void);
extern undefined * g_01eceb88;
extern undefined * g_01ecebe8;
// @baa 0x006c7fe0
undefined4 * C_006c7fe0::sub_006c7fe0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecebe8);
  param_1[1] = (undefined4)(&g_01eceb88);
  sub_006be4d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006c8110 {
    undefined4 * sub_006c8110(undefined4 *);
    int sub_006bd7a0(int);
    int sub_006bd8d0(int);
};

// @baa 0x006c8110
undefined4 * C_006c8110::sub_006c8110(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_006c8110 *)(((char *)this + 4)))->sub_006bd7a0((int)(param_2 + 1));
  ((C_006c8110 *)(((char *)this + 0x10)))->sub_006bd8d0((int)(param_2 + 4));
  return param_1;
}

struct C_006c82b0 {
    int sub_006c82b0(int);
    int sub_006bd290(int, int);
};

// @baa 0x006c82b0
int C_006c82b0::sub_006c82b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_006c82b0 *)(this))->sub_006bd290((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0xc, iVar1 != 0)) {
    return iVar1 + 2;
  }
  return 0;
}

struct C_006c82f0 { C_006c82f0* sub_006c82f0(void); };

// @baa 0x006c82f0
C_006c82f0* C_006c82f0::sub_006c82f0(void) { return this; }

struct C_006c8300 { C_006c8300* sub_006c8300(void); };

// @baa 0x006c8300
C_006c8300* C_006c8300::sub_006c8300(void) { return this; }

struct C_006c8790 {
    int sub_006c8790();
};

// @baa 0x006c8790
int C_006c8790::sub_006c8790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_006c87a0 { int sub_006c87a0(int param_2); };
// @baa 0x006c87a0
int C_006c87a0::sub_006c87a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_005a9e30((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_006c87e0 { int sub_006c87e0(void); };
// @baa 0x006c87e0
int C_006c87e0::sub_006c87e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_006c8800 { int sub_006c8800(void); };
// @baa 0x006c8800
int C_006c8800::sub_006c8800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x1c;
}

struct C_view_006c8880 {
    int sub_006c51c0(int, int);
};

struct C_006c8880 { int sub_006c8880(int param_2); };
// @baa 0x006c8880
int C_006c8880::sub_006c8880(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_006c8880 *)(this))->sub_006c51c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

// @baa 0x006c8a80
void __stdcall sub_006c8a80(int a0, int a1) {  }

struct C_view_006c8cc0 {
    int sub_006c5780(int);
};

struct C_006c8cc0 { undefined4 * sub_006c8cc0(int * param_2); };
// @baa 0x006c8cc0
undefined4 * C_006c8cc0::sub_006c8cc0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_view_006c8cc0 *)(((char *)this + 8)))->sub_006c5780(param_2[1]);
  return param_1;
}

struct C_view_006c8cf0 {
    int sub_006c5780(int);
};

struct C_006c8cf0 { undefined4 * sub_006c8cf0(int * param_2); };
// @baa 0x006c8cf0
undefined4 * C_006c8cf0::sub_006c8cf0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_view_006c8cf0 *)(((char *)this + 8)))->sub_006c5780(param_2[1]);
  param_1[5] = 0xffffffff;
  return param_1;
}

// @baa 0x006c8e10
void __stdcall sub_006c8e10(int a0, int a1) {  }

int sub_0040fcc0(void);
struct C_006c8f40 { undefined4 sub_006c8f40(byte param_2); };
// @baa 0x006c8f40
undefined4 C_006c8f40::sub_006c8f40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_006c9170 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006c9170& operator++();
};

// @baa 0x006c9170
FSparseArrayConstIt_006c9170& FSparseArrayConstIt_006c9170::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006c9190 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006c9190& operator++();
};

// @baa 0x006c9190
FSparseArrayConstIt_006c9190& FSparseArrayConstIt_006c9190::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006c91b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006c91b0& operator++();
};

// @baa 0x006c91b0
FSparseArrayConstIt_006c91b0& FSparseArrayConstIt_006c91b0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006c91d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006c91d0& operator++();
};

// @baa 0x006c91d0
FSparseArrayConstIt_006c91d0& FSparseArrayConstIt_006c91d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

// @baa 0x006c99a0
IMPLEMENT_CLASS_AT(UDrawSphereComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 19);

// @baa 0x006c9a00
int sub_006f7810(void);
extern undefined * g_01ecf7b8;
struct C_006c9a30 { undefined4 * sub_006c9a30(void); };
// @baa 0x006c9a30
undefined4 * C_006c9a30::sub_006c9a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01ecf7b8);
  return param_1;
}

extern undefined * g_01ecfa08;
struct C_006c9a50 { undefined4 * sub_006c9a50(void); };
// @baa 0x006c9a50
undefined4 * C_006c9a50::sub_006c9a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01ecfa08);
  return param_1;
}

// @baa 0x006c9a70
IMPLEMENT_CLASS_AT(UDrawFrustumComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DrawFrustumComponent.cpp", 9);

// @baa 0x006c9ad0
extern undefined * g_01ecfc58;
struct C_006c9b00 { undefined4 * sub_006c9b00(void); };
// @baa 0x006c9b00
undefined4 * C_006c9b00::sub_006c9b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01ecfc58);
  return param_1;
}

// @baa 0x006c9b20
IMPLEMENT_CLASS_AT(UDrawLightRadiusComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DrawLightRadiusComponent.cpp", 9);

// @baa 0x006c9b80
int sub_006ab3c0(void);
int sub_006c7790(...);
extern undefined4 g_026b0da0;
// @baa 0x006ca170
int sub_006ca170(void)
{
  if (g_026b0da0 == 0) {
    g_026b0da0 = sub_006c7790(L"Engine");
    sub_006ab3c0();
  }
  return g_026b0da0;
}

// @baa 0x006ca6a0
UBOOL UFogVolumeConeDensityComponent::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_006ca820 {
    bool sub_006ca820();
};

// @baa 0x006ca820
bool C_006ca820::sub_006ca820(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x4c) != 0;
}

// @baa 0x006cb1f0
void __stdcall sub_006cb1f0(int a0) {  }

struct C_view_006cbaf0 {
    int sub_006c51c0(int, int);
};

struct C_006cbaf0 { int sub_006cbaf0(int param_2); };
// @baa 0x006cbaf0
int C_006cbaf0::sub_006cbaf0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_006cbaf0 *)(this))->sub_006c51c0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct FSparseArrayConstIt_006cbb90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006cbb90& operator++();
};

// @baa 0x006cbb90
FSparseArrayConstIt_006cbb90& FSparseArrayConstIt_006cbb90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006cbbb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006cbbb0& operator++();
};

// @baa 0x006cbbb0
FSparseArrayConstIt_006cbbb0& FSparseArrayConstIt_006cbbb0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006cc3b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006cc3b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006cc3b0
FSparseArrayConstIt_006cc3b0::FSparseArrayConstIt_006cc3b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006cc400 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006cc400(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006cc400
FSparseArrayConstIt_006cc400::FSparseArrayConstIt_006cc400(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006cc450 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006cc450(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006cc450
FSparseArrayConstIt_006cc450::FSparseArrayConstIt_006cc450(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct M_006cc500 { void sub_006c9720(); };

struct C_006cc500 { char pad[64]; M_006cc500 m; void sub_006cc500(); };

// @baa 0x006cc500
void C_006cc500::sub_006cc500() { m.sub_006c9720(); }

int sub_006ad5c0(void);
int sub_006cb870(...);
extern undefined4 g_026b0ddc;
// @baa 0x006cc680
int sub_006cc680(void)
{
  if (g_026b0ddc == 0) {
    g_026b0ddc = sub_006cb870(L"Engine");
    sub_006ad5c0();
  }
  return g_026b0ddc;
}

struct FSparseArrayConstIt_006ccf90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006ccf90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006ccf90
FSparseArrayConstIt_006ccf90::FSparseArrayConstIt_006ccf90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006ccfe0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006ccfe0& operator++();
};

// @baa 0x006ccfe0
FSparseArrayConstIt_006ccfe0& FSparseArrayConstIt_006ccfe0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006cd000 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006cd000(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006cd000
FSparseArrayConstIt_006cd000::FSparseArrayConstIt_006cd000(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006cd0f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006cd0f0& operator++();
};

// @baa 0x006cd0f0
FSparseArrayConstIt_006cd0f0& FSparseArrayConstIt_006cd0f0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

void sub_006cc0f0();
// @baa 0x006cd110
void sub_006cd110(void) { sub_006cc0f0(); }

struct FSparseArrayConstIt_006cd330 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006cd330& operator++();
};

// @baa 0x006cd330
FSparseArrayConstIt_006cd330& FSparseArrayConstIt_006cd330::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006cdab0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006cdab0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006cdab0
FSparseArrayConstIt_006cdab0::FSparseArrayConstIt_006cdab0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

// @baa 0x006cf000
IMPLEMENT_CLASS_AT(AFogVolumeDensityInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 11);

// @baa 0x006cf060
// @baa 0x006cf150
IMPLEMENT_CLASS_AT(AFogVolumeConeDensityInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FogVolumeDensityComponents.cpp", 394);

struct C_006cfb60 {
    undefined4 sub_006cfb60();
    int sub_006cca00(int);
};

// @baa 0x006cfb60
undefined4 C_006cfb60::sub_006cfb60(void)
{
    int param_1 = (int)this;
  ((C_006cfb60 *)((*(char **)((char *)this + 8))))->sub_006cca00(*(undefined4 *)(param_1 + 4));
  return 0xc;
}
