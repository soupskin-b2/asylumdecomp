// Engine_0ad0000.cpp: 125 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    undefined4 sub_00ad1b10(byte);
    int sub_00ac66b0();
};

int sub_0053dfa0(...);
// @baa 0x00ad1b10
undefined4 C::sub_00ad1b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(((char *)this + 0x2c)))->sub_00ac66b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ad1b40 {
    int sub_00ad1b40(int);
};

// @baa 0x00ad1b40
int C_00ad1b40::sub_00ad1b40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_00ad1b60 {
    int sub_00ad1b60(int);
};

// @baa 0x00ad1b60
int C_00ad1b60::sub_00ad1b60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00ad1b70 {
    int sub_00ad1b70(int);
};

// @baa 0x00ad1b70
int C_00ad1b70::sub_00ad1b70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00ad1b80 {
    int sub_00ad1b80(int);
};

// @baa 0x00ad1b80
int C_00ad1b80::sub_00ad1b80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_view {
    int sub_00ac1c50(int, int, int);
};

// @baa 0x00ad1b90
void UFracturedStaticMeshComponent::sub_00ad1b90(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != param_2) {
    *(int *)(param_1 + 0x14) = param_2;
    ((C_view *)(this))->sub_00ac1c50(0, param_2, 4);
  }
  return;
}

struct C_00ad2020 {
    int sub_00ad2020(int);
};

// @baa 0x00ad2020
int C_00ad2020::sub_00ad2020(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1 | *(uint *)(param_1 + 0x40));
}

// @baa 0x00ad2040
void __stdcall sub_00ad2040(int a0, int a1) {  }

struct C_00ad2120 {
    int sub_00ad2120(int);
};

// @baa 0x00ad2120
int C_00ad2120::sub_00ad2120(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1 | *(uint *)(param_1 + 0x40));
}

// @baa 0x00ad2140
void __stdcall sub_00ad2140(int a0, int a1) {  }

struct C_00ad23f0 {
    undefined4 sub_00ad23f0(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
int sub_007161b0(...);
int sub_00a49bb0(...);
// @baa 0x00ad23f0
undefined4 C_00ad23f0::sub_00ad23f0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ad23f0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_007161b0(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  sub_00716170(param_2,param_1 + 0x5e);
  sub_00716170(param_2,param_1 + 100);
  sub_00a49bb0(param_2,param_1 + 0x6c);
  sub_007161b0(param_2,param_1 + 0xd8);
  return uVar1;
}

struct A_00ad2460 { virtual void sub_00ad8ba0(); char pad[16]; };

struct B_00ad2460 { virtual void sub_00ad8ba0(); };

struct C_00ad2460 : A_00ad2460, B_00ad2460 { virtual void sub_00ad8ba0(); C_00ad2460(); };

C_00ad2460::C_00ad2460() {}

// @baa 0x00ad2460
void C_00ad2460::sub_00ad8ba0() {}

struct C_00ad2630 {
    void sub_00ad2630();
};

// @baa 0x00ad2630
void C_00ad2630::sub_00ad2630(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

int sub_01a37872(...);
int sub_01e24ad0(...);
extern undefined4 g_026bbd04;
extern undefined4 g_026bbd08;
extern undefined4 g_026bbd0c;
extern undefined4 g_026bbd10;
// @baa 0x00ad2fa0
undefined * sub_00ad2fa0(void)
{
  if ((g_026bbd10 & 1) == 0) {
    g_026bbd10 = g_026bbd10 | 1;
    g_026bbd04 = 0;
    g_026bbd08 = 0;
    g_026bbd0c = 0;
    sub_01a37872(&sub_01e24ad0);
  }
  return (undefined *)(&g_026bbd04);
}

struct C_00ad3a70 {
    void sub_00ad3a70(undefined4, undefined4);
};

int sub_00acfab0(...);
// @baa 0x00ad3a70
void C_00ad3a70::sub_00ad3a70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00acfab0(param_1 + 0x4c,param_2,param_3);
  return;
}

struct C_00ad3a90 {
    void sub_00ad3a90(undefined4, undefined4);
};

int sub_00ad0b10(...);
// @baa 0x00ad3a90
void C_00ad3a90::sub_00ad3a90(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00ad0b10(param_1 + 0x4c,param_2,param_3);
  return;
}

struct C_view_00ad3b90 {
    int sub_00acd310(int, int);
};

// @baa 0x00ad3b90
int UFracturedStaticMeshComponent::sub_00ad3b90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00ad3b90 *)(this))->sub_00acd310((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00ad3e80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad3e80& operator++();
};

// @baa 0x00ad3e80
FSparseArrayConstIt_00ad3e80& FSparseArrayConstIt_00ad3e80::operator++()
{
    TConstIterator::operator++();
    return *this;
}

// @baa 0x00ad4160
void UFracturedStaticMeshComponent::sub_00ad4160(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct FSparseArrayConstIt_00ad4170 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad4170& operator++();
};

// @baa 0x00ad4170
FSparseArrayConstIt_00ad4170& FSparseArrayConstIt_00ad4170::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ad4190 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad4190& operator++();
};

