// UnFaceFXAsset.cpp (part 1 of 3): 97 functions
// Placed here by: neighbours 61, class 35, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

// @baa 0x00becc60
IMPLEMENT_CLASS_AT(UFaceFXAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFaceFXAsset.cpp", 15);

// @baa 0x00becd70
UBOOL UFaceFXAsset::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00becd80
UBOOL UFaceFXAsset::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00bef940 { int sub_00bef940(int param_2); };
// @baa 0x00bef940
int C_00bef940::sub_00bef940(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bef950 { int sub_00bef950(int param_2); };
// @baa 0x00bef950
int C_00bef950::sub_00bef950(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bef9e0 { int sub_00bef9e0(int param_2); };
// @baa 0x00bef9e0
int C_00bef9e0::sub_00bef9e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00befa60 { int sub_00befa60(int param_2); };
// @baa 0x00befa60
int C_00befa60::sub_00befa60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00befc20 { int sub_00befc20(int param_2); };
// @baa 0x00befc20
int C_00befc20::sub_00befc20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_view {
    int sub_00befba0(int);
};

struct C_00befc30 { int sub_00befc30(undefined4 param_2); };
// @baa 0x00befc30
int C_00befc30::sub_00befc30(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00befba0(param_2);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}

void sub_00bef7d0();
// @baa 0x00befc50
void sub_00befc50(void) { sub_00bef7d0(); }

struct C_00befc60 { int sub_00befc60(void); };
// @baa 0x00befc60
int C_00befc60::sub_00befc60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00befc70 { int sub_00befc70(void); };
// @baa 0x00befc70
int C_00befc70::sub_00befc70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00befc80 { int sub_00befc80(void); };
// @baa 0x00befc80
int C_00befc80::sub_00befc80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_view_00bf0a70 {
    int sub_00befa70(int, int);
};

struct C_00bf0a70 { int sub_00bf0a70(int param_2); };
// @baa 0x00bf0a70
int C_00bf0a70::sub_00bf0a70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00bf0a70 *)(this))->sub_00befa70((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00bf0ae0 { int sub_00bf0ae0(void); };
// @baa 0x00bf0ae0
int C_00bf0ae0::sub_00bf0ae0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_00bf0af0 { int sub_00bf0af0(void); };
// @baa 0x00bf0af0
int C_00bf0af0::sub_00bf0af0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C {
    int sub_00bf0b40();
};

// @baa 0x00bf0b40
int C::sub_00bf0b40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_00bf0b50 {
    int sub_00bf0b50();
};

// @baa 0x00bf0b50
int C_00bf0b50::sub_00bf0b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_00bf0b60 {
    int sub_00bf0b60(int);
};

// @baa 0x00bf0b60
int C_00bf0b60::sub_00bf0b60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bf0b70 {
    int sub_00bf0b70(int);
};

// @baa 0x00bf0b70
int C_00bf0b70::sub_00bf0b70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bf0b80 {
    int sub_00bf0b80(int);
};

// @baa 0x00bf0b80
int C_00bf0b80::sub_00bf0b80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00bf0f70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf0f70& operator++();
};

// @baa 0x00bf0f70
FSparseArrayConstIt_00bf0f70& FSparseArrayConstIt_00bf0f70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00bf0f90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf0f90& operator++();
};

// @baa 0x00bf0f90
FSparseArrayConstIt_00bf0f90& FSparseArrayConstIt_00bf0f90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00bf0fb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf0fb0& operator++();
};

