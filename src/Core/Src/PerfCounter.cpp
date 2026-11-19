// PerfCounter.cpp: 4 functions
// Placed here by: callers 2, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C_view {
    int sub_006029e0(int, int);
};

// @baa 0x0060bb90
int UFracturedStaticMeshComponent::sub_0060bb90(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_006029e0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_0060d930 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0060d930(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0060d930
FSparseArrayConstIt_0060d930::FSparseArrayConstIt_0060d930(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_view_006161b0 {
    int sub_006134b0(int, int);
};

// @baa 0x006161b0
void UPackageMap::sub_006161b0(void)
{
    int param_1 = (int)this;
  ((C_view_006161b0 *)(this))->sub_006134b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C { void sub_00616150(int); void sub_00619c00(); };

// @baa 0x00619c00
void C::sub_00619c00() { sub_00616150(0); }