// @baa 0x00ad4190
FSparseArrayConstIt_00ad4190& FSparseArrayConstIt_00ad4190::operator++()
{
    TConstIterator::operator++();
    return *this;
}

// @baa 0x00ad41b0
int UFracturedStaticMeshComponent::sub_00ad41b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct FSparseArrayConstIt_00ad41c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad41c0& operator++();
};

// @baa 0x00ad41c0
FSparseArrayConstIt_00ad41c0& FSparseArrayConstIt_00ad41c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ad41e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad41e0& operator++();
};

// @baa 0x00ad41e0
FSparseArrayConstIt_00ad41e0& FSparseArrayConstIt_00ad41e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

// @baa 0x00ad4200
int UFracturedStaticMeshComponent::sub_00ad4200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x14;
}

struct C_view_00ad4320 {
    int sub_00acda80(int, int);
};

// @baa 0x00ad4320
int UFracturedStaticMeshComponent::sub_00ad4320(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00ad4320 *)(this))->sub_00acda80((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_00ad43d0 {
    int sub_00acde90(int, int);
};

// @baa 0x00ad43d0
int UFracturedStaticMeshComponent::sub_00ad43d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00ad43d0 *)(this))->sub_00acde90((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x30 + *param_1;
  }
  return 0;
}

struct C_view_00ad4400 {
    int sub_00ace070(int, int);
};

// @baa 0x00ad4400
int UFracturedStaticMeshComponent::sub_00ad4400(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00ad4400 *)(this))->sub_00ace070((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x40 + *param_1;
  }
  return 0;
}

