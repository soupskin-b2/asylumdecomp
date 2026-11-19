// Engine_0db0000.cpp: 71 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C { void sub_00db2910(int); C *sub_00db5b90(int); };

// @baa 0x00db5b90
C *C::sub_00db5b90(int a) { sub_00db2910(a); return this; }

struct C_00db5bb0 { C_00db5bb0* sub_00db5bb0(void); };

// @baa 0x00db5bb0
C_00db5bb0* C_00db5bb0::sub_00db5bb0(void) { return this; }

struct C_00db5bc0 { int a, b, c; C_00db5bc0(); };

// @baa 0x00db5bc0
C_00db5bc0::C_00db5bc0() : a(0), b(0), c(0) {}

struct C_00db5bd0 {
    int sub_00db5bd0(int);
};

// @baa 0x00db5bd0
int C_00db5bd0::sub_00db5bd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00db5be0 {
    int sub_00db5be0();
};

// @baa 0x00db5be0
int C_00db5be0::sub_00db5be0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00db5c00 {
    int sub_00db5c00(int);
};

// @baa 0x00db5c00
int C_00db5c00::sub_00db5c00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00db5cc0 {
    int sub_00db5cc0();
};

// @baa 0x00db5cc0
int C_00db5cc0::sub_00db5cc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00db5ce0 {
    int sub_00db5ce0();
};

// @baa 0x00db5ce0
int C_00db5ce0::sub_00db5ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00db5cf0 {
    int sub_00db5cf0(int);
};

// @baa 0x00db5cf0
int C_00db5cf0::sub_00db5cf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_view {
    int sub_00db2240(int, int);
};

// @baa 0x00db5d00
int UTexture2D::sub_00db5d00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00db2240((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00db5d30 {
    int sub_00db5d30();
};

// @baa 0x00db5d30
int C_00db5d30::sub_00db5d30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00db5d50 {
    int sub_00db5d50();
};

// @baa 0x00db5d50
int C_00db5d50::sub_00db5d50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00db5d60 {
    int sub_00db5d60(int);
};

// @baa 0x00db5d60
int C_00db5d60::sub_00db5d60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00db5d70 {
    int sub_00db5d70();
};

// @baa 0x00db5d70
int C_00db5d70::sub_00db5d70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00db5d90 {
    int sub_00db5d90();
};

// @baa 0x00db5d90
int C_00db5d90::sub_00db5d90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00db5da0 {
    int sub_00db5da0(int);
};

// @baa 0x00db5da0
int C_00db5da0::sub_00db5da0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00db5e40 {
    int sub_00db5e40();
};

// @baa 0x00db5e40
int C_00db5e40::sub_00db5e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x18;
}

struct M_00db5e50 { void sub_00db1300(); };

struct C_00db5e50 { char pad[16]; M_00db5e50 m; void sub_00db5e50(); };

// @baa 0x00db5e50
void C_00db5e50::sub_00db5e50() { m.sub_00db1300(); }

struct C_00db5fe0 {
    int sub_00db5fe0(int);
};

// @baa 0x00db5fe0
int C_00db5fe0::sub_00db5fe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00db5ff0 {
    int sub_00db5ff0();
};

// @baa 0x00db5ff0
int C_00db5ff0::sub_00db5ff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

struct C_00db6000 {
    int sub_00db6000(int);
};

// @baa 0x00db6000
int C_00db6000::sub_00db6000(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00db6010 {
    int sub_00db6010(int);
};

// @baa 0x00db6010
int C_00db6010::sub_00db6010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00db60a0 {
    undefined4 sub_00db60a0(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x00db60a0
undefined4 C_00db60a0::sub_00db60a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00db60a0 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00db60d0 { void sub_00db1300(); };

struct C_00db60d0 { char pad[16]; M_00db60d0 m; void sub_00db60d0(); };

// @baa 0x00db60d0
void C_00db60d0::sub_00db60d0() { m.sub_00db1300(); }

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00db63a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db63a0& operator++();
};

// @baa 0x00db63a0
FSparseArrayConstIt_00db63a0& FSparseArrayConstIt_00db63a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00db63c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db63c0& operator++();
};

// @baa 0x00db63c0
FSparseArrayConstIt_00db63c0& FSparseArrayConstIt_00db63c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00db63e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db63e0& operator++();
};

// @baa 0x00db63e0
FSparseArrayConstIt_00db63e0& FSparseArrayConstIt_00db63e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00db6400 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6400& operator++();
};

