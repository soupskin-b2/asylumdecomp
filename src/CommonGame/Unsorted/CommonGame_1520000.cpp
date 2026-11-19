// CommonGame_1520000.cpp: 17 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    int sub_0152d720();
};

// @baa 0x0152d720
int C::sub_0152d720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0152d730 {
    int sub_0152d730();
};

// @baa 0x0152d730
int C_0152d730::sub_0152d730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x18;
}

struct C_view {
    int sub_01526910(int, int);
};

// @baa 0x0152d740
int UTexture2D::sub_0152d740(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_01526910((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_0152d780 {
    int sub_01526990(int, int);
};

// @baa 0x0152d780
int UTexture2D::sub_0152d780(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0152d780 *)(this))->sub_01526990((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x44, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_0152d960 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152d960& operator++();
};

// @baa 0x0152d960
FSparseArrayConstIt_0152d960& FSparseArrayConstIt_0152d960::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0152d980 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152d980& operator++();
};

// @baa 0x0152d980
FSparseArrayConstIt_0152d980& FSparseArrayConstIt_0152d980::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0152da90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152da90& operator++();
};

// @baa 0x0152da90
FSparseArrayConstIt_0152da90& FSparseArrayConstIt_0152da90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0152dab0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152dab0& operator++();
};

// @baa 0x0152dab0
FSparseArrayConstIt_0152dab0& FSparseArrayConstIt_0152dab0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0152dad0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152dad0& operator++();
};

// @baa 0x0152dad0
FSparseArrayConstIt_0152dad0& FSparseArrayConstIt_0152dad0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_0152daf0 {
    void sub_0152daf0();
    int sub_0152ba90(int);
};

// @baa 0x0152daf0
void C_0152daf0::sub_0152daf0(void)
{
    int param_1 = (int)this;
  ((C_0152daf0 *)((*(char **)((char *)this + 0x10))))->sub_0152ba90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0152db10 {
    void sub_0152db10();
    int sub_0152bd10(int);
};

// @baa 0x0152db10
void C_0152db10::sub_0152db10(void)
{
    int param_1 = (int)this;
  ((C_0152db10 *)((*(char **)((char *)this + 0x10))))->sub_0152bd10(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0152db30 {
    undefined4 sub_0152db30(byte);
    int sub_0151bd30();
};

int sub_0053dfa0(...);
// @baa 0x0152db30
undefined4 C_0152db30::sub_0152db30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0152db30 *)(((char *)this + 8)))->sub_0151bd30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FSparseArrayConstIt_0152ddd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152ddd0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152ddd0
FSparseArrayConstIt_0152ddd0::FSparseArrayConstIt_0152ddd0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152de20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152de20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152de20
FSparseArrayConstIt_0152de20::FSparseArrayConstIt_0152de20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152ded0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152ded0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152ded0
FSparseArrayConstIt_0152ded0::FSparseArrayConstIt_0152ded0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152e0d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152e0d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152e0d0
FSparseArrayConstIt_0152e0d0::FSparseArrayConstIt_0152e0d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0152e480 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0152e480(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0152e480
FSparseArrayConstIt_0152e480::FSparseArrayConstIt_0152e480(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
