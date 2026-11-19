// Core_16c0000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_016c6b00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_016c6b00& operator++();
};

// @baa 0x016c6b00
FSparseArrayConstIt_016c6b00& FSparseArrayConstIt_016c6b00::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_016c6b20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_016c6b20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x016c6b20
FSparseArrayConstIt_016c6b20::FSparseArrayConstIt_016c6b20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_016c6b70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_016c6b70(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x016c6b70
FSparseArrayConstIt_016c6b70::FSparseArrayConstIt_016c6b70(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

// @baa 0x016c6ce0
IMPLEMENT_CLASS_AT(URCapeConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 22);