// @baa 0x00db6400
FSparseArrayConstIt_00db6400& FSparseArrayConstIt_00db6400::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00db6420 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6420(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db6420
FSparseArrayConstIt_00db6420::FSparseArrayConstIt_00db6420(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db6470 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6470(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db6470
FSparseArrayConstIt_00db6470::FSparseArrayConstIt_00db6470(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db64c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db64c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db64c0
FSparseArrayConstIt_00db64c0::FSparseArrayConstIt_00db64c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db6510 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6510(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db6510
FSparseArrayConstIt_00db6510::FSparseArrayConstIt_00db6510(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db6560 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6560(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db6560
FSparseArrayConstIt_00db6560::FSparseArrayConstIt_00db6560(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db65b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db65b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db65b0
FSparseArrayConstIt_00db65b0::FSparseArrayConstIt_00db65b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db6600 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6600& operator++();
};

// @baa 0x00db6600
FSparseArrayConstIt_00db6600& FSparseArrayConstIt_00db6600::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00db6620 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6620& operator++();
};

// @baa 0x00db6620
FSparseArrayConstIt_00db6620& FSparseArrayConstIt_00db6620::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00db6640 {
    int sub_00db6640();
};

// @baa 0x00db6640
int C_00db6640::sub_00db6640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

struct FSparseArrayConstIt_00db6650 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6650& operator++();
};

// @baa 0x00db6650
FSparseArrayConstIt_00db6650& FSparseArrayConstIt_00db6650::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00db6670 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6670& operator++();
};

// @baa 0x00db6670
FSparseArrayConstIt_00db6670& FSparseArrayConstIt_00db6670::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00db6690 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6690& operator++();
};

// @baa 0x00db6690
FSparseArrayConstIt_00db6690& FSparseArrayConstIt_00db6690::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00db66b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db66b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db66b0
FSparseArrayConstIt_00db66b0::FSparseArrayConstIt_00db66b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db6700 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6700(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db6700
FSparseArrayConstIt_00db6700::FSparseArrayConstIt_00db6700(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db6750 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6750(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db6750
FSparseArrayConstIt_00db6750::FSparseArrayConstIt_00db6750(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db67a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db67a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db67a0
FSparseArrayConstIt_00db67a0::FSparseArrayConstIt_00db67a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db67f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db67f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db67f0
FSparseArrayConstIt_00db67f0::FSparseArrayConstIt_00db67f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db6840 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6840(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db6840
FSparseArrayConstIt_00db6840::FSparseArrayConstIt_00db6840(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00db6890 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00db6890(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00db6890
FSparseArrayConstIt_00db6890::FSparseArrayConstIt_00db6890(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00db87a0 {
    int sub_00db87a0();
};

// @baa 0x00db87a0
int C_00db87a0::sub_00db87a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00db8820 {
    int sub_00db8820();
};

// @baa 0x00db8820
int C_00db8820::sub_00db8820(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00db8840 {
    int sub_00db8840();
};

// @baa 0x00db8840
int C_00db8840::sub_00db8840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

// @baa 0x00db8850
int UTexture2D::sub_00db8850(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_00db2240((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00db8890 {
    int sub_00db8890();
};

// @baa 0x00db8890
int C_00db8890::sub_00db8890(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00db88b0 {
    int sub_00db88b0();
};

// @baa 0x00db88b0
int C_00db88b0::sub_00db88b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00db88c0 {
    int sub_00db88c0();
};

// @baa 0x00db88c0
int C_00db88c0::sub_00db88c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x18;
}

struct C_00db88d0 {
    int sub_00db88d0();
};

// @baa 0x00db88d0
int C_00db88d0::sub_00db88d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00db88f0 {
    int sub_00db88f0();
};

// @baa 0x00db88f0
int C_00db88f0::sub_00db88f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00db8900 {
    int sub_00db8900();
};

// @baa 0x00db8900
int C_00db8900::sub_00db8900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x18;
}

struct C_00db8970 {
    int sub_00db8970(int);
    int sub_00db5ed0(int, int);
};

// @baa 0x00db8970
int C_00db8970::sub_00db8970(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00db8970 *)(this))->sub_00db5ed0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_00db89a0 {
    int sub_00db89a0(int);
    int sub_00db5f60(int, int);
};

// @baa 0x00db89a0
int C_00db89a0::sub_00db89a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00db89a0 *)(this))->sub_00db5f60((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

struct C_00db89d0 {
    int sub_00db89d0(int);
    int sub_00db5f60(int, int);
};

// @baa 0x00db89d0
int C_00db89d0::sub_00db89d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00db89d0 *)(this))->sub_00db5f60((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

struct C_00db8a00 {
    int sub_00db8a00();
};

// @baa 0x00db8a00
int C_00db8a00::sub_00db8a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

struct C_00dba470 {
    int sub_00dba470(int);
    int sub_00db5ed0(int, int);
};

// @baa 0x00dba470
int C_00dba470::sub_00dba470(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00dba470 *)(this))->sub_00db5ed0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_00dba4b0 {
    int sub_00dba4b0(int);
    int sub_00db5f60(int, int);
};

// @baa 0x00dba4b0
int C_00dba4b0::sub_00dba4b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00dba4b0 *)(this))->sub_00db5f60((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x24, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_00dba4f0 {
    int sub_00dba4f0(int);
    int sub_00db5f60(int, int);
};

// @baa 0x00dba4f0
int C_00dba4f0::sub_00dba4f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00dba4f0 *)(this))->sub_00db5f60((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x24, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_00dba530 {
    int sub_00dba530();
};

// @baa 0x00dba530
int C_00dba530::sub_00dba530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + 8 + *(int *)*param_1;
}

struct FSparseArrayConstIt_00dba540 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00dba540& operator++();
};

// @baa 0x00dba540
FSparseArrayConstIt_00dba540& FSparseArrayConstIt_00dba540::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00dba560 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00dba560& operator++();
};

// @baa 0x00dba560
FSparseArrayConstIt_00dba560& FSparseArrayConstIt_00dba560::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00dba580 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00dba580& operator++();
};

// @baa 0x00dba580
FSparseArrayConstIt_00dba580& FSparseArrayConstIt_00dba580::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00dba5a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00dba5a0& operator++();
};

// @baa 0x00dba5a0
FSparseArrayConstIt_00dba5a0& FSparseArrayConstIt_00dba5a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00dba5c0 {
    void sub_00dba5c0();
    int sub_00db8ce0(int);
};

// @baa 0x00dba5c0
void C_00dba5c0::sub_00dba5c0(void)
{
    int param_1 = (int)this;
  ((C_00dba5c0 *)((*(char **)((char *)this + 0x10))))->sub_00db8ce0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00dba5e0 {
    void sub_00dba5e0();
    int sub_00db8e60(int);
};

// @baa 0x00dba5e0
void C_00dba5e0::sub_00dba5e0(void)
{
    int param_1 = (int)this;
  ((C_00dba5e0 *)((*(char **)((char *)this + 0x10))))->sub_00db8e60(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
