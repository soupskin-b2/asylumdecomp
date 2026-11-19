// Editor_10d0000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Map.h"

struct C { void sub_0054e920(int); C *sub_010d0da0(int); };

// @baa 0x010d0da0
C *C::sub_010d0da0(int a) { sub_0054e920(a); return this; }

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_010d0f60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010d0f60& operator++();
};

// @baa 0x010d0f60
FSparseArrayConstIt_010d0f60& FSparseArrayConstIt_010d0f60::operator++()
{
    TConstIterator::operator++();
    return *this;
}
