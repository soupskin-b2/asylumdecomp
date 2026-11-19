// Engine_1310000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_0131ec60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131ec60& operator++();
};

// @baa 0x0131ec60
FSparseArrayConstIt_0131ec60& FSparseArrayConstIt_0131ec60::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0131ec80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131ec80(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0131ec80
FSparseArrayConstIt_0131ec80::FSparseArrayConstIt_0131ec80(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0131ecd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131ecd0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0131ecd0
FSparseArrayConstIt_0131ecd0::FSparseArrayConstIt_0131ecd0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0131ed20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131ed20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0131ed20
FSparseArrayConstIt_0131ed20::FSparseArrayConstIt_0131ed20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0131ed70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131ed70& operator++();
};

// @baa 0x0131ed70
FSparseArrayConstIt_0131ed70& FSparseArrayConstIt_0131ed70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0131ed90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131ed90& operator++();
};

// @baa 0x0131ed90
FSparseArrayConstIt_0131ed90& FSparseArrayConstIt_0131ed90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0131edb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131edb0& operator++();
};

// @baa 0x0131edb0
FSparseArrayConstIt_0131edb0& FSparseArrayConstIt_0131edb0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0131edd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131edd0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0131edd0
FSparseArrayConstIt_0131edd0::FSparseArrayConstIt_0131edd0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0131ee20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131ee20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0131ee20
FSparseArrayConstIt_0131ee20::FSparseArrayConstIt_0131ee20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0131ee70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0131ee70(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0131ee70
FSparseArrayConstIt_0131ee70::FSparseArrayConstIt_0131ee70(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
