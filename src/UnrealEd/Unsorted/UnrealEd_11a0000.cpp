// UnrealEd_11a0000.cpp (part 1 of 2): 43 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    undefined4 sub_011a0390(byte);
};

int sub_0053dfa0(...);
int sub_011a01d0(void);
// @baa 0x011a0390
undefined4 C::sub_011a0390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011a01d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_011a07f0 { void sub_0040fcc0(); };

struct C_011a07f0 { char pad[4]; M_011a07f0 m; void sub_011a07f0(); };

// @baa 0x011a07f0
void C_011a07f0::sub_011a07f0() { m.sub_0040fcc0(); }

typedef void (*FuncPtr)();

extern FuncPtr g_01e2b700;
// @baa 0x011a9310
void sub_011a9310() {
    g_01e2b700();
}

extern TArray<int> g_026a1ca4;
struct C_011a9e90 {
    int sub_011a9e90();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x011a9e90
int C_011a9e90::sub_011a9e90()
{
    return g_026a1ca4(Index);
}

struct C_011a9ef0 {
    int sub_011a9ef0();
};

// @baa 0x011a9ef0
int C_011a9ef0::sub_011a9ef0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_011a9f10 {
    int sub_011a9f10();
};

// @baa 0x011a9f10
int C_011a9f10::sub_011a9f10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_011a9f20 {
    int sub_011a9f20();
};

// @baa 0x011a9f20
int C_011a9f20::sub_011a9f20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_view {
    int sub_011a0dc0(int, int);
};

// @baa 0x011a9fe0
int UTexture2D::sub_011a9fe0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_011a0dc0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_011aa010 {
    int sub_011a0ec0(int, int);
};

// @baa 0x011aa010
int UTexture2D::sub_011aa010(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_011aa010 *)(this))->sub_011a0ec0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_011aa050 {
    int sub_011aa050();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x011aa050
int C_011aa050::sub_011aa050()
{
    return g_026a1ca4(Index);
}

struct C_view_011aa0b0 {
    int sub_011a1050(int, int);
};

// @baa 0x011aa0b0
int UTexture2D::sub_011aa0b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_011aa0b0 *)(this))->sub_011a1050((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_view_011aa0e0 {
    int sub_011a1210(int, int);
};

// @baa 0x011aa0e0
int UTexture2D::sub_011aa0e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_011aa0e0 *)(this))->sub_011a1210((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_011aa2e0 {
    undefined4 sub_011aa2e0(byte);
    int sub_011a0b70();
};

// @baa 0x011aa2e0
undefined4 C_011aa2e0::sub_011aa2e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_011aa2e0 *)(((char *)this + 0xc)))->sub_011a0b70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011aa310 {
    undefined4 sub_011aa310(byte);
    int sub_011a0b70();
};

// @baa 0x011aa310
undefined4 C_011aa310::sub_011aa310(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_011aa310 *)(((char *)this + 0xc)))->sub_011a0b70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_011aa340 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aa340& operator++();
};

// @baa 0x011aa340
FSparseArrayConstIt_011aa340& FSparseArrayConstIt_011aa340::operator++()
{
    TConstIterator::operator++();
    return *this;
}

int sub_0040fcc0(void);
// @baa 0x011aa360
undefined4 UObject::sub_011aa360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FSparseArrayConstIt_011aa930 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aa930& operator++();
};

// @baa 0x011aa930
FSparseArrayConstIt_011aa930& FSparseArrayConstIt_011aa930::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011aa950 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aa950& operator++();
};

// @baa 0x011aa950
FSparseArrayConstIt_011aa950& FSparseArrayConstIt_011aa950::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011aa970 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aa970& operator++();
};

// @baa 0x011aa970
FSparseArrayConstIt_011aa970& FSparseArrayConstIt_011aa970::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011aa990 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aa990& operator++();
};