struct C_00ad4650 {
    undefined4 sub_00ad4650(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ad4650
undefined4 C_00ad4650::sub_00ad4650(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ad4650 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  sub_00716170(param_2,param_1 + 0xc4);
  sub_00716170(param_2,param_1 + 0xca);
  sub_00716170(param_2,param_1 + 0xd0);
  sub_00716170(param_2,param_1 + 0xd6);
  sub_00716170(param_2,param_1 + 0xdc);
  sub_00716170(param_2,param_1 + 0xe2);
  return uVar1;
}

struct A_00ad46f0 { virtual void sub_00adb220(); char pad[16]; };

struct B_00ad46f0 { virtual void sub_00adb220(); };

struct C_00ad46f0 : A_00ad46f0, B_00ad46f0 { virtual void sub_00adb220(); C_00ad46f0(); };

C_00ad46f0::C_00ad46f0() {}

// @baa 0x00ad46f0
void C_00ad46f0::sub_00adb220() {}

struct C_00ad49a0 {
    undefined4 sub_00ad49a0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ad49a0
undefined4 C_00ad49a0::sub_00ad49a0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ad49a0 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  sub_00716170(param_2,param_1 + 0xc4);
  sub_00716170(param_2,param_1 + 0xca);
  sub_00716170(param_2,param_1 + 0xd0);
  sub_00716170(param_2,param_1 + 0xd6);
  sub_00716170(param_2,param_1 + 0xdc);
  sub_00716170(param_2,param_1 + 0xe2);
  return uVar1;
}

struct A_00ad4a40 { virtual void sub_00adb240(); char pad[16]; };

struct B_00ad4a40 { virtual void sub_00adb240(); };

struct C_00ad4a40 : A_00ad4a40, B_00ad4a40 { virtual void sub_00adb240(); C_00ad4a40(); };

C_00ad4a40::C_00ad4a40() {}

// @baa 0x00ad4a40
void C_00ad4a40::sub_00adb240() {}

struct C_00ad4cf0 {
    undefined4 sub_00ad4cf0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ad4cf0
undefined4 C_00ad4cf0::sub_00ad4cf0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ad4cf0 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  sub_00716170(param_2,param_1 + 0xc4);
  sub_00716170(param_2,param_1 + 0xca);
  sub_00716170(param_2,param_1 + 0xd0);
  sub_00716170(param_2,param_1 + 0xd6);
  sub_00716170(param_2,param_1 + 0xdc);
  sub_00716170(param_2,param_1 + 0xe2);
  return uVar1;
}

struct A_00ad4d90 { virtual void sub_00adb260(); char pad[16]; };

struct B_00ad4d90 { virtual void sub_00adb260(); };

struct C_00ad4d90 : A_00ad4d90, B_00ad4d90 { virtual void sub_00adb260(); C_00ad4d90(); };

C_00ad4d90::C_00ad4d90() {}

// @baa 0x00ad4d90
void C_00ad4d90::sub_00adb260() {}

struct C_00ad5040 {
    undefined4 sub_00ad5040(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ad5040
undefined4 C_00ad5040::sub_00ad5040(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ad5040 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  sub_00716170(param_2,param_1 + 0xc4);
  sub_00716170(param_2,param_1 + 0xca);
  sub_00716170(param_2,param_1 + 0xd0);
  sub_00716170(param_2,param_1 + 0xd6);
  sub_00716170(param_2,param_1 + 0xdc);
  sub_00716170(param_2,param_1 + 0xe2);
  return uVar1;
}

struct A_00ad50e0 { virtual void sub_00adb280(); char pad[16]; };

struct B_00ad50e0 { virtual void sub_00adb280(); };

struct C_00ad50e0 : A_00ad50e0, B_00ad50e0 { virtual void sub_00adb280(); C_00ad50e0(); };

C_00ad50e0::C_00ad50e0() {}

// @baa 0x00ad50e0
void C_00ad50e0::sub_00adb280() {}

struct FSparseArrayConstIt_00ad53a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad53a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad53a0
FSparseArrayConstIt_00ad53a0::FSparseArrayConstIt_00ad53a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad57b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad57b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad57b0
FSparseArrayConstIt_00ad57b0::FSparseArrayConstIt_00ad57b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad5800 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad5800(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad5800
FSparseArrayConstIt_00ad5800::FSparseArrayConstIt_00ad5800(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad5850 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad5850& operator++();
};

// @baa 0x00ad5850
FSparseArrayConstIt_00ad5850& FSparseArrayConstIt_00ad5850::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ad5870 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad5870(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad5870
FSparseArrayConstIt_00ad5870::FSparseArrayConstIt_00ad5870(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad63b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad63b0& operator++();
};

// @baa 0x00ad63b0
FSparseArrayConstIt_00ad63b0& FSparseArrayConstIt_00ad63b0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00ad6810 {
    void sub_00ad6810();
};

// @baa 0x00ad6810
void C_00ad6810::sub_00ad6810(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// @baa 0x00ad6920
void __stdcall sub_00ad6920(int a0, int a1) {  }

struct FSparseArrayConstIt_00ad6b60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad6b60(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad6b60
FSparseArrayConstIt_00ad6b60::FSparseArrayConstIt_00ad6b60(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad6dd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad6dd0& operator++();
};

// @baa 0x00ad6dd0
FSparseArrayConstIt_00ad6dd0& FSparseArrayConstIt_00ad6dd0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ad6df0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad6df0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad6df0
FSparseArrayConstIt_00ad6df0::FSparseArrayConstIt_00ad6df0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad6e40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad6e40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad6e40
FSparseArrayConstIt_00ad6e40::FSparseArrayConstIt_00ad6e40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad6e90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad6e90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad6e90
FSparseArrayConstIt_00ad6e90::FSparseArrayConstIt_00ad6e90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad6ee0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad6ee0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad6ee0
FSparseArrayConstIt_00ad6ee0::FSparseArrayConstIt_00ad6ee0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad6f30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad6f30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad6f30
FSparseArrayConstIt_00ad6f30::FSparseArrayConstIt_00ad6f30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00ad6fc0 {
    undefined4 sub_00ad6fc0(byte);
    int sub_00ac66b0();
};

// @baa 0x00ad6fc0
undefined4 C_00ad6fc0::sub_00ad6fc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00ad6fc0 *)(((char *)this + 0x2c)))->sub_00ac66b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FSparseArrayConstIt_00ad71d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad71d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad71d0
FSparseArrayConstIt_00ad71d0::FSparseArrayConstIt_00ad71d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7220 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7220(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7220
FSparseArrayConstIt_00ad7220::FSparseArrayConstIt_00ad7220(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7270 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7270(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7270
FSparseArrayConstIt_00ad7270::FSparseArrayConstIt_00ad7270(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad72c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad72c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad72c0
FSparseArrayConstIt_00ad72c0::FSparseArrayConstIt_00ad72c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7330 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7330(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7330
FSparseArrayConstIt_00ad7330::FSparseArrayConstIt_00ad7330(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7380 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7380(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7380
FSparseArrayConstIt_00ad7380::FSparseArrayConstIt_00ad7380(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad73d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad73d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad73d0
FSparseArrayConstIt_00ad73d0::FSparseArrayConstIt_00ad73d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7420 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7420(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7420
FSparseArrayConstIt_00ad7420::FSparseArrayConstIt_00ad7420(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7470 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7470(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7470
FSparseArrayConstIt_00ad7470::FSparseArrayConstIt_00ad7470(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad74c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad74c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad74c0
FSparseArrayConstIt_00ad74c0::FSparseArrayConstIt_00ad74c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7510 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7510(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7510
FSparseArrayConstIt_00ad7510::FSparseArrayConstIt_00ad7510(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7560 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7560(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7560
FSparseArrayConstIt_00ad7560::FSparseArrayConstIt_00ad7560(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad75b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad75b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad75b0
FSparseArrayConstIt_00ad75b0::FSparseArrayConstIt_00ad75b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7600 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7600(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7600
FSparseArrayConstIt_00ad7600::FSparseArrayConstIt_00ad7600(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7650 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7650(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7650
FSparseArrayConstIt_00ad7650::FSparseArrayConstIt_00ad7650(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad76a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad76a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad76a0
FSparseArrayConstIt_00ad76a0::FSparseArrayConstIt_00ad76a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad76f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad76f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad76f0
FSparseArrayConstIt_00ad76f0::FSparseArrayConstIt_00ad76f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7740 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7740(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7740
FSparseArrayConstIt_00ad7740::FSparseArrayConstIt_00ad7740(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7790 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7790(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7790
FSparseArrayConstIt_00ad7790::FSparseArrayConstIt_00ad7790(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad77e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad77e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad77e0
FSparseArrayConstIt_00ad77e0::FSparseArrayConstIt_00ad77e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7830 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7830(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7830
FSparseArrayConstIt_00ad7830::FSparseArrayConstIt_00ad7830(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7880 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7880(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7880
FSparseArrayConstIt_00ad7880::FSparseArrayConstIt_00ad7880(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7920 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7920(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7920
FSparseArrayConstIt_00ad7920::FSparseArrayConstIt_00ad7920(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad7970 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad7970(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad7970
FSparseArrayConstIt_00ad7970::FSparseArrayConstIt_00ad7970(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad79c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad79c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad79c0
FSparseArrayConstIt_00ad79c0::FSparseArrayConstIt_00ad79c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00ad7a10 {
    undefined4 sub_00ad7a10(byte);
};

int sub_00acf870(void);
// @baa 0x00ad7a10
undefined4 C_00ad7a10::sub_00ad7a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00acf870();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ad7a30 {
    undefined4 sub_00ad7a30(byte);
};

int sub_00acf930(void);
// @baa 0x00ad7a30
undefined4 C_00ad7a30::sub_00ad7a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00acf930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ad7a50 {
    undefined4 sub_00ad7a50(byte);
};

int sub_00acf9a0(void);
// @baa 0x00ad7a50
undefined4 C_00ad7a50::sub_00ad7a50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00acf9a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ad81a0 {
    void sub_00ad81a0(int);
    int sub_00abadc0(int, int, int);
};

// @baa 0x00ad81a0
void C_00ad81a0::sub_00ad81a0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (*(int *)(param_1 + 0x314) != param_2) {
    *(int *)(param_1 + 0x314) = param_2;
    ((C_00ad81a0 *)(this))->sub_00abadc0(0, param_2, 0x30);
  }
  return;
}

struct C_00ad88e0 {
    undefined4 sub_00ad88e0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00ad88e0
undefined4 C_00ad88e0::sub_00ad88e0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00ad88e0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00a49bb0(param_2,param_1 + 0x54);
  sub_007161b0(param_2,param_1 + 0xc0);
  sub_007161b0(param_2,param_1 + 0xc6);
  return uVar1;
}

struct A_00ad8930 { virtual void sub_00ad8a70(); char pad[16]; };

struct B_00ad8930 { virtual void sub_00ad8a70(); };

struct C_00ad8930 : A_00ad8930, B_00ad8930 { virtual void sub_00ad8a70(); C_00ad8930(); };

C_00ad8930::C_00ad8930() {}

// @baa 0x00ad8930
void C_00ad8930::sub_00ad8a70() {}

struct C_00ad8a70 {
    undefined4 sub_00ad8a70(byte);
};

int sub_00ad8940(void);
// @baa 0x00ad8a70
undefined4 C_00ad8a70::sub_00ad8a70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad8940();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ad8a90 {
    undefined4 sub_00ad8a90(byte);
};

int sub_00ad3170(void);
// @baa 0x00ad8a90
undefined4 C_00ad8a90::sub_00ad8a90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad3170();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ad8ba0 {
    undefined4 sub_00ad8ba0(byte);
};

int sub_00ad25d0(void);
// @baa 0x00ad8ba0
undefined4 C_00ad8ba0::sub_00ad8ba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad25d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ad8bc0 {
    void sub_00ad8bc0();
};

// @baa 0x00ad8bc0
void C_00ad8bc0::sub_00ad8bc0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}

struct C_00ad8bd0 {
    void sub_00ad8bd0();
};

// @baa 0x00ad8bd0
void C_00ad8bd0::sub_00ad8bd0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

struct C_view_00ad9120 {
    int sub_00acda80(int, int);
};

// @baa 0x00ad9120
int UFracturedStaticMeshComponent::sub_00ad9120(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00ad9120 *)(this))->sub_00acda80((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_view_00ad92e0 {
    int sub_00acde90(int, int);
};

// @baa 0x00ad92e0
int UFracturedStaticMeshComponent::sub_00ad92e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00ad92e0 *)(this))->sub_00acde90((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = param_2 * 0x30 + *param_1, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct FSparseArrayConstIt_00ad96c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad96c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad96c0
FSparseArrayConstIt_00ad96c0::FSparseArrayConstIt_00ad96c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_00ad5580();
struct S {
    int sub_00ad9710();
};

// @baa 0x00ad9710
int S::sub_00ad9710() {
    ((int*)((char*)this + 0x74))[0] += 1;
    return sub_00ad5580();
}

struct M_00ad97b0 { void sub_00ad4100(); };

struct C_00ad97b0 { char pad[112]; M_00ad97b0 m; void sub_00ad97b0(); };

// @baa 0x00ad97b0
void C_00ad97b0::sub_00ad97b0() { m.sub_00ad4100(); }

struct M_00ad97c0 { void sub_00ad5750(); };

struct C_00ad97c0 { char pad[112]; M_00ad97c0 m; void sub_00ad97c0(); };

// @baa 0x00ad97c0
void C_00ad97c0::sub_00ad97c0() { m.sub_00ad5750(); }

struct FSparseArrayConstIt_00ad97d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad97d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad97d0
FSparseArrayConstIt_00ad97d0::FSparseArrayConstIt_00ad97d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad9820 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad9820(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad9820
FSparseArrayConstIt_00ad9820::FSparseArrayConstIt_00ad9820(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ad9870 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad9870& operator++();
};

// @baa 0x00ad9870
FSparseArrayConstIt_00ad9870& FSparseArrayConstIt_00ad9870::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ad9890 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ad9890(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ad9890
FSparseArrayConstIt_00ad9890::FSparseArrayConstIt_00ad9890(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00ada200 {
    void sub_00ada200();
    int sub_00ad4350(int);
};

// @baa 0x00ada200
void C_00ada200::sub_00ada200(void)
{
    int param_1 = (int)this;
  ((C_00ada200 *)((*(char **)((char *)this + 0x1c))))->sub_00ad4350(*(undefined4 *)(param_1 + 0x14));
  return;
}

struct FSparseArrayConstIt_00ada210 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ada210& operator++();
};

// @baa 0x00ada210
FSparseArrayConstIt_00ada210& FSparseArrayConstIt_00ada210::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct M_00ada230 { void sub_00ad64f0(); };

struct C_00ada230 { char pad[64]; M_00ada230 m; void sub_00ada230(); };

// @baa 0x00ada230
void C_00ada230::sub_00ada230() { m.sub_00ad64f0(); }

struct M_00ada240 { void sub_00ad6560(); };

struct C_00ada240 { char pad[64]; M_00ada240 m; void sub_00ada240(); };

// @baa 0x00ada240
void C_00ada240::sub_00ada240() { m.sub_00ad6560(); }

struct FSparseArrayConstIt_00adaf00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00adaf00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00adaf00
FSparseArrayConstIt_00adaf00::FSparseArrayConstIt_00adaf00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00adaf50 {
    void sub_00adaf50();
    int sub_00ad6820(int);
};

// @baa 0x00adaf50
void C_00adaf50::sub_00adaf50(void)
{
    int param_1 = (int)this;
  ((C_00adaf50 *)((*(char **)((char *)this + 0x10))))->sub_00ad6820(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00adaf70 {
    void sub_00adaf70();
    int sub_00ad68a0(int);
};

// @baa 0x00adaf70
void C_00adaf70::sub_00adaf70(void)
{
    int param_1 = (int)this;
  ((C_00adaf70 *)((*(char **)((char *)this + 0x10))))->sub_00ad68a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00adb1f0 {
    undefined4 sub_00adb1f0(byte);
};

int sub_00ad6630(void);
// @baa 0x00adb1f0
undefined4 C_00adb1f0::sub_00adb1f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad6630();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00adb210 { void sub_00ad8c00(); };

struct C_00adb210 { char pad[4]; M_00adb210 m; void sub_00adb210(); };

// @baa 0x00adb210
void C_00adb210::sub_00adb210() { m.sub_00ad8c00(); }

struct C_00adb220 {
    undefined4 sub_00adb220(byte);
};

int sub_00ad6690(void);
// @baa 0x00adb220
undefined4 C_00adb220::sub_00adb220(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad6690();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00adb240 {
    undefined4 sub_00adb240(byte);
};

int sub_00ad66f0(void);
// @baa 0x00adb240
undefined4 C_00adb240::sub_00adb240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad66f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00adb260 {
    undefined4 sub_00adb260(byte);
};

int sub_00ad6750(void);
// @baa 0x00adb260
undefined4 C_00adb260::sub_00adb260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad6750();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00adb280 {
    undefined4 sub_00adb280(byte);
};

int sub_00ad67b0(void);
// @baa 0x00adb280
undefined4 C_00adb280::sub_00adb280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad67b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00adbb50 { void sub_00ad8c00(); };

struct C_00adbb50 { char pad[4]; M_00adbb50 m; void sub_00adbb50(); };

// @baa 0x00adbb50
void C_00adbb50::sub_00adbb50() { m.sub_00ad8c00(); }

struct FSparseArrayConstIt_00adc2c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00adc2c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00adc2c0
FSparseArrayConstIt_00adc2c0::FSparseArrayConstIt_00adc2c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00adc310 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00adc310(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00adc310
FSparseArrayConstIt_00adc310::FSparseArrayConstIt_00adc310(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00adc360 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00adc360(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00adc360
FSparseArrayConstIt_00adc360::FSparseArrayConstIt_00adc360(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00adddd0 {
    undefined4 sub_00adddd0(byte);
    int sub_00ad8c00();
};

// @baa 0x00adddd0
undefined4 C_00adddd0::sub_00adddd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00adddd0 *)(((char *)this + 4)))->sub_00ad8c00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00adde60 { void sub_00ad83d0(); };

struct C_00adde60 { char pad[64]; M_00adde60 m; void sub_00adde60(); };

// @baa 0x00adde60
void C_00adde60::sub_00adde60() { m.sub_00ad83d0(); }

struct M_00adde70 { void sub_00ad8560(); };

struct C_00adde70 { char pad[64]; M_00adde70 m; void sub_00adde70(); };

// @baa 0x00adde70
void C_00adde70::sub_00adde70() { m.sub_00ad8560(); }

void sub_00ad9360();
// @baa 0x00ade170
void sub_00ade170(void) { sub_00ad9360(); }

struct C_00adefe0 {
    undefined4 sub_00adefe0();
    int sub_00ad8ca0(int);
};

// @baa 0x00adefe0
undefined4 C_00adefe0::sub_00adefe0(void)
{
    int param_1 = (int)this;
  ((C_00adefe0 *)((*(char **)((char *)this + 8))))->sub_00ad8ca0(*(undefined4 *)(param_1 + 4));
  return 0xc;
}

struct C_00adf270 {
    undefined4 sub_00adf270();
    int sub_00adf1e0(int);
};

// @baa 0x00adf270
undefined4 C_00adf270::sub_00adf270(void)
{
    int param_1 = (int)this;
  ((C_00adf270 *)((*(char **)((char *)this + 4))))->sub_00adf1e0(*(undefined4 *)(param_1 + 8));
  return 0xc;
}

struct C_view_00adf540 {
    int sub_00ad8f30(int, int);
};

// @baa 0x00adf540
int UFracturedStaticMeshComponent::sub_00adf540(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  ((C_view_00adf540 *)(this))->sub_00ad8f30(param_2, param_3);
  return param_1;
}

void sub_00adab30();
// @baa 0x00adf8d0
void sub_00adf8d0(void) { sub_00adab30(); }

struct C_00adfb20 {
    char pad[0x74];
    int f0x74;
    void sub_00adadb0();
    void sub_00adfb20();
};

// @baa 0x00adfb20
void C_00adfb20::sub_00adfb20() {
    f0x74++;
    sub_00adadb0();
}

struct C_00ad2260 {
    int A;
    int B;
    int C;
    int D;
    int E;
    int F;
    int G;
    C_00ad2260* sub_00ad2260();
};

// @baa 0x00ad2260
C_00ad2260* C_00ad2260::sub_00ad2260()
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    F = 0;
    G = 0;
    return this;
}
