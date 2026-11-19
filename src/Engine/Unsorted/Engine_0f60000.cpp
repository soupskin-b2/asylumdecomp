// Engine_0f60000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    undefined4 sub_00f60eb0(byte);
};

int sub_0053dfa0(...);
int sub_00f5d6b0(void);
// @baa 0x00f60eb0
undefined4 C::sub_00f60eb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5d6b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f61160 {
    undefined4 sub_00f61160(byte);
};

int sub_00f5dba0(void);
// @baa 0x00f61160
undefined4 C_00f61160::sub_00f61160(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5dba0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_00f5e3d0(int, int);
};

// @baa 0x00f61a80
int UPackageMap::sub_00f61a80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00f5e3d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00f61ab0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f61ab0& operator++();
};

// @baa 0x00f61ab0
FSparseArrayConstIt_00f61ab0& FSparseArrayConstIt_00f61ab0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f61ad0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f61ad0& operator++();
};

// @baa 0x00f61ad0
FSparseArrayConstIt_00f61ad0& FSparseArrayConstIt_00f61ad0::operator++()
{
    TConstIterator::operator++();
    return *this;
}
