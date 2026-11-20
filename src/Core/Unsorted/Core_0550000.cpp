// Core_0550000.cpp: 29 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    int sub_005554e0();
};

// @baa 0x005554e0
int C::sub_005554e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x14;
}

struct C_view {
    int sub_0054db70(int, int);
};

struct C_005554f0 { int sub_005554f0(int param_2); };
// @baa 0x005554f0
int C_005554f0::sub_005554f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_0054db70((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00556dc0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00556dc0& operator++();
};

// @baa 0x00556dc0
FSparseArrayConstIt_00556dc0& FSparseArrayConstIt_00556dc0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00556de0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00556de0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00556de0
FSparseArrayConstIt_00556de0::FSparseArrayConstIt_00556de0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00556e30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00556e30& operator++();
};

// @baa 0x00556e30
FSparseArrayConstIt_00556e30& FSparseArrayConstIt_00556e30::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00556e50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00556e50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00556e50
FSparseArrayConstIt_00556e50::FSparseArrayConstIt_00556e50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00556ea0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00556ea0& operator++();
};

// @baa 0x00556ea0
FSparseArrayConstIt_00556ea0& FSparseArrayConstIt_00556ea0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00556ec0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00556ec0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00556ec0
FSparseArrayConstIt_00556ec0::FSparseArrayConstIt_00556ec0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00556f10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00556f10& operator++();
};

// @baa 0x00556f10
FSparseArrayConstIt_00556f10& FSparseArrayConstIt_00556f10::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00556f30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00556f30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00556f30
FSparseArrayConstIt_00556f30::FSparseArrayConstIt_00556f30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00556f80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00556f80& operator++();
};

// @baa 0x00556f80
FSparseArrayConstIt_00556f80& FSparseArrayConstIt_00556f80::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00557ff0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00557ff0& operator++();
};

// @baa 0x00557ff0
FSparseArrayConstIt_00557ff0& FSparseArrayConstIt_00557ff0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00558090 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00558090& operator++();
};

// @baa 0x00558090
FSparseArrayConstIt_00558090& FSparseArrayConstIt_00558090::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00558140 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00558140& operator++();
};

// @baa 0x00558140
FSparseArrayConstIt_00558140& FSparseArrayConstIt_00558140::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view_00558160 {
    int sub_005557c0(int);
};

struct C_00558160 { void sub_00558160(void); };
// @baa 0x00558160
void C_00558160::sub_00558160(void)
{
    int param_1 = (int)this;
  ((C_view_00558160 *)((*(char **)((char *)this + 0x10))))->sub_005557c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00558180 {
    int sub_005559a0(int);
};

struct C_00558180 { void sub_00558180(void); };
// @baa 0x00558180
void C_00558180::sub_00558180(void)
{
    int param_1 = (int)this;
  ((C_view_00558180 *)((*(char **)((char *)this + 0x10))))->sub_005559a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_005581a0 {
    int sub_00555ad0(int);
};

struct C_005581a0 { void sub_005581a0(void); };
// @baa 0x005581a0
void C_005581a0::sub_005581a0(void)
{
    int param_1 = (int)this;
  ((C_view_005581a0 *)((*(char **)((char *)this + 0x10))))->sub_00555ad0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_005581c0 {
    int sub_00555ce0(int);
};

struct C_005581c0 { void sub_005581c0(void); };
// @baa 0x005581c0
void C_005581c0::sub_005581c0(void)
{
    int param_1 = (int)this;
  ((C_view_005581c0 *)((*(char **)((char *)this + 0x10))))->sub_00555ce0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_005581e0 {
    int sub_00555e50(int);
};

struct C_005581e0 { void sub_005581e0(void); };
// @baa 0x005581e0
void C_005581e0::sub_005581e0(void)
{
    int param_1 = (int)this;
  ((C_view_005581e0 *)((*(char **)((char *)this + 0x10))))->sub_00555e50(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00558200 {
    int sub_00555f80(int);
};

struct C_00558200 { void sub_00558200(void); };
// @baa 0x00558200
void C_00558200::sub_00558200(void)
{
    int param_1 = (int)this;
  ((C_view_00558200 *)((*(char **)((char *)this + 0x10))))->sub_00555f80(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_00559da0();
// @baa 0x0055b790
void sub_0055b790(void) { sub_00559da0(); }

void sub_0055b950();
// @baa 0x0055e1f0
void sub_0055e1f0(void) { sub_0055b950(); }

void sub_0055b9e0();
// @baa 0x0055e4b0
void sub_0055e4b0(void) { sub_0055b9e0(); }

struct S {
    void sub_0055bb00(void);
    void sub_0055e8e0(void);
};

// @baa 0x0055e8e0
void S::sub_0055e8e0(void)
{
    sub_0055bb00();
}

void sub_0055b7a0();
// @baa 0x0055ed00
void sub_0055ed00(void) { sub_0055b7a0(); }

void sub_0055ba70();
// @baa 0x0055ed10
void sub_0055ed10(void) { sub_0055ba70(); }

void sub_0055bb90();
// @baa 0x0055ed20
void sub_0055ed20(void) { sub_0055bb90(); }

// @baa 0x0055ef70
void sub_0055ef70(void) { sub_0055b9e0(); }

void sub_0055bb00();
// @baa 0x0055ef80
void sub_0055ef80(void) { sub_0055bb00(); }