// @baa 0x00bf0fb0
FSparseArrayConstIt_00bf0fb0& FSparseArrayConstIt_00bf0fb0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00bf0fd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf0fd0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf0fd0
FSparseArrayConstIt_00bf0fd0::FSparseArrayConstIt_00bf0fd0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf1020 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf1020(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf1020
FSparseArrayConstIt_00bf1020::FSparseArrayConstIt_00bf1020(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf1070 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf1070(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf1070
FSparseArrayConstIt_00bf1070::FSparseArrayConstIt_00bf1070(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf10c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf10c0& operator++();
};

// @baa 0x00bf10c0
FSparseArrayConstIt_00bf10c0& FSparseArrayConstIt_00bf10c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00bf10e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf10e0& operator++();
};

// @baa 0x00bf10e0
FSparseArrayConstIt_00bf10e0& FSparseArrayConstIt_00bf10e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00bf1100 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf1100& operator++();
};

// @baa 0x00bf1100
FSparseArrayConstIt_00bf1100& FSparseArrayConstIt_00bf1100::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00bf1120 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf1120(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf1120
FSparseArrayConstIt_00bf1120::FSparseArrayConstIt_00bf1120(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf1170 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf1170(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf1170
FSparseArrayConstIt_00bf1170::FSparseArrayConstIt_00bf1170(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf11c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf11c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf11c0
FSparseArrayConstIt_00bf11c0::FSparseArrayConstIt_00bf11c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_005c7a20(void);
extern undefined * g_02026208;
struct C_00bf1270 { undefined4 * sub_00bf1270(void); };
// @baa 0x00bf1270
undefined4 * C_00bf1270::sub_00bf1270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02026208);
  return param_1;
}

// @baa 0x00bf1290
IMPLEMENT_CLASS_AT(UFaceFXAnimSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFaceFXAnimSet.cpp", 14);

// @baa 0x00bf1320
struct C_view_00bf3940 {
    int sub_00befa70(int, int);
};

struct C_00bf3940 { int sub_00bf3940(int param_2); };
// @baa 0x00bf3940
int C_00bf3940::sub_00bf3940(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00bf3940 *)(this))->sub_00befa70((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct FSparseArrayConstIt_00bf3e80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf3e80(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf3e80
FSparseArrayConstIt_00bf3e80::FSparseArrayConstIt_00bf3e80(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf3ed0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf3ed0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf3ed0
FSparseArrayConstIt_00bf3ed0::FSparseArrayConstIt_00bf3ed0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf3f20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf3f20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf3f20
FSparseArrayConstIt_00bf3f20::FSparseArrayConstIt_00bf3f20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf4090 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf4090(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf4090
FSparseArrayConstIt_00bf4090::FSparseArrayConstIt_00bf4090(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf40e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf40e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf40e0
FSparseArrayConstIt_00bf40e0::FSparseArrayConstIt_00bf40e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00bf4130 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00bf4130(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00bf4130
FSparseArrayConstIt_00bf4130::FSparseArrayConstIt_00bf4130(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

// @baa 0x00bf4180
extern undefined * g_02026318;
struct C_00bf41a0 { undefined4 * sub_00bf41a0(void); };
// @baa 0x00bf41a0
undefined4 * C_00bf41a0::sub_00bf41a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02026318);
  return param_1;
}

// @baa 0x00bf41c0
// @baa 0x00bf4260
// @baa 0x00bf4be0
// @baa 0x00bf4c00
IMPLEMENT_CLASS_AT(URFMODSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RFMODSound.cpp", 11);

// @baa 0x00bf4c10
int sub_00bf3f70(void);
struct C_00bf5e10 { int sub_00bf5e10(void); };
// @baa 0x00bf5e10
int C_00bf5e10::sub_00bf5e10(void)
{
    int param_1 = (int)this;

  sub_00bf3f70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00bf3fd0(void);
struct C_00bf5e30 { int sub_00bf5e30(void); };
// @baa 0x00bf5e30
int C_00bf5e30::sub_00bf5e30(void)
{
    int param_1 = (int)this;

  sub_00bf3fd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00bf4030(void);
struct C_00bf5e50 { int sub_00bf5e50(void); };
// @baa 0x00bf5e50
int C_00bf5e50::sub_00bf5e50(void)
{
    int param_1 = (int)this;

  sub_00bf4030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00becc60(void);
int sub_00bf4c10(...);
extern undefined4 g_026c0588;
// @baa 0x00bf5e70
int sub_00bf5e70(void)
{
  if (g_026c0588 == 0) {
    g_026c0588 = sub_00bf4c10(L"Engine");
    sub_00becc60();
  }
  return g_026c0588;
}

struct C_view_00bf6310 {
    int sub_00bf5b90(int, int);
};

struct C_00bf6310 { undefined4 sub_00bf6310(undefined4 param_2, undefined4 param_3); };
// @baa 0x00bf6310
undefined4 C_00bf6310::sub_00bf6310(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00bf6310 *)(this))->sub_00bf5b90(param_2, param_3);
  return param_1;
}

struct C_view_00bf6330 {
    int sub_00bf5c10(int, int);
};

struct C_00bf6330 { int sub_00bf6330(undefined4 param_2, undefined4 param_3); };
// @baa 0x00bf6330
int C_00bf6330::sub_00bf6330(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00bf6330 *)(this))->sub_00bf5c10(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00bf6350 {
    int sub_00bf5c90(int, int);
};

struct C_00bf6350 { undefined4 sub_00bf6350(undefined4 param_2, undefined4 param_3); };
// @baa 0x00bf6350
undefined4 C_00bf6350::sub_00bf6350(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00bf6350 *)(this))->sub_00bf5c90(param_2, param_3);
  return param_1;
}

struct C_view_00bf6370 {
    int sub_00bf5d10(int, int);
};

struct C_00bf6370 { int sub_00bf6370(undefined4 param_2, undefined4 param_3); };
// @baa 0x00bf6370
int C_00bf6370::sub_00bf6370(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00bf6370 *)(this))->sub_00bf5d10(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00bf6390 {
    int sub_00bf5d90(int, int);
};

struct C_00bf6390 { int sub_00bf6390(undefined4 param_2, undefined4 param_3); };
// @baa 0x00bf6390
int C_00bf6390::sub_00bf6390(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00bf6390 *)(this))->sub_00bf5d90(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00bf63b0 { int sub_00bf63b0(void); };
// @baa 0x00bf63b0
int C_00bf63b0::sub_00bf63b0(void)
{
    int param_1 = (int)this;

  sub_00bf3f70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bf63d0 { int sub_00bf63d0(void); };
// @baa 0x00bf63d0
int C_00bf63d0::sub_00bf63d0(void)
{
    int param_1 = (int)this;

  sub_00bf3fd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bf63f0 { int sub_00bf63f0(void); };
// @baa 0x00bf63f0
int C_00bf63f0::sub_00bf63f0(void)
{
    int param_1 = (int)this;

  sub_00bf4030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00bf5ea0();
// @baa 0x00bf6410
void sub_00bf6410(void) { sub_00bf5ea0(); }

void sub_00bf5f10();
// @baa 0x00bf6420
void sub_00bf6420(void) { sub_00bf5f10(); }

void sub_00bf6030();
// @baa 0x00bf6800
void sub_00bf6800(void) { sub_00bf6030(); }

void sub_00bf61a0();
// @baa 0x00bf7010
void sub_00bf7010(void) { sub_00bf61a0(); }

struct C_00bf7060 { int sub_00bf7060(void); };
// @baa 0x00bf7060
int C_00bf7060::sub_00bf7060(void)
{
    int param_1 = (int)this;

  sub_00bf3f70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bf7080 { int sub_00bf7080(void); };
// @baa 0x00bf7080
int C_00bf7080::sub_00bf7080(void)
{
    int param_1 = (int)this;

  sub_00bf3fd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bf70a0 { int sub_00bf70a0(void); };
// @baa 0x00bf70a0
int C_00bf70a0::sub_00bf70a0(void)
{
    int param_1 = (int)this;

  sub_00bf4030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00bf70c0
void sub_00bf70c0(void) { sub_00bf5ea0(); }

// @baa 0x00bf70d0
void sub_00bf70d0(void) { sub_00bf5f10(); }

// @baa 0x00bf7460
void sub_00bf7460(void) { sub_00bf6030(); }

extern undefined * g_020267b0;
struct C_00bf7730 { undefined4 * sub_00bf7730(void); };
// @baa 0x00bf7730
undefined4 * C_00bf7730::sub_00bf7730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020267b0);
  return param_1;
}

// @baa 0x00bf7750
IMPLEMENT_CLASS_AT(URSeqAct_SetMaterialInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RSeqAct_SetMaterialInstance.cpp", 4);

struct C_00bf77e0 { int sub_00bf77e0(void); };
// @baa 0x00bf77b0
// @baa 0x00bf77e0
int C_00bf77e0::sub_00bf77e0(void)
{
    int param_1 = (int)this;

  sub_00bf3f70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bf7800 { int sub_00bf7800(void); };
// @baa 0x00bf7800
int C_00bf7800::sub_00bf7800(void)
{
    int param_1 = (int)this;

  sub_00bf3fd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00bf7820 { int sub_00bf7820(void); };
// @baa 0x00bf7820
int C_00bf7820::sub_00bf7820(void)
{
    int param_1 = (int)this;

  sub_00bf4030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_015b7970 {
    int sub_00bf5ad0(int, int);
};

struct C_015b7970 { void sub_015b7970(void); };
// @baa 0x015b7970
void C_015b7970::sub_015b7970(void)
{
    int param_1 = (int)this;
  ((C_view_015b7970 *)(this))->sub_00bf5ad0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_01ac3650 { int sub_01ac3650(void); };

// @baa 0x01ac3650
int C_01ac3650::sub_01ac3650(void) { return *(int*)((char*)this + 0); }

struct C_01ac3690 { int sub_01ac3690(void); };

// @baa 0x01ac3690
int C_01ac3690::sub_01ac3690(void) { return *(int*)((char*)this + 0); }

// @baa 0x01ac3800
void sub_01ac3800(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01ac3830 { int sub_01ac3830(void); };

// @baa 0x01ac3830
int C_01ac3830::sub_01ac3830(void) { return *(int*)((char*)this + 0); }

struct C_01ac3840 { int sub_01ac3840(void); };

// @baa 0x01ac3840
int C_01ac3840::sub_01ac3840(void) { return *(int*)((char*)this + 0); }

struct C_01ac3850 { int sub_01ac3850(void); };

// @baa 0x01ac3850
int C_01ac3850::sub_01ac3850(void) { return *(int*)((char*)this + 0); }

// @baa 0x01ac38f0
void sub_01ac38f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x01ac3910
void sub_01ac3910(void) {  }

// @baa 0x01ac3920
void sub_01ac3920(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x01ac3940
void sub_01ac3940(void) {  }

struct C_01ac39d0 {
    undefined4 sub_01ac39d0(byte);
};

int sub_00402660(...);
int sub_01abe830(void);
// @baa 0x01ac39d0
undefined4 C_01ac39d0::sub_01ac39d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01abe830();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01ac3a70
void sub_01ac3a70(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

int sub_01ab3290(...);
// @baa 0x01ac3b40
void sub_01ac3b40(undefined4 * param_1)
{
  sub_01ab3290(*param_1,0xc);
  *param_1 = 0;
  return;
}

// @baa 0x01ac3b60
void sub_01ac3b60(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// @baa 0x01ac3bd0
void sub_01ac3bd0(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// @baa 0x01ac3bf0
void sub_01ac3bf0(undefined4 * param_1)
{
  sub_01ab3290(*param_1,0xc);
  *param_1 = 0;
  return;
}

int sub_01ab3960(...);
extern undefined4 g_027ca4fc;
// @baa 0x01ac3d10
void sub_01ac3d10(void)
{
  undefined4 *puVar1;
  
  if (g_027ca4fc == 0) {
    puVar1 = (undefined4 *)sub_01ab3960(8);
    g_027ca4fc = (undefined4)(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
  }
  return;
}

struct C_01ac52d0 {
    int * sub_01ac52d0(byte);
};

int sub_01ac4130(void);
// @baa 0x01ac52d0
int * C_01ac52d0::sub_01ac52d0(byte param_2)
{
    int * param_1 = (int *)this;

  sub_01ac4130();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0xc);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
