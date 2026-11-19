// Engine_0dd0000.cpp (part 1 of 2): 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00dd18b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00dd18b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00dd18b0
FSparseArrayConstIt_00dd18b0::FSparseArrayConstIt_00dd18b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00dd1900 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00dd1900(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00dd1900
FSparseArrayConstIt_00dd1900::FSparseArrayConstIt_00dd1900(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00dd1950 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00dd1950(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00dd1950
FSparseArrayConstIt_00dd1950::FSparseArrayConstIt_00dd1950(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00dd19a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00dd19a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00dd19a0
FSparseArrayConstIt_00dd19a0::FSparseArrayConstIt_00dd19a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C {
    undefined4 sub_00dd9de0();
};

int sub_00dd8e30(...);
int sub_00dd8fb0(void);
int sub_00dd9e2f(...);
extern undefined4 g_026c5d80;
// @baa 0x00dd9de0
undefined4 C::sub_00dd9de0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026c5d80 == 0) {
      g_026c5d80 = sub_00dd8e30(L"Engine");
      sub_00dd8fb0();
      if (g_026c5d80 == 0) {
sub_00dd9e2f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026c5d80) goto sub_00dd9e2f;
    }
  }
  return 0;
}

// @baa 0x00ddcd40
void sub_00ddcd40(void) {  }

// @baa 0x00ddcd50
void sub_00ddcd50(void) {  }

// @baa 0x00ddcd60
float10 sub_00ddcd60(double param_1)
{
  return (float10)param_1;
}

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_020d5098;
// @baa 0x00ddcda0
undefined4 * UUnrealEdEngine::sub_00ddcda0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_020d5098);
  return param_1;
}

// @baa 0x00ddcfc0
IMPLEMENT_CLASS_AT(UUILayerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 38);

