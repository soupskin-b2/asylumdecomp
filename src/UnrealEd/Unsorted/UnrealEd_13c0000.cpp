// UnrealEd_13c0000.cpp (part 1 of 2): 63 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_013c4520 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013c4520& operator++();
};

// @baa 0x013c4520
FSparseArrayConstIt_013c4520& FSparseArrayConstIt_013c4520::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013c4540 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013c4540& operator++();
};

// @baa 0x013c4540
FSparseArrayConstIt_013c4540& FSparseArrayConstIt_013c4540::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013c4560 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013c4560& operator++();
};

// @baa 0x013c4560
FSparseArrayConstIt_013c4560& FSparseArrayConstIt_013c4560::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013c4580 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013c4580& operator++();
};

// @baa 0x013c4580
FSparseArrayConstIt_013c4580& FSparseArrayConstIt_013c4580::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013c45a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013c45a0& operator++();
};

// @baa 0x013c45a0
FSparseArrayConstIt_013c45a0& FSparseArrayConstIt_013c45a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view {
    int sub_013b74e0(int, int);
};

// @baa 0x013c45c0
int UPackageMap::sub_013c45c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_013b74e0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x48, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_013c4600 {
    int sub_013b7470(int, int);
};

// @baa 0x013c4600
int UPackageMap::sub_013c4600(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_013c4600 *)(this))->sub_013b7470((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x48, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct FSparseArrayConstIt_013c4640 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013c4640& operator++();
};

// @baa 0x013c4640
FSparseArrayConstIt_013c4640& FSparseArrayConstIt_013c4640::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013c4660 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013c4660& operator++();
};

// @baa 0x013c4660
FSparseArrayConstIt_013c4660& FSparseArrayConstIt_013c4660::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view_013c47c0 {
    int sub_013be1a0(int);
};

// @baa 0x013c47c0
void UPackageMap::sub_013c47c0(void)
{
    int param_1 = (int)this;
  ((C_view_013c47c0 *)((*(char **)((char *)this + 0x1c))))->sub_013be1a0(*(undefined4 *)(param_1 + 0x14));
  return;
}

struct C_view_013c47d0 {
    int sub_013bda90(int);
};

