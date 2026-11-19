// Engine_0f80000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00f88bb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f88bb0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f88bb0
FSparseArrayConstIt_00f88bb0::FSparseArrayConstIt_00f88bb0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f88c00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f88c00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f88c00
FSparseArrayConstIt_00f88c00::FSparseArrayConstIt_00f88c00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f88c50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f88c50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f88c50
FSparseArrayConstIt_00f88c50::FSparseArrayConstIt_00f88c50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f88ca0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f88ca0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f88ca0
FSparseArrayConstIt_00f88ca0::FSparseArrayConstIt_00f88ca0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f88cf0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f88cf0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f88cf0
FSparseArrayConstIt_00f88cf0::FSparseArrayConstIt_00f88cf0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct Arr {
    int* Data;      // +0x00
    int Count;      // +0x04
    int MaxNum;     // +0x08
    Arr();
    ~Arr();
};

void sub_0054f6d0(Arr*);
struct SubT {
    char pad0[0x10];   // prefix before Data
    int* Data;         // +0x10 (parent+0x1c)
    int Count;         // +0x14
    int MaxNum;        // +0x18
    SubT(int, int);    // -> sub_005538b0 (implicit __thiscall, ret 8)
};

struct C {
    Arr arr;          // +0x00
    SubT sub;         // +0x0c  (size 0x1c)
    int d;            // +0x28
    int e;            // +0x2c
    C();
};

Arr::Arr() { Data = 0; Count = 0; MaxNum = 0; }

Arr::~Arr() { sub_0054f6d0(this); }

// @baa 0x00f88ec0
C::C() : sub(0, 0) {
    d = 0; e = 0;
}

struct FSparseArrayConstIt_00f88f20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f88f20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f88f20
FSparseArrayConstIt_00f88f20::FSparseArrayConstIt_00f88f20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f88f70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f88f70(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f88f70
FSparseArrayConstIt_00f88f70::FSparseArrayConstIt_00f88f70(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f88fc0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f88fc0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f88fc0
FSparseArrayConstIt_00f88fc0::FSparseArrayConstIt_00f88fc0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f89010 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f89010(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f89010
FSparseArrayConstIt_00f89010::FSparseArrayConstIt_00f89010(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f89060 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f89060(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f89060
FSparseArrayConstIt_00f89060::FSparseArrayConstIt_00f89060(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
