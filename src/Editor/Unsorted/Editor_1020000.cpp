// Editor_1020000.cpp (part 1 of 2): 168 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    int sub_01021350();
};

// @baa 0x01021350
int C::sub_01021350(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01021370 {
    int sub_01021370();
};

// @baa 0x01021370
int C_01021370::sub_01021370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x18;
}

struct C_view {
    int sub_00faa3c0(int, int);
};

struct C_01021380 { int sub_01021380(int param_2); };
// @baa 0x01021380
int C_01021380::sub_01021380(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00faa3c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_010213b0 {
    int sub_010213b0();
};

// @baa 0x010213b0
int C_010213b0::sub_010213b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_01021420 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01021420& operator++();
};

// @baa 0x01021420
FSparseArrayConstIt_01021420& FSparseArrayConstIt_01021420::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_010214f0 {
    int sub_010214f0(int);
    int sub_0101cfe0(int, int);
};

// @baa 0x010214f0
int C_010214f0::sub_010214f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010214f0 *)(this))->sub_0101cfe0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_01021970 {
    int sub_01021970();
};

// @baa 0x01021970
int C_01021970::sub_01021970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x14;
}

struct C_01021a00 {
    undefined4 sub_01021a00(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x01021a00
undefined4 C_01021a00::sub_01021a00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01021a00 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_01021a30 { void sub_0054eec0(); };

struct C_01021a30 { char pad[32]; M_01021a30 m; void sub_01021a30(); };

// @baa 0x01021a30
void C_01021a30::sub_01021a30() { m.sub_0054eec0(); }

struct FSparseArrayConstIt_01022180 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01022180& operator++();
};

// @baa 0x01022180
FSparseArrayConstIt_01022180& FSparseArrayConstIt_01022180::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_010221a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010221a0& operator++();
};

// @baa 0x010221a0
FSparseArrayConstIt_010221a0& FSparseArrayConstIt_010221a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01022220 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01022220& operator++();
};

// @baa 0x01022220
FSparseArrayConstIt_01022220& FSparseArrayConstIt_01022220::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01022240 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01022240& operator++();
};

// @baa 0x01022240
FSparseArrayConstIt_01022240& FSparseArrayConstIt_01022240::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01022260 {
    undefined4 sub_01022260(byte);
    int sub_0040fcc0();
};

// @baa 0x01022260
undefined4 C_01022260::sub_01022260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01022260 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01022290 {
    undefined4 * sub_01022290(undefined4 *);
    int sub_00555160(int);
};

// @baa 0x01022290
undefined4 * C_01022290::sub_01022290(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  ((C_01022290 *)(((char *)this + 0x1c)))->sub_00555160((int)(param_2 + 7));
  return param_1;
}

struct C_010222e0 {
    undefined4 sub_010222e0(byte);
    int sub_005a9220();
};

// @baa 0x010222e0
undefined4 C_010222e0::sub_010222e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010222e0 *)(((char *)this + 4)))->sub_005a9220();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_01022310 { void sub_0054eec0(); };

struct C_01022310 { char pad[32]; M_01022310 m; void sub_01022310(); };

// @baa 0x01022310
void C_01022310::sub_01022310() { m.sub_0054eec0(); }

