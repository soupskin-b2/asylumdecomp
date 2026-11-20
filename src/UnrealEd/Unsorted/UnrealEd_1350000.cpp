// UnrealEd_1350000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

int sub_0053dfa0(...);
int sub_0134d7c0(void);
struct C_01353870 { undefined4 sub_01353870(byte param_2); };
// @baa 0x01353870
undefined4 C_01353870::sub_01353870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0134d7c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C { void sub_0134e330(); void sub_01353fe0(int); };

// @baa 0x01353fe0
void C::sub_01353fe0(int) { sub_0134e330(); }

struct C_01354010 { void sub_005532a0(int); C_01354010 *sub_01354010(int); };

// @baa 0x01354010
C_01354010 *C_01354010::sub_01354010(int a) { sub_005532a0(a); return this; }

struct C_01354030 { void sub_00fb41b0(int); C_01354030 *sub_01354030(int); };

// @baa 0x01354030
C_01354030 *C_01354030::sub_01354030(int a) { sub_00fb41b0(a); return this; }

struct C_01354050 { void sub_00ff6e70(int); C_01354050 *sub_01354050(int); };

// @baa 0x01354050
C_01354050 *C_01354050::sub_01354050(int a) { sub_00ff6e70(a); return this; }

struct C_01354070 {
    int sub_01354070(int);
    int sub_006f2660(int, int);
};

// @baa 0x01354070
int C_01354070::sub_01354070(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_01354070 *)(this))->sub_006f2660((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_01357e00 { void sub_00fbd130(int); C_01357e00 *sub_01357e00(int); };

// @baa 0x01357e00
C_01357e00 *C_01357e00::sub_01357e00(int a) { sub_00fbd130(a); return this; }

struct C_01357e20 { void sub_00fbd220(int); C_01357e20 *sub_01357e20(int); };

// @baa 0x01357e20
C_01357e20 *C_01357e20::sub_01357e20(int a) { sub_00fbd220(a); return this; }

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_01357e40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01357e40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01357e40
FSparseArrayConstIt_01357e40::FSparseArrayConstIt_01357e40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01357ef0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01357ef0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01357ef0
FSparseArrayConstIt_01357ef0::FSparseArrayConstIt_01357ef0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_01358280 { void sub_01357850(); void sub_01358280(int); };

// @baa 0x01358280
void C_01358280::sub_01358280(int) { sub_01357850(); }
