// Engine_0ff0000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C { void sub_00ffa650(int); C *sub_00ffc130(int); };

// @baa 0x00ffc130
C *C::sub_00ffc130(int a) { sub_00ffa650(a); return this; }

struct C_view {
    int sub_00ffa960(int, int);
};

struct C_00ffc150 { int sub_00ffc150(int param_2); };
// @baa 0x00ffc150
int C_00ffc150::sub_00ffc150(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00ffa960((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00ffc2a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ffc2a0& operator++();
};

// @baa 0x00ffc2a0
FSparseArrayConstIt_00ffc2a0& FSparseArrayConstIt_00ffc2a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

int sub_0053dfa0(...);
int sub_00ffa900(void);
struct C_00ffc2c0 { undefined4 sub_00ffc2c0(byte param_2); };
// @baa 0x00ffc2c0
undefined4 C_00ffc2c0::sub_00ffc2c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ffa900();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FSparseArrayConstIt_00ffc530 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ffc530(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ffc530
FSparseArrayConstIt_00ffc530::FSparseArrayConstIt_00ffc530(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ffc640 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ffc640(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ffc640
FSparseArrayConstIt_00ffc640::FSparseArrayConstIt_00ffc640(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ffc690 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ffc690(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ffc690
FSparseArrayConstIt_00ffc690::FSparseArrayConstIt_00ffc690(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view_00ffc6e0 {
    int sub_00f2f610();
};

struct C_00ffc6e0 { undefined4 sub_00ffc6e0(byte param_2); };
// @baa 0x00ffc6e0
undefined4 C_00ffc6e0::sub_00ffc6e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00ffc6e0 *)(((char *)this + 8)))->sub_00f2f610();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