struct FSparseArrayConstIt_01023980 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023980(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023980
FSparseArrayConstIt_01023980::FSparseArrayConstIt_01023980(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_010239d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010239d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x010239d0
FSparseArrayConstIt_010239d0::FSparseArrayConstIt_010239d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023a20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023a20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023a20
FSparseArrayConstIt_01023a20::FSparseArrayConstIt_01023a20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023a70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023a70(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023a70
FSparseArrayConstIt_01023a70::FSparseArrayConstIt_01023a70(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023ac0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023ac0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023ac0
FSparseArrayConstIt_01023ac0::FSparseArrayConstIt_01023ac0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_01023ba0 {
    undefined4 * sub_01023ba0(undefined4 *);
    int sub_00555160(int);
};

// @baa 0x01023ba0
undefined4 * C_01023ba0::sub_01023ba0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  ((C_01023ba0 *)(((char *)this + 0x20)))->sub_00555160((int)(param_2 + 8));
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  return param_1;
}

int sub_01023c40(...);
// @baa 0x01023cd0
bool sub_01023cd0(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01023c40(param_1,param_2);
  return iVar1 == 0;
}

struct FSparseArrayConstIt_01023cf0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023cf0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023cf0
FSparseArrayConstIt_01023cf0::FSparseArrayConstIt_01023cf0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023d40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023d40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023d40
FSparseArrayConstIt_01023d40::FSparseArrayConstIt_01023d40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023d90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023d90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023d90
FSparseArrayConstIt_01023d90::FSparseArrayConstIt_01023d90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023de0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023de0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023de0
FSparseArrayConstIt_01023de0::FSparseArrayConstIt_01023de0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023e30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023e30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023e30
FSparseArrayConstIt_01023e30::FSparseArrayConstIt_01023e30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023e80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023e80(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023e80
FSparseArrayConstIt_01023e80::FSparseArrayConstIt_01023e80(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023ed0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023ed0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023ed0
FSparseArrayConstIt_01023ed0::FSparseArrayConstIt_01023ed0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023f20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023f20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023f20
FSparseArrayConstIt_01023f20::FSparseArrayConstIt_01023f20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023f70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023f70(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023f70
FSparseArrayConstIt_01023f70::FSparseArrayConstIt_01023f70(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01023fc0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01023fc0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01023fc0
FSparseArrayConstIt_01023fc0::FSparseArrayConstIt_01023fc0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01024010 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01024010(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01024010
FSparseArrayConstIt_01024010::FSparseArrayConstIt_01024010(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01024060 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01024060(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01024060
FSparseArrayConstIt_01024060::FSparseArrayConstIt_01024060(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_010240b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010240b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x010240b0
FSparseArrayConstIt_010240b0::FSparseArrayConstIt_010240b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01024100 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01024100(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01024100
FSparseArrayConstIt_01024100::FSparseArrayConstIt_01024100(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01024150 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01024150(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01024150
FSparseArrayConstIt_01024150::FSparseArrayConstIt_01024150(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_010247b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010247b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x010247b0
FSparseArrayConstIt_010247b0::FSparseArrayConstIt_010247b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

int sub_0101b440(void);
struct C_01024800 { undefined4 sub_01024800(byte param_2); };
// @baa 0x01024800
undefined4 C_01024800::sub_01024800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0101b440();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FSparseArrayConstIt_01024820 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01024820(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01024820
FSparseArrayConstIt_01024820::FSparseArrayConstIt_01024820(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_01027240 {
    undefined4 sub_01027240(byte);
};

int sub_01027190(void);
// @baa 0x01027240
undefined4 C_01027240::sub_01027240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01027190();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_010274d0 { int sub_010274d0(int param_2); };
// @baa 0x010274d0
int C_010274d0::sub_010274d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_00faa3c0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_01027510 {
    int sub_01027510();
};

// @baa 0x01027510
int C_01027510::sub_01027510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01027520 {
    int sub_01027520();
};

// @baa 0x01027520
int C_01027520::sub_01027520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 8 + *(int *)*param_1;
}

struct FSparseArrayConstIt_01027600 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01027600& operator++();
};

// @baa 0x01027600
FSparseArrayConstIt_01027600& FSparseArrayConstIt_01027600::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_010276f0 {
    int sub_010276f0(int);
    int sub_0101cfe0(int, int);
};

// @baa 0x010276f0
int C_010276f0::sub_010276f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_010276f0 *)(this))->sub_0101cfe0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_01027730 {
    int sub_01027730(int);
    int sub_01021a40(int, int);
};

// @baa 0x01027730
int C_01027730::sub_01027730(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027730 *)(this))->sub_01021a40((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xac + *param_1;
  }
  return 0;
}

struct C_01027760 {
    int sub_01027760(int);
    int sub_01021ad0(int, int);
};

// @baa 0x01027760
int C_01027760::sub_01027760(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027760 *)(this))->sub_01021ad0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xb0 + *param_1;
  }
  return 0;
}

struct C_01027790 {
    int sub_01027790(int);
    int sub_01021b60(int, int);
};

// @baa 0x01027790
int C_01027790::sub_01027790(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027790 *)(this))->sub_01021b60((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xcc + *param_1;
  }
  return 0;
}

struct C_010277c0 {
    int sub_010277c0(int);
    int sub_01021bf0(int, int);
};

// @baa 0x010277c0
int C_010277c0::sub_010277c0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010277c0 *)(this))->sub_01021bf0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 300 + *param_1;
  }
  return 0;
}

struct C_010277f0 {
    int sub_010277f0(int);
    int sub_01021c80(int, int);
};

// @baa 0x010277f0
int C_010277f0::sub_010277f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010277f0 *)(this))->sub_01021c80((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 200 + *param_1;
  }
  return 0;
}

struct C_01027820 {
    int sub_01027820(int);
    int sub_01021d10(int, int);
};

// @baa 0x01027820
int C_01027820::sub_01027820(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027820 *)(this))->sub_01021d10((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x8c + *param_1;
  }
  return 0;
}

struct C_01027850 {
    int sub_01027850(int);
    int sub_01021da0(int, int);
};

// @baa 0x01027850
int C_01027850::sub_01027850(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027850 *)(this))->sub_01021da0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xc4 + *param_1;
  }
  return 0;
}

