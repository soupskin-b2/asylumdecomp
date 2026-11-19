// UnURL.cpp: 6 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct M_00d54b40 { void sub_00ccbf20(); };

struct C { char pad[16]; M_00d54b40 m; void sub_00d54b40(); };

// @baa 0x00d54b40
void C::sub_00d54b40() { m.sub_00ccbf20(); }

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00d54e40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d54e40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00d54e40
FSparseArrayConstIt_00d54e40::FSparseArrayConstIt_00d54e40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00d56830 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00d56830& operator++();
};

// @baa 0x00d56830
FSparseArrayConstIt_00d56830& FSparseArrayConstIt_00d56830::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00d56850 {
    undefined4 sub_00d56850(byte);
};

int sub_0053dfa0(...);
int sub_00d54ab0(void);
// @baa 0x00d56850
undefined4 C_00d56850::sub_00d56850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d54ab0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_00ccbf20();
};

// @baa 0x00d56c70
undefined4 UObject::sub_00d56c70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 0x10)))->sub_00ccbf20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d56de0 {
    int sub_00d56de0();
};

int sub_00d54120(void);
// @baa 0x00d56de0
int C_00d56de0::sub_00d56de0(void)
{
    int param_1 = (int)this;

  sub_00d54120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
