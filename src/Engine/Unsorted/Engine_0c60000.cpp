// Engine_0c60000.cpp: 34 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00c63990 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c63990& operator++();
};

// @baa 0x00c63990
FSparseArrayConstIt_00c63990& FSparseArrayConstIt_00c63990::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00c639b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c639b0& operator++();
};

// @baa 0x00c639b0
FSparseArrayConstIt_00c639b0& FSparseArrayConstIt_00c639b0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00c639d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c639d0& operator++();
};

// @baa 0x00c639d0
FSparseArrayConstIt_00c639d0& FSparseArrayConstIt_00c639d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00c639f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c639f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00c639f0
FSparseArrayConstIt_00c639f0::FSparseArrayConstIt_00c639f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00c63a40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00c63a40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00c63a40
FSparseArrayConstIt_00c63a40::FSparseArrayConstIt_00c63a40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_005c7a20(void);
extern undefined * g_02059b60;
struct C_00c64890 { undefined4 * sub_00c64890(void); };
// @baa 0x00c64890
undefined4 * C_00c64890::sub_00c64890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02059b60);
  return param_1;
}

extern undefined * g_02059d00;
struct C_00c64950 { undefined4 * sub_00c64950(void); };
// @baa 0x00c64950
undefined4 * C_00c64950::sub_00c64950(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02059d00);
  return param_1;
}

extern undefined * g_02059ea0;
struct C_00c64970 { undefined4 * sub_00c64970(void); };
// @baa 0x00c64970
undefined4 * C_00c64970::sub_00c64970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02059ea0);
  return param_1;
}

// @baa 0x00c64a40
IMPLEMENT_CLASS_AT(UAnimNodeBlendPerBone, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 15);

// @baa 0x00c64b20
IMPLEMENT_CLASS_AT(UAnimNodeCrossfader, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 14);

// @baa 0x00c64b80
extern undefined * g_0205a870;
struct C_00c64e00 { undefined4 * sub_00c64e00(void); };
// @baa 0x00c64e00
undefined4 * C_00c64e00::sub_00c64e00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a870);
  return param_1;
}

// @baa 0x00c64e20
INT UAnimNodePlayCustomAnim::GetNumSliders() const { return 0; }

// @baa 0x00c64e30
IMPLEMENT_CLASS_AT(UAnimNodePlayCustomAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 29);

// @baa 0x00c64ee0
INT UAnimNodeBlendDirectional::GetNumSliders() const { return 1; }

// @baa 0x00c64ef0
IMPLEMENT_CLASS_AT(UAnimNodeBlendDirectional, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 18);

// @baa 0x00c64f50
// @baa 0x00c64f80
IMPLEMENT_CLASS_AT(UAnimNodeBlendList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 16);

// @baa 0x00c64ff0
INT UAnimNodeBlendList::GetNumSliders() const { return 1; }

// @baa 0x00c65070
IMPLEMENT_CLASS_AT(UAnimNodeBlendByBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 22);

// @baa 0x00c65120
IMPLEMENT_CLASS_AT(UAnimNodeBlendByPhysics, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 20);

// @baa 0x00c651d0
IMPLEMENT_CLASS_AT(UAnimNodeBlendByPosture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 19);

// @baa 0x00c65280
INT UAnimNodeBlendBySpeed::GetNumSliders() const { return 1; }

// @baa 0x00c65290
IMPLEMENT_CLASS_AT(UAnimNodeBlendBySpeed, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 21);

// @baa 0x00c65350
IMPLEMENT_CLASS_AT(UAnimNodeRandom, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 17);

extern undefined * g_0205bc00;
struct C_00c6b1f0 { undefined4 * sub_00c6b1f0(void); };
// @baa 0x00c6b1f0
undefined4 * C_00c6b1f0::sub_00c6b1f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205bc00);
  return param_1;
}