struct C_01027880 {
    int sub_01027880(int);
    int sub_01021e30(int, int);
};

// @baa 0x01027880
int C_01027880::sub_01027880(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027880 *)(this))->sub_01021e30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x8c + *param_1;
  }
  return 0;
}

struct C_010278b0 {
    int sub_010278b0(int);
    int sub_01021ec0(int, int);
};

// @baa 0x010278b0
int C_010278b0::sub_010278b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010278b0 *)(this))->sub_01021ec0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xa0 + *param_1;
  }
  return 0;
}

struct C_010278e0 {
    int sub_010278e0(int);
    int sub_01021f50(int, int);
};

// @baa 0x010278e0
int C_010278e0::sub_010278e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010278e0 *)(this))->sub_01021f50((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x94 + *param_1;
  }
  return 0;
}

struct C_01027910 {
    int sub_01027910(int);
    int sub_01021fe0(int, int);
};

// @baa 0x01027910
int C_01027910::sub_01027910(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027910 *)(this))->sub_01021fe0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x88 + *param_1;
  }
  return 0;
}

struct C_01027940 {
    int sub_01027940(int);
    int sub_01022070(int, int);
};

// @baa 0x01027940
int C_01027940::sub_01027940(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027940 *)(this))->sub_01022070((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0xa0 + *param_1;
  }
  return 0;
}

struct C_010279d0 {
    int sub_010279d0(int);
    int sub_01022100(int, int);
};

// @baa 0x010279d0
int C_010279d0::sub_010279d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010279d0 *)(this))->sub_01022100((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

struct FSparseArrayConstIt_01027a00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01027a00& operator++();
};

// @baa 0x01027a00
FSparseArrayConstIt_01027a00& FSparseArrayConstIt_01027a00::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01027a20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01027a20& operator++();
};

// @baa 0x01027a20
FSparseArrayConstIt_01027a20& FSparseArrayConstIt_01027a20::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01027a40 {
    int sub_01027a40(int);
    int sub_010221c0(int, int);
};

// @baa 0x01027a40
int C_01027a40::sub_01027a40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01027a40 *)(this))->sub_010221c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x34 + *param_1;
  }
  return 0;
}

struct FSparseArrayConstIt_01027a70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01027a70& operator++();
};

// @baa 0x01027a70
FSparseArrayConstIt_01027a70& FSparseArrayConstIt_01027a70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01027a90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01027a90& operator++();
};

