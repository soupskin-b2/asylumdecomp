// Core_0fb0000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00fb5a30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00fb5a30& operator++();
};

// @baa 0x00fb5a30
FSparseArrayConstIt_00fb5a30& FSparseArrayConstIt_00fb5a30::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00fb5a50 { int sub_00fb5a50(void); };
// @baa 0x00fb5a50
int C_00fb5a50::sub_00fb5a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00fb5a70 { int sub_00fb5a70(void); };
// @baa 0x00fb5a70
int C_00fb5a70::sub_00fb5a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x1c;
}

struct C_view {
    int sub_00fb2ef0(int, int);
};

struct C_00fb5d80 { int sub_00fb5d80(int param_2); };
// @baa 0x00fb5d80
int C_00fb5d80::sub_00fb5d80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00fb2ef0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct FSparseArrayConstIt_00fb5db0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00fb5db0& operator++();
};

// @baa 0x00fb5db0
FSparseArrayConstIt_00fb5db0& FSparseArrayConstIt_00fb5db0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00fb5dd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00fb5dd0& operator++();
};

// @baa 0x00fb5dd0
FSparseArrayConstIt_00fb5dd0& FSparseArrayConstIt_00fb5dd0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view_00fb5df0 {
    int sub_00fb2fa0(int, int);
};

struct C_00fb5df0 { int sub_00fb5df0(int param_2); };
// @baa 0x00fb5df0
int C_00fb5df0::sub_00fb5df0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb5df0 *)(this))->sub_00fb2fa0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x9a0 + *param_1;
  }
  return 0;
}

struct FSparseArrayConstIt_00fb5e20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00fb5e20& operator++();
};

// @baa 0x00fb5e20
FSparseArrayConstIt_00fb5e20& FSparseArrayConstIt_00fb5e20::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view_00fb5e40 {
    int sub_00fb30b0(int, int);
};

struct C_00fb5e40 { int sub_00fb5e40(int param_2); };
// @baa 0x00fb5e40
int C_00fb5e40::sub_00fb5e40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb5e40 *)(this))->sub_00fb30b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x9d8 + *param_1;
  }
  return 0;
}

struct C_view_00fb5e70 {
    int sub_00fb31a0(int, int);
};

struct C_00fb5e70 { int sub_00fb5e70(int param_2); };
// @baa 0x00fb5e70
int C_00fb5e70::sub_00fb5e70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb5e70 *)(this))->sub_00fb31a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x13bc + *param_1;
  }
  return 0;
}

struct C_view_00fb5f00 {
    int sub_00fb3290(int, int);
};

struct C_00fb5f00 { int sub_00fb5f00(int param_2); };
// @baa 0x00fb5f00
int C_00fb5f00::sub_00fb5f00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb5f00 *)(this))->sub_00fb3290((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xd0 + *param_1;
  }
  return 0;
}
