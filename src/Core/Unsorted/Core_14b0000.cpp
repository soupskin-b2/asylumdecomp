// Core_14b0000.cpp: 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

struct C_view {
    int sub_014a5c40();
};

int sub_0053dfa0(...);
struct C_014b31c0 { undefined4 sub_014b31c0(byte param_2); };
// @baa 0x014b31c0
undefined4 C_014b31c0::sub_014b31c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 8)))->sub_014a5c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_014b31f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b31f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b31f0
FSparseArrayConstIt_014b31f0::FSparseArrayConstIt_014b31f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b3240 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b3240(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b3240
FSparseArrayConstIt_014b3240::FSparseArrayConstIt_014b3240(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b3290 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b3290(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b3290
FSparseArrayConstIt_014b3290::FSparseArrayConstIt_014b3290(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b32e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b32e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b32e0
FSparseArrayConstIt_014b32e0::FSparseArrayConstIt_014b32e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b3330 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b3330(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b3330
FSparseArrayConstIt_014b3330::FSparseArrayConstIt_014b3330(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b34a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b34a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b34a0
FSparseArrayConstIt_014b34a0::FSparseArrayConstIt_014b34a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b34f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b34f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b34f0
FSparseArrayConstIt_014b34f0::FSparseArrayConstIt_014b34f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b3540 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b3540(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b3540
FSparseArrayConstIt_014b3540::FSparseArrayConstIt_014b3540(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b3590 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b3590(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b3590
FSparseArrayConstIt_014b3590::FSparseArrayConstIt_014b3590(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b35e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b35e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b35e0
FSparseArrayConstIt_014b35e0::FSparseArrayConstIt_014b35e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014b3630 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b3630(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014b3630
FSparseArrayConstIt_014b3630::FSparseArrayConstIt_014b3630(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

void sub_014ad770();
// @baa 0x014b36f0
void sub_014b36f0(void) { sub_014ad770(); }

// @baa 0x014b3700
IMPLEMENT_CLASS_AT(UUISceneFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 32);

// @baa 0x014b3760
// @baa 0x014b3860
IMPLEMENT_CLASS_AT(UUISceneFactoryText, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 34);

// @baa 0x014b38c0
int sub_0060b320(void);
extern undefined * g_022b3668;
struct C_014b38e0 { undefined4 * sub_014b38e0(void); };
// @baa 0x014b38e0
undefined4 * C_014b38e0::sub_014b38e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b320();
  *param_1 = (undefined4)(&g_022b3668);
  return param_1;
}

// @baa 0x014b3900
IMPLEMENT_CLASS_AT(UUISceneExporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 36);

// @baa 0x014b3960