// @baa 0x01027a90
FSparseArrayConstIt_01027a90& FSparseArrayConstIt_01027a90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01028930 {
    undefined4 * sub_01028930(undefined4 *);
    int sub_00555160(int);
};

// @baa 0x01028930
undefined4 * C_01028930::sub_01028930(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  param_1[3] = puVar1[2];
  param_1[4] = puVar1[3];
  param_1[5] = puVar1[4];
  param_1[6] = puVar1[5];
  param_1[7] = puVar1[6];
  ((C_01028930 *)(((char *)this + 0x20)))->sub_00555160((int)(puVar1 + 7));
  return param_1;
}

struct C_01028a60 {
    undefined4 * sub_01028a60(undefined4 *);
    int sub_00555160(int);
};

// @baa 0x01028a60
undefined4 * C_01028a60::sub_01028a60(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  param_1[3] = puVar1[2];
  param_1[4] = puVar1[3];
  param_1[5] = puVar1[4];
  param_1[6] = puVar1[5];
  param_1[7] = puVar1[6];
  ((C_01028a60 *)(((char *)this + 0x20)))->sub_00555160((int)(puVar1 + 7));
  param_1[0xb] = 0xffffffff;
  return param_1;
}

struct C_01028b30 {
    undefined4 * sub_01028b30(undefined4 *);
    int sub_01022460(int);
};

// @baa 0x01028b30
undefined4 * C_01028b30::sub_01028b30(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01028b30 *)(((char *)this + 4)))->sub_01022460(param_2[1]);
  return param_1;
}

struct C_01028c40 {
    undefined4 * sub_01028c40(undefined4 *);
    int sub_01022460(int);
};

