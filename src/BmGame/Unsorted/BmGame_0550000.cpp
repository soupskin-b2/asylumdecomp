// BmGame_0550000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

int sub_0054f600(void);
struct C_005539e0 { int sub_005539e0(void); };
// @baa 0x005539e0
int C_005539e0::sub_005539e0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~*(uint *)(param_1 + 4);
  sub_0054f600();
  return param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00553a00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00553a00& operator++();
};

// @baa 0x00553a00
FSparseArrayConstIt_00553a00& FSparseArrayConstIt_00553a00::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00553a20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00553a20& operator++();
};

// @baa 0x00553a20
FSparseArrayConstIt_00553a20& FSparseArrayConstIt_00553a20::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00553a40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00553a40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00553a40
FSparseArrayConstIt_00553a40::FSparseArrayConstIt_00553a40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00553a90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00553a90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00553a90
FSparseArrayConstIt_00553a90::FSparseArrayConstIt_00553a90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