// @baa 0x013c47d0
void UPackageMap::sub_013c47d0(void)
{
    int param_1 = (int)this;
  ((C_view_013c47d0 *)((*(char **)((char *)this + 0x10))))->sub_013bda90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_013c47f0 {
    int sub_013bdcf0(int);
};

// @baa 0x013c47f0
void UPackageMap::sub_013c47f0(void)
{
    int param_1 = (int)this;
  ((C_view_013c47f0 *)((*(char **)((char *)this + 0x10))))->sub_013bdcf0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_013c4810 {
    int sub_013bdf50(int);
};

// @baa 0x013c4810
void UPackageMap::sub_013c4810(void)
{
    int param_1 = (int)this;
  ((C_view_013c4810 *)((*(char **)((char *)this + 0x10))))->sub_013bdf50(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_013c4830 {
    int sub_013be1a0(int);
};

// @baa 0x013c4830
void UPackageMap::sub_013c4830(void)
{
    int param_1 = (int)this;
  ((C_view_013c4830 *)((*(char **)((char *)this + 0x10))))->sub_013be1a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C {
    undefined4 * sub_013c5c90(undefined4 *);
    int sub_013b8110(int);
};

// @baa 0x013c5c90
undefined4 * C::sub_013c5c90(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C *)(((char *)this + 8)))->sub_013b8110((int)(param_2 + 2));
  return param_1;
}

void sub_013bf260();
// @baa 0x013c5cc0
void sub_013c5cc0(void) { sub_013bf260(); }

struct C_013c6320 { void sub_013c5d60(); void sub_013c6320(int); };

// @baa 0x013c6320
void C_013c6320::sub_013c6320(int) { sub_013c5d60(); }

struct S {
    void sub_013c3da0();
    void sub_013c4040();
    void sub_013c71f0();
};

// @baa 0x013c71f0
void S::sub_013c71f0() {
    sub_013c3da0();
    sub_013c4040();
}

void sub_013c4740();
// @baa 0x013c74d0
void sub_013c74d0(void) { sub_013c4740(); }

struct C_013c74e0 {
    void sub_013c74e0();
    int sub_013be1a0(int);
};

// @baa 0x013c74e0
void C_013c74e0::sub_013c74e0(void)
{
    int param_1 = (int)this;
  ((C_013c74e0 *)((*(char **)((char *)this + 0x1c))))->sub_013be1a0(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

struct FSparseArrayConstIt_013c7870 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013c7870(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013c7870
FSparseArrayConstIt_013c7870::FSparseArrayConstIt_013c7870(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_013be8a0(void);
// @baa 0x013c8560
int UPackageMap::sub_013c8560(void)
{
    int param_1 = (int)this;

  sub_013be8a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_013be900(void);
// @baa 0x013c8580
int UPackageMap::sub_013c8580(void)
{
    int param_1 = (int)this;

  sub_013be900();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_013be9c0(void);
// @baa 0x013c85a0
int UPackageMap::sub_013c85a0(void)
{
    int param_1 = (int)this;

  sub_013be9c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_013bea20(void);
// @baa 0x013c85c0
int UPackageMap::sub_013c85c0(void)
{
    int param_1 = (int)this;

  sub_013bea20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_013bea80(void);
// @baa 0x013c85e0
int UPackageMap::sub_013c85e0(void)
{
    int param_1 = (int)this;

  sub_013bea80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013c87c0 { C_013c87c0* sub_013c87c0(void); };

// @baa 0x013c87c0
C_013c87c0* C_013c87c0::sub_013c87c0(void) { return this; }

struct C_013c9280 { void sub_013c8660(int); C_013c9280 *sub_013c9280(int); };

// @baa 0x013c9280
C_013c9280 *C_013c9280::sub_013c9280(int a) { sub_013c8660(a); return this; }

struct C_view_013c9480 {
    int sub_013c7980(int, int);
};

// @baa 0x013c9480
void UPackageMap::sub_013c9480(void)
{
    int param_1 = (int)this;
  ((C_view_013c9480 *)(this))->sub_013c7980(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_013c9580 {
    int sub_013c7a40(int, int);
};

// @baa 0x013c9580
undefined4 UPackageMap::sub_013c9580(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_013c9580 *)(this))->sub_013c7a40(param_2, param_3);
  return param_1;
}

struct C_view_013c95a0 {
    int sub_00dd44b0(int, int);
};

// @baa 0x013c95a0
void UPackageMap::sub_013c95a0(void)
{
    int param_1 = (int)this;
  ((C_view_013c95a0 *)(this))->sub_00dd44b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_013c95b0 {
    int sub_013c7aa0(int, int);
};

// @baa 0x013c95b0
undefined4 UPackageMap::sub_013c95b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_013c95b0 *)(this))->sub_013c7aa0(param_2, param_3);
  return param_1;
}

struct C_view_013c95d0 {
    int sub_013c7b00(int, int);
};

// @baa 0x013c95d0
void UPackageMap::sub_013c95d0(void)
{
    int param_1 = (int)this;
  ((C_view_013c95d0 *)(this))->sub_013c7b00(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_013c9640 {
    int sub_013c7bc0(int, int);
};

// @baa 0x013c9640
void UPackageMap::sub_013c9640(void)
{
    int param_1 = (int)this;
  ((C_view_013c9640 *)(this))->sub_013c7bc0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_013c9750 {
    int sub_013c7c80(int, int);
};

// @baa 0x013c9750
undefined4 UPackageMap::sub_013c9750(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_013c9750 *)(this))->sub_013c7c80(param_2, param_3);
  return param_1;
}

void sub_013c9140();
// @baa 0x013c9e80
void sub_013c9e80(void) { sub_013c9140(); }

void sub_013c91b0();
// @baa 0x013c9e90
void sub_013c9e90(void) { sub_013c91b0(); }

void sub_013c9210();
// @baa 0x013c9ea0
void sub_013c9ea0(void) { sub_013c9210(); }

struct C_013c9eb0 { void sub_013c8660(int); C_013c9eb0 *sub_013c9eb0(int); };

// @baa 0x013c9eb0
C_013c9eb0 *C_013c9eb0::sub_013c9eb0(int a) { sub_013c8660(a); return this; }

void sub_013c92a0();
// @baa 0x013c9ed0
void sub_013c9ed0(void) { sub_013c92a0(); }

void sub_013c93c0();
// @baa 0x013c9f20
void sub_013c9f20(void) { sub_013c93c0(); }

void sub_013c9420();
// @baa 0x013c9f30
void sub_013c9f30(void) { sub_013c9420(); }

struct C_view_013c9f80 {
    int sub_013c7a40(int, int);
};

// @baa 0x013c9f80
int UPackageMap::sub_013c9f80(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_013c9f80 *)(this))->sub_013c7a40(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

void sub_01074630();
// @baa 0x013ca020
void sub_013ca020(void) { sub_01074630(); }

void sub_013c95e0();
// @baa 0x013ca030
void sub_013ca030(void) { sub_013c95e0(); }

struct C_view_013ca080 {
    int sub_013c7c80(int, int);
};

// @baa 0x013ca080
int UPackageMap::sub_013ca080(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_013ca080 *)(this))->sub_013c7c80(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

void sub_013c9770();
// @baa 0x013ca0d0
void sub_013ca0d0(void) { sub_013c9770(); }

struct C_view_013ca120 {
    int sub_013c7da0(int, int);
};

// @baa 0x013ca120
int UPackageMap::sub_013ca120(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_013ca120 *)(this))->sub_013c7da0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_view_013ca170 {
    int sub_013c7e00(int, int);
};

// @baa 0x013ca170
int UPackageMap::sub_013ca170(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_013ca170 *)(this))->sub_013c7e00(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_013ca470 {
    int sub_013ca470(undefined4, undefined4, undefined4);
    int sub_013c80a0(int, int);
};

// @baa 0x013ca470
int C_013ca470::sub_013ca470(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_013ca470 *)(this))->sub_013c80a0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_013ca4c0 {
    int sub_013ca4c0(undefined4, undefined4, undefined4);
    int sub_013c8100(int, int);
};

// @baa 0x013ca4c0
int C_013ca4c0::sub_013ca4c0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_013ca4c0 *)(this))->sub_013c8100(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_013ca510 {
    int sub_013ca510();
};

// @baa 0x013ca510
int C_013ca510::sub_013ca510(void)
{
    int param_1 = (int)this;

  sub_013be8a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_013ca530 {
    int sub_013bdbf0();
    int sub_0055ab10(int, int);
};

// @baa 0x013ca530
void UPackageMap::sub_013ca530(void)
{
    int param_1 = (int)this;
  ((C_view_013ca530 *)(this))->sub_013bdbf0();
  ((C_view_013ca530 *)(this))->sub_0055ab10(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_013ca550 {
    int sub_013ca550();
};

// @baa 0x013ca550
int C_013ca550::sub_013ca550(void)
{
    int param_1 = (int)this;

  sub_013be900();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013ca570 {
    int sub_013ca570();
};

// @baa 0x013ca570
int C_013ca570::sub_013ca570(void)
{
    int param_1 = (int)this;

  sub_013be9c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_013ca590 {
    int sub_013be0b0();
    int sub_013c7bc0(int, int);
};

// @baa 0x013ca590
void UPackageMap::sub_013ca590(void)
{
    int param_1 = (int)this;
  ((C_view_013ca590 *)(this))->sub_013be0b0();
  ((C_view_013ca590 *)(this))->sub_013c7bc0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x013ca5b0
int UPackageMap::sub_013ca5b0(void)
{
    int param_1 = (int)this;

  sub_013bea20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x013ca5d0
int UPackageMap::sub_013ca5d0(void)
{
    int param_1 = (int)this;

  sub_013bea80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013ca5f0 { void sub_013c9bc0(int); C_013ca5f0 *sub_013ca5f0(int); };

// @baa 0x013ca5f0
C_013ca5f0 *C_013ca5f0::sub_013ca5f0(int a) { sub_013c9bc0(a); return this; }

struct C_013ca610 { void sub_013c9ca0(int); C_013ca610 *sub_013ca610(int); };

// @baa 0x013ca610
C_013ca610 *C_013ca610::sub_013ca610(int a) { sub_013c9ca0(a); return this; }

void sub_013c8e40();
// @baa 0x013ca6b0
void sub_013ca6b0(void) { sub_013c8e40(); }

struct S_013cc300 {
    void sub_013c8eb0();
    void sub_013cc300();
};

// @baa 0x013cc300
void S_013cc300::sub_013cc300()
{
    sub_013c8eb0();
}

void sub_013c9060();
// @baa 0x013cfec0
void sub_013cfec0(void) { sub_013c9060(); }
