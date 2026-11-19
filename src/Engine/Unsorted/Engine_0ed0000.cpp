// Engine_0ed0000.cpp: 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00ed7970 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ed7970(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ed7970
FSparseArrayConstIt_00ed7970::FSparseArrayConstIt_00ed7970(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ed79c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ed79c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ed79c0
FSparseArrayConstIt_00ed79c0::FSparseArrayConstIt_00ed79c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ed7a10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ed7a10(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ed7a10
FSparseArrayConstIt_00ed7a10::FSparseArrayConstIt_00ed7a10(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ed7a60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ed7a60(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ed7a60
FSparseArrayConstIt_00ed7a60::FSparseArrayConstIt_00ed7a60(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ed7c30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ed7c30& operator++();
};

// @baa 0x00ed7c30
FSparseArrayConstIt_00ed7c30& FSparseArrayConstIt_00ed7c30::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ed7c50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ed7c50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ed7c50
FSparseArrayConstIt_00ed7c50::FSparseArrayConstIt_00ed7c50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ed7ca0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ed7ca0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ed7ca0
FSparseArrayConstIt_00ed7ca0::FSparseArrayConstIt_00ed7ca0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ed7cf0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ed7cf0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ed7cf0
FSparseArrayConstIt_00ed7cf0::FSparseArrayConstIt_00ed7cf0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00ed7d40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ed7d40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00ed7d40
FSparseArrayConstIt_00ed7d40::FSparseArrayConstIt_00ed7d40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct M_00ed7df0 { void sub_00ed42a0(); };

struct C { char pad[64]; M_00ed7df0 m; void sub_00ed7df0(); };

// @baa 0x00ed7df0
void C::sub_00ed7df0() { m.sub_00ed42a0(); }

// @baa 0x00ed7f50
IMPLEMENT_CLASS_AT(UEditorPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\PlayLevel.cpp", 35);

// @baa 0x00ed7fc0
