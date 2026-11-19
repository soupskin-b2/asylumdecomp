// Engine_1170000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_0117b220 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0117b220& operator++();
};

// @baa 0x0117b220
FSparseArrayConstIt_0117b220& FSparseArrayConstIt_0117b220::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0117b240 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0117b240(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0117b240
FSparseArrayConstIt_0117b240::FSparseArrayConstIt_0117b240(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0117b290 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0117b290& operator++();
};

// @baa 0x0117b290
FSparseArrayConstIt_0117b290& FSparseArrayConstIt_0117b290::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0117b2b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0117b2b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0117b2b0
FSparseArrayConstIt_0117b2b0::FSparseArrayConstIt_0117b2b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