// @baa 0x011aa990
FSparseArrayConstIt_011aa990& FSparseArrayConstIt_011aa990::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011aa9b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aa9b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aa9b0
FSparseArrayConstIt_011aa9b0::FSparseArrayConstIt_011aa9b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011aaa00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aaa00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aaa00
FSparseArrayConstIt_011aaa00::FSparseArrayConstIt_011aaa00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011aaa50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aaa50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aaa50
FSparseArrayConstIt_011aaa50::FSparseArrayConstIt_011aaa50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011aaaa0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aaaa0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aaaa0
FSparseArrayConstIt_011aaaa0::FSparseArrayConstIt_011aaaa0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011aaaf0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aaaf0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aaaf0
FSparseArrayConstIt_011aaaf0::FSparseArrayConstIt_011aaaf0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011aab40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aab40& operator++();
};

// @baa 0x011aab40
FSparseArrayConstIt_011aab40& FSparseArrayConstIt_011aab40::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011aab60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aab60& operator++();
};

// @baa 0x011aab60
FSparseArrayConstIt_011aab60& FSparseArrayConstIt_011aab60::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011aab80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aab80& operator++();
};

// @baa 0x011aab80
FSparseArrayConstIt_011aab80& FSparseArrayConstIt_011aab80::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011aaba0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aaba0& operator++();
};

// @baa 0x011aaba0
FSparseArrayConstIt_011aaba0& FSparseArrayConstIt_011aaba0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011aabc0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aabc0& operator++();
};

// @baa 0x011aabc0
FSparseArrayConstIt_011aabc0& FSparseArrayConstIt_011aabc0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_011aabe0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aabe0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aabe0
FSparseArrayConstIt_011aabe0::FSparseArrayConstIt_011aabe0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011aac30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aac30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aac30
FSparseArrayConstIt_011aac30::FSparseArrayConstIt_011aac30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011aac80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aac80(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aac80
FSparseArrayConstIt_011aac80::FSparseArrayConstIt_011aac80(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011aacd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aacd0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aacd0
FSparseArrayConstIt_011aacd0::FSparseArrayConstIt_011aacd0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_011aad20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_011aad20(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x011aad20
FSparseArrayConstIt_011aad20::FSparseArrayConstIt_011aad20(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

void sub_011a1a10();
// @baa 0x011ab060
void sub_011ab060(void) { sub_011a1a10(); }

void sub_011a1a70();
// @baa 0x011ab070
void sub_011ab070(void) { sub_011a1a70(); }

struct A_011ab280 { virtual void sub_011ab290(); char pad[4]; };

struct B_011ab280 { virtual void sub_011ab290(); };

struct C_011ab280 : A_011ab280, B_011ab280 { virtual void sub_011ab290(); C_011ab280(); };

C_011ab280::C_011ab280() {}

// @baa 0x011ab280
void C_011ab280::sub_011ab290() {}

struct C_011ab290 {
    undefined4 sub_011ab290(byte);
};

int sub_011ab200(void);
// @baa 0x011ab290
undefined4 C_011ab290::sub_011ab290(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011ab200();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011ab2b0 { C_011ab2b0* sub_011ab2b0(void); };

// @baa 0x011ab2b0
C_011ab2b0* C_011ab2b0::sub_011ab2b0(void) { return this; }

struct C_011ab2c0 { C_011ab2c0* sub_011ab2c0(void); };

// @baa 0x011ab2c0
C_011ab2c0* C_011ab2c0::sub_011ab2c0(void) { return this; }

struct C_011a4860 {
    void sub_011a4860(INT Arg);
};

extern INT sub_011a3b20(INT, INT);
// @baa 0x011a4860
void C_011a4860::sub_011a4860(INT Arg)
{
    INT Obj = *(INT*)((char*)this + 0x334);
    sub_011a3b20(Obj, Obj + 0xc0);
}

void sub_011a3b20(int Value, int* Obj);
struct S011a4840
{
    char pad[0x334];
    int Id;
    char pad4[4];
    int Obj;
    void sub_011a4840(int Param);
};

// @baa 0x011a4840
void S011a4840::sub_011a4840(int Param)
{
    sub_011a3b20(Id, &Obj);
}
