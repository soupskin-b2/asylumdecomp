// Engine_16c0000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Map.h"

struct C {
    int sub_016c7520(int);
    int sub_016c5fd0(int, int);
};

// @baa 0x016c7520
int C::sub_016c7520(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C *)(this))->sub_016c5fd0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_016c7560 {
    int sub_016c7560(int);
    int sub_016c5fd0(int, int);
};

// @baa 0x016c7560
int C_016c7560::sub_016c7560(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_016c7560 *)(this))->sub_016c5fd0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_016c7710 {
    void sub_016c7710();
    int sub_016c6990(int);
};

// @baa 0x016c7710
void C_016c7710::sub_016c7710(void)
{
    int param_1 = (int)this;
  ((C_016c7710 *)((*(char **)((char *)this + 0x10))))->sub_016c6990(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_016c7730 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_016c7730& operator++();
};

// @baa 0x016c7730
FSparseArrayConstIt_016c7730& FSparseArrayConstIt_016c7730::operator++()
{
    TConstIterator::operator++();
    return *this;
}
