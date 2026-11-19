// UnrealEd_0c60000.cpp: 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00c63a90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c63a90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00c63a90
FSparseArrayConstIt_00c63a90::FSparseArrayConstIt_00c63a90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00c63ae0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c63ae0& operator++();
};

// @baa 0x00c63ae0
FSparseArrayConstIt_00c63ae0& FSparseArrayConstIt_00c63ae0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00c63b00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c63b00& operator++();
};

// @baa 0x00c63b00
FSparseArrayConstIt_00c63b00& FSparseArrayConstIt_00c63b00::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00c63b20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c63b20& operator++();
};

// @baa 0x00c63b20
FSparseArrayConstIt_00c63b20& FSparseArrayConstIt_00c63b20::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00c63b40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c63b40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00c63b40
FSparseArrayConstIt_00c63b40::FSparseArrayConstIt_00c63b40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00c63b90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c63b90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00c63b90
FSparseArrayConstIt_00c63b90::FSparseArrayConstIt_00c63b90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00c63be0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c63be0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00c63be0
FSparseArrayConstIt_00c63be0::FSparseArrayConstIt_00c63be0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
