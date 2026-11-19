// Engine_11d0000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    int sub_011d49b0(int);
    int sub_011d17f0(int, int);
};

// @baa 0x011d49b0
int C::sub_011d49b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C *)(this))->sub_011d17f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_011d4a40 {
    int sub_011d4a40();
};

// @baa 0x011d4a40
int C_011d4a40::sub_011d4a40(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + param_1[2] * 0x1c;
}

int sub_0053dfa0(...);
int sub_011d1670(void);
// @baa 0x011d4a60
undefined4 UObject::sub_011d4a60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011d1670();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_011d16d0(void);
// @baa 0x011d4a80
undefined4 UObject::sub_011d4a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011d16d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_011d1730(void);
// @baa 0x011d4aa0
undefined4 UObject::sub_011d4aa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011d1730();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011d4ac0 {
    undefined4 sub_011d4ac0(byte);
};

int sub_011d1790(void);
// @baa 0x011d4ac0
undefined4 C_011d4ac0::sub_011d4ac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011d1790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_011d4ae0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011d4ae0& operator++();
};

// @baa 0x011d4ae0
FSparseArrayConstIt_011d4ae0& FSparseArrayConstIt_011d4ae0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011d4c40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011d4c40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011d4c40
FSparseArrayConstIt_011d4c40::FSparseArrayConstIt_011d4c40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011d4c90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011d4c90& operator++();
};

// @baa 0x011d4c90
FSparseArrayConstIt_011d4c90& FSparseArrayConstIt_011d4c90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011d4cb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011d4cb0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011d4cb0
FSparseArrayConstIt_011d4cb0::FSparseArrayConstIt_011d4cb0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