// @baa 0x01028c40
undefined4 * C_01028c40::sub_01028c40(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01028c40 *)(((char *)this + 4)))->sub_01022460(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct C_01028c70 {
    undefined4 sub_01028c70(byte);
    int sub_0054eec0();
};

// @baa 0x01028c70
undefined4 C_01028c70::sub_01028c70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01028c70 *)(((char *)this + 0x20)))->sub_0054eec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FSparseArrayConstIt_01028ca0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01028ca0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01028ca0
FSparseArrayConstIt_01028ca0::FSparseArrayConstIt_01028ca0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01028e20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01028e20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01028e20
FSparseArrayConstIt_01028e20::FSparseArrayConstIt_01028e20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01028e70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01028e70(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01028e70
FSparseArrayConstIt_01028e70::FSparseArrayConstIt_01028e70(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01028ec0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01028ec0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01028ec0
FSparseArrayConstIt_01028ec0::FSparseArrayConstIt_01028ec0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01028f10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01028f10(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01028f10
FSparseArrayConstIt_01028f10::FSparseArrayConstIt_01028f10(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01028fc0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01028fc0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01028fc0
FSparseArrayConstIt_01028fc0::FSparseArrayConstIt_01028fc0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029130 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029130(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029130
FSparseArrayConstIt_01029130::FSparseArrayConstIt_01029130(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029180 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029180(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029180
FSparseArrayConstIt_01029180::FSparseArrayConstIt_01029180(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_010291d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010291d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x010291d0
FSparseArrayConstIt_010291d0::FSparseArrayConstIt_010291d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029220 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029220(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029220
FSparseArrayConstIt_01029220::FSparseArrayConstIt_01029220(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029270 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029270(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029270
FSparseArrayConstIt_01029270::FSparseArrayConstIt_01029270(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_010292c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010292c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x010292c0
FSparseArrayConstIt_010292c0::FSparseArrayConstIt_010292c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029310 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029310(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029310
FSparseArrayConstIt_01029310::FSparseArrayConstIt_01029310(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029360 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029360(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029360
FSparseArrayConstIt_01029360::FSparseArrayConstIt_01029360(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_010293b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010293b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x010293b0
FSparseArrayConstIt_010293b0::FSparseArrayConstIt_010293b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029400 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029400(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029400
FSparseArrayConstIt_01029400::FSparseArrayConstIt_01029400(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029450 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029450(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029450
FSparseArrayConstIt_01029450::FSparseArrayConstIt_01029450(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_010294a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010294a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x010294a0
FSparseArrayConstIt_010294a0::FSparseArrayConstIt_010294a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_010294f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010294f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x010294f0
FSparseArrayConstIt_010294f0::FSparseArrayConstIt_010294f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029540 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029540(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029540
FSparseArrayConstIt_01029540::FSparseArrayConstIt_01029540(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029590 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029590(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029590
FSparseArrayConstIt_01029590::FSparseArrayConstIt_01029590(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_010295e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010295e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x010295e0
FSparseArrayConstIt_010295e0::FSparseArrayConstIt_010295e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029630 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029630(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029630
FSparseArrayConstIt_01029630::FSparseArrayConstIt_01029630(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029680 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029680(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01029680
FSparseArrayConstIt_01029680::FSparseArrayConstIt_01029680(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01029890 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029890& operator++();
};

// @baa 0x01029890
FSparseArrayConstIt_01029890& FSparseArrayConstIt_01029890::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_010298b0 {
    int sub_010298b0();
};

// @baa 0x010298b0
int C_010298b0::sub_010298b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xac + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_010298d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010298d0& operator++();
};

// @baa 0x010298d0
FSparseArrayConstIt_010298d0& FSparseArrayConstIt_010298d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_010298f0 {
    int sub_010298f0();
};

// @baa 0x010298f0
int C_010298f0::sub_010298f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xb0 + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029910 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029910& operator++();
};

// @baa 0x01029910
FSparseArrayConstIt_01029910& FSparseArrayConstIt_01029910::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01029930 {
    int sub_01029930();
};

// @baa 0x01029930
int C_01029930::sub_01029930(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xcc + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029950 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029950& operator++();
};

// @baa 0x01029950
FSparseArrayConstIt_01029950& FSparseArrayConstIt_01029950::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01029970 {
    int sub_01029970();
};

// @baa 0x01029970
int C_01029970::sub_01029970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 300 + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029990 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029990& operator++();
};

// @baa 0x01029990
FSparseArrayConstIt_01029990& FSparseArrayConstIt_01029990::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_010299b0 {
    int sub_010299b0();
};

// @baa 0x010299b0
int C_010299b0::sub_010299b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 200 + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_010299d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_010299d0& operator++();
};

// @baa 0x010299d0
FSparseArrayConstIt_010299d0& FSparseArrayConstIt_010299d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_010299f0 {
    int sub_010299f0();
};

// @baa 0x010299f0
int C_010299f0::sub_010299f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xc4 + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029a10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029a10& operator++();
};

// @baa 0x01029a10
FSparseArrayConstIt_01029a10& FSparseArrayConstIt_01029a10::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01029a30 {
    int sub_01029a30();
};

// @baa 0x01029a30
int C_01029a30::sub_01029a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029a50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029a50& operator++();
};

// @baa 0x01029a50
FSparseArrayConstIt_01029a50& FSparseArrayConstIt_01029a50::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01029a70 {
    int sub_01029a70();
};

// @baa 0x01029a70
int C_01029a70::sub_01029a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029a90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029a90& operator++();
};

// @baa 0x01029a90
FSparseArrayConstIt_01029a90& FSparseArrayConstIt_01029a90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01029ab0 {
    int sub_01029ab0();
};

// @baa 0x01029ab0
int C_01029ab0::sub_01029ab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029ad0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029ad0& operator++();
};

// @baa 0x01029ad0
FSparseArrayConstIt_01029ad0& FSparseArrayConstIt_01029ad0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01029af0 {
    int sub_01029af0();
};

// @baa 0x01029af0
int C_01029af0::sub_01029af0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x94 + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029b10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029b10& operator++();
};

// @baa 0x01029b10
FSparseArrayConstIt_01029b10& FSparseArrayConstIt_01029b10::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01029b30 {
    int sub_01029b30();
};

// @baa 0x01029b30
int C_01029b30::sub_01029b30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x88 + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029b50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029b50& operator++();
};

// @baa 0x01029b50
FSparseArrayConstIt_01029b50& FSparseArrayConstIt_01029b50::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_01029b70 {
    int sub_01029b70();
};

// @baa 0x01029b70
int C_01029b70::sub_01029b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + 0xc + *(int *)*param_1;
}

struct C_01029bd0 {
    int sub_01029bd0();
};

// @baa 0x01029bd0
int C_01029bd0::sub_01029bd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029be0 {
    int sub_01029be0();
};

// @baa 0x01029be0
int C_01029be0::sub_01029be0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_01029c30 {
    int sub_01029c30();
};

// @baa 0x01029c30
int C_01029c30::sub_01029c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029c40 {
    int sub_01029c40();
};

// @baa 0x01029c40
int C_01029c40::sub_01029c40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_01029c90 {
    int sub_01029c90();
};

// @baa 0x01029c90
int C_01029c90::sub_01029c90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029ca0 {
    int sub_01029ca0();
};

// @baa 0x01029ca0
int C_01029ca0::sub_01029ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_01029cf0 {
    int sub_01029cf0();
};

// @baa 0x01029cf0
int C_01029cf0::sub_01029cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029d00 {
    int sub_01029d00();
};

// @baa 0x01029d00
int C_01029d00::sub_01029d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_01029d50 {
    int sub_01029d50();
};

// @baa 0x01029d50
int C_01029d50::sub_01029d50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01029d60 {
    int sub_01029d60();
};

// @baa 0x01029d60
int C_01029d60::sub_01029d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct FSparseArrayConstIt_01029d70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029d70& operator++();
};

// @baa 0x01029d70
FSparseArrayConstIt_01029d70& FSparseArrayConstIt_01029d70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01029d90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029d90& operator++();
};

// @baa 0x01029d90
FSparseArrayConstIt_01029d90& FSparseArrayConstIt_01029d90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01029db0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029db0& operator++();
};

// @baa 0x01029db0
FSparseArrayConstIt_01029db0& FSparseArrayConstIt_01029db0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01029dd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029dd0& operator++();
};

// @baa 0x01029dd0
FSparseArrayConstIt_01029dd0& FSparseArrayConstIt_01029dd0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01029df0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01029df0& operator++();
};

// @baa 0x01029df0
FSparseArrayConstIt_01029df0& FSparseArrayConstIt_01029df0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0102a270 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a270(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a270
FSparseArrayConstIt_0102a270::FSparseArrayConstIt_0102a270(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a2c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a2c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a2c0
FSparseArrayConstIt_0102a2c0::FSparseArrayConstIt_0102a2c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a310 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a310(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a310
FSparseArrayConstIt_0102a310::FSparseArrayConstIt_0102a310(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a360 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a360(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a360
FSparseArrayConstIt_0102a360::FSparseArrayConstIt_0102a360(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a3b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a3b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a3b0
FSparseArrayConstIt_0102a3b0::FSparseArrayConstIt_0102a3b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a400 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a400(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a400
FSparseArrayConstIt_0102a400::FSparseArrayConstIt_0102a400(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a450 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a450(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a450
FSparseArrayConstIt_0102a450::FSparseArrayConstIt_0102a450(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a4a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a4a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a4a0
FSparseArrayConstIt_0102a4a0::FSparseArrayConstIt_0102a4a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a4f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a4f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a4f0
FSparseArrayConstIt_0102a4f0::FSparseArrayConstIt_0102a4f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a540 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a540(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a540
FSparseArrayConstIt_0102a540::FSparseArrayConstIt_0102a540(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a590 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a590(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a590
FSparseArrayConstIt_0102a590::FSparseArrayConstIt_0102a590(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a5e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a5e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a5e0
FSparseArrayConstIt_0102a5e0::FSparseArrayConstIt_0102a5e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a630 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a630(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a630
FSparseArrayConstIt_0102a630::FSparseArrayConstIt_0102a630(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a680 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a680(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a680
FSparseArrayConstIt_0102a680::FSparseArrayConstIt_0102a680(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a6d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a6d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a6d0
FSparseArrayConstIt_0102a6d0::FSparseArrayConstIt_0102a6d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a720 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a720(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a720
FSparseArrayConstIt_0102a720::FSparseArrayConstIt_0102a720(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a770 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a770(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a770
FSparseArrayConstIt_0102a770::FSparseArrayConstIt_0102a770(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a820 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a820(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a820
FSparseArrayConstIt_0102a820::FSparseArrayConstIt_0102a820(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a8d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a8d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a8d0
FSparseArrayConstIt_0102a8d0::FSparseArrayConstIt_0102a8d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102a980 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102a980(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102a980
FSparseArrayConstIt_0102a980::FSparseArrayConstIt_0102a980(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102aa30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102aa30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102aa30
FSparseArrayConstIt_0102aa30::FSparseArrayConstIt_0102aa30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0102aae0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102aae0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0102aae0
FSparseArrayConstIt_0102aae0::FSparseArrayConstIt_0102aae0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

void sub_01023b10();
// @baa 0x0102ab30
void sub_0102ab30(void) { sub_01023b10(); }

struct C_0102ab40 { void sub_01029730(int); C_0102ab40 *sub_0102ab40(int); };

// @baa 0x0102ab40
C_0102ab40 *C_0102ab40::sub_0102ab40(int a) { sub_01029730(a); return this; }

// @baa 0x0102ab90
bool sub_0102ab90(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01023c40(param_1,param_2);
  return iVar1 == 0;
}

struct C_0102fca0 {
    int sub_0102fca0(int);
    int sub_01021ec0(int, int);
};

// @baa 0x0102fca0
int C_0102fca0::sub_0102fca0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0102fca0 *)(this))->sub_01021ec0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = param_2 * 0xa0 + *param_1, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0102fd60 {
    int sub_0102fd60(int);
    int sub_01022070(int, int);
};

// @baa 0x0102fd60
int C_0102fd60::sub_0102fd60(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0102fd60 *)(this))->sub_01022070((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = param_2 * 0xa0 + *param_1, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0102fe70 {
    int sub_0102fe70(int);
    int sub_01022100(int, int);
};

// @baa 0x0102fe70
int C_0102fe70::sub_0102fe70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0102fe70 *)(this))->sub_01022100((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x24, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct FSparseArrayConstIt_0102feb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102feb0& operator++();
};

// @baa 0x0102feb0
FSparseArrayConstIt_0102feb0& FSparseArrayConstIt_0102feb0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0102fed0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102fed0& operator++();
};

// @baa 0x0102fed0
FSparseArrayConstIt_0102fed0& FSparseArrayConstIt_0102fed0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0102ff30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102ff30& operator++();
};

// @baa 0x0102ff30
FSparseArrayConstIt_0102ff30& FSparseArrayConstIt_0102ff30::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0102ff50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0102ff50& operator++();
};

// @baa 0x0102ff50
FSparseArrayConstIt_0102ff50& FSparseArrayConstIt_0102ff50::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_0102ffd0 {
    void sub_0102ffd0();
    int sub_010286d0(int);
};

// @baa 0x0102ffd0
void C_0102ffd0::sub_0102ffd0(void)
{
    int param_1 = (int)this;
  ((C_0102ffd0 *)((*(char **)((char *)this + 0x10))))->sub_010286d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0102fff0 {
    void sub_0102fff0();
    int sub_01028ab0(int);
};

// @baa 0x0102fff0
void C_0102fff0::sub_0102fff0(void)
{
    int param_1 = (int)this;
  ((C_0102fff0 *)((*(char **)((char *)this + 0x10))))->sub_01028ab0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
