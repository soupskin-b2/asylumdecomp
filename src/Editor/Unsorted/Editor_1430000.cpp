// Editor_1430000.cpp: 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_01439ea0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01439ea0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01439ea0
FSparseArrayConstIt_01439ea0::FSparseArrayConstIt_01439ea0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01439ef0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01439ef0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01439ef0
FSparseArrayConstIt_01439ef0::FSparseArrayConstIt_01439ef0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01439f40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01439f40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01439f40
FSparseArrayConstIt_01439f40::FSparseArrayConstIt_01439f40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_005c7a20(void);
extern undefined * g_0228f7a8;
// @baa 0x0143a170
undefined4 * UObject::sub_0143a170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0228f7a8);
  return param_1;
}

// @baa 0x0143a190
IMPLEMENT_CLASS_AT(UGenericBrowserType_SpeedTree, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\SpeedTreeBrowserType.cpp", 10);

// @baa 0x0143a1f0
