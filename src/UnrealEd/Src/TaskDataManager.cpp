// TaskDataManager.cpp: 9 functions
// Placed here by: neighbours 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C_view {
    int sub_014860e0(int);
};

struct C_01486260 { int sub_01486260(undefined4 param_2); };
// @baa 0x01486260
int C_01486260::sub_01486260(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_014860e0(param_2);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return param_1;
}

int sub_0053dfa0(...);
int sub_014824d0(void);
struct C_01486370 { undefined4 sub_01486370(byte param_2); };
// @baa 0x01486370
undefined4 C_01486370::sub_01486370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014824d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_014865d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014865d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014865d0
FSparseArrayConstIt_014865d0::FSparseArrayConstIt_014865d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01486620 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01486620(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01486620
FSparseArrayConstIt_01486620::FSparseArrayConstIt_01486620(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01486670 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01486670(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01486670
FSparseArrayConstIt_01486670::FSparseArrayConstIt_01486670(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01486840 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01486840(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01486840
FSparseArrayConstIt_01486840::FSparseArrayConstIt_01486840(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01486890 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01486890(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01486890
FSparseArrayConstIt_01486890::FSparseArrayConstIt_01486890(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014868e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014868e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014868e0
FSparseArrayConstIt_014868e0::FSparseArrayConstIt_014868e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01486930 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01486930(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01486930
FSparseArrayConstIt_01486930::FSparseArrayConstIt_01486930(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
