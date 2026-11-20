// BmEditor_1280000.cpp: 29 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_01284990(); };

// @baa 0x01284990
void C::sub_01284990() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012849f0 { void* Data; int Num; int Max; void sub_012849f0(); };

// @baa 0x012849f0
void C_012849f0::sub_012849f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01284a50 { void* Data; int Num; int Max; void sub_01284a50(); };

// @baa 0x01284a50
void C_01284a50::sub_01284a50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01284ab0 { void* Data; int Num; int Max; void sub_01284ab0(); };

// @baa 0x01284ab0
void C_01284ab0::sub_01284ab0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01284b10 {
    undefined4 sub_01284b10(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x01284b10
undefined4 C_01284b10::sub_01284b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01284b10 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01284b40 {
    undefined4 sub_01284b40(byte);
};

int sub_0127f450(void);
// @baa 0x01284b40
undefined4 C_01284b40::sub_01284b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0127f450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0127f4b0(void);
struct C_01284b60 { undefined4 sub_01284b60(byte param_2); };
// @baa 0x01284b60
undefined4 C_01284b60::sub_01284b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0127f4b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0128bc80 { void* Data; int Num; int Max; void sub_0128bc80(); };

// @baa 0x0128bc80
void C_0128bc80::sub_0128bc80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view {
    int sub_012843d0(int, int);
};

struct C_0128bce0 { int sub_0128bce0(int param_2); };
// @baa 0x0128bce0
int C_0128bce0::sub_0128bce0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_012843d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_0128bd10 {
    int sub_012844a0(int, int);
};

struct C_0128bd10 { int sub_0128bd10(int param_2); };
// @baa 0x0128bd10
int C_0128bd10::sub_0128bd10(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0128bd10 *)(this))->sub_012844a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_0128bd40 {
    int sub_012845a0(int, int);
};

struct C_0128bd40 { int sub_0128bd40(int param_2); };
// @baa 0x0128bd40
int C_0128bd40::sub_0128bd40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0128bd40 *)(this))->sub_012845a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_0128be50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128be50& operator++();
};

// @baa 0x0128be50
FSparseArrayConstIt_0128be50& FSparseArrayConstIt_0128be50::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0128c1d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128c1d0& operator++();
};

// @baa 0x0128c1d0
FSparseArrayConstIt_0128c1d0& FSparseArrayConstIt_0128c1d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0128c1f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128c1f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0128c1f0
FSparseArrayConstIt_0128c1f0::FSparseArrayConstIt_0128c1f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0128c240 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128c240(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0128c240
FSparseArrayConstIt_0128c240::FSparseArrayConstIt_0128c240(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0128c290 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128c290& operator++();
};

// @baa 0x0128c290
FSparseArrayConstIt_0128c290& FSparseArrayConstIt_0128c290::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0128c2b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128c2b0& operator++();
};

// @baa 0x0128c2b0
FSparseArrayConstIt_0128c2b0& FSparseArrayConstIt_0128c2b0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0128c2d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128c2d0& operator++();
};

// @baa 0x0128c2d0
FSparseArrayConstIt_0128c2d0& FSparseArrayConstIt_0128c2d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_0128c2f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128c2f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0128c2f0
FSparseArrayConstIt_0128c2f0::FSparseArrayConstIt_0128c2f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0128c340 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128c340(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0128c340
FSparseArrayConstIt_0128c340::FSparseArrayConstIt_0128c340(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0128c390 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0128c390(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0128c390
FSparseArrayConstIt_0128c390::FSparseArrayConstIt_0128c390(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

void sub_01284990();
// @baa 0x0128c3e0
void sub_0128c3e0(void) { sub_01284990(); }

void sub_012849f0();
// @baa 0x0128c3f0
void sub_0128c3f0(void) { sub_012849f0(); }

struct C_0128c400 { C_0128c400* sub_0128c400(void); };

// @baa 0x0128c400
C_0128c400* C_0128c400::sub_0128c400(void) { return this; }

struct C_0128c410 { C_0128c410* sub_0128c410(void); };

// @baa 0x0128c410
C_0128c410* C_0128c410::sub_0128c410(void) { return this; }

int sub_01284c40(void);
struct C_0128c6b0 { undefined4 sub_0128c6b0(byte param_2); };
// @baa 0x0128c6b0
undefined4 C_0128c6b0::sub_0128c6b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01284c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01284da0(void);
struct C_0128c710 { undefined4 sub_0128c710(byte param_2); };
// @baa 0x0128c710
undefined4 C_0128c710::sub_0128c710(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01284da0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01284f70(void);
struct C_0128c770 { undefined4 sub_0128c770(byte param_2); };
// @baa 0x0128c770
undefined4 C_0128c770::sub_0128c770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01284f70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01285210(void);
struct C_0128c7d0 { undefined4 sub_0128c7d0(byte param_2); };
// @baa 0x0128c7d0
undefined4 C_0128c7d0::sub_0128c7d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01285210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
