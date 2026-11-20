// UnrealEd_13e0000.cpp (part 1 of 2): 78 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    int sub_013e0020(int);
};

// @baa 0x013e0020
int C::sub_013e0020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013e0090 {
    int sub_013e0090(int);
};

// @baa 0x013e0090
int C_013e0090::sub_013e0090(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013e09b0 {
    void sub_013e09b0(int);
};

int sub_0053df70(...);
// @baa 0x013e09b0
void C_013e09b0::sub_013e09b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_013e09f0 {
    int sub_013e09f0();
};

// @baa 0x013e09f0
int C_013e09f0::sub_013e09f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013e0a10 { int sub_013e0a10(void); };

// @baa 0x013e0a10
int C_013e0a10::sub_013e0a10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x013e0a50
void sub_013e0a50(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_013e0a60 {
    int sub_013e0a60(int);
};

// @baa 0x013e0a60
int C_013e0a60::sub_013e0a60(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_013e0a70 {
    int sub_013e0a70();
};

// @baa 0x013e0a70
int C_013e0a70::sub_013e0a70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013e0a90 {
    int sub_013e0a90();
};

// @baa 0x013e0a90
int C_013e0a90::sub_013e0a90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct A_013e0da0 { virtual void sub_013e9c80(); char pad[412]; };

struct B_013e0da0 { virtual void sub_013e9c80(); };

struct C_013e0da0 : A_013e0da0, B_013e0da0 { virtual void sub_013e9c80(); C_013e0da0(); };

C_013e0da0::C_013e0da0() {}

// @baa 0x013e0da0
void C_013e0da0::sub_013e9c80() {}

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
struct C_013e0db0 { undefined4 * sub_013e0db0(undefined4 * param_2, undefined4 param_3); };
// @baa 0x013e0db0
undefined4 * C_013e0db0::sub_013e0db0(undefined4 * param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
    param_1[3] = param_3;
    return param_1;
  }
  param_1[3] = param_3;
  return param_1;
}

class wxEvent;
class wxListView;
class wxEvent {
    public:
    public: __declspec(dllimport) void Skip(bool);
    friend struct C_013e1cf0;
};

class wxListView {
    public:
    public: __declspec(dllimport) long GetFirstSelected() const;
    friend struct C_013e1cf0;
};

struct C_013e1cf0 {
    void sub_013e1cf0(wxEvent *);
    int sub_013e1c10(int);
};

// @baa 0x013e1cf0
void C_013e1cf0::sub_013e1cf0(wxEvent * param_2)
{
    wxListView * param_1 = (wxListView *)this;
  long lVar1;
  lVar1 = ((wxListView *)(param_1))->wxListView::GetFirstSelected();
  ((C_013e1cf0 *)(this))->sub_013e1c10(lVar1);
  ((wxEvent *)(param_2))->wxEvent::Skip(true);
  return;
}

void sub_0040fcc0();
// @baa 0x013e2320
void sub_013e2320(void) { sub_0040fcc0(); }

struct C_013e41e0 { void sub_013e3f50(); void sub_013e41e0(int); };

// @baa 0x013e41e0
void C_013e41e0::sub_013e41e0(int) { sub_013e3f50(); }

struct C_013e41f0 { void sub_013e3f50(); void sub_013e41f0(int); };

// @baa 0x013e41f0
void C_013e41f0::sub_013e41f0(int) { sub_013e3f50(); }

struct C_013e7950 {
    bool sub_013e7950();
};

int sub_013deb50(...);
// @baa 0x013e7950
bool C_013e7950::sub_013e7950(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_013deb50(*(undefined4 *)(param_1 + 0xc));
  return iVar1 != 0;
}

struct C_013e7970 {
    bool sub_013e7970();
};

int sub_013dede0(...);
// @baa 0x013e7970
bool C_013e7970::sub_013e7970(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_013dede0(*(undefined4 *)(param_1 + 0xc));
  return iVar1 != 0;
}

struct C_013e9a20 {
    undefined4 sub_013e9a20(byte);
    int sub_013e3980();
};

int sub_0053dfa0(...);
// @baa 0x013e9a20
undefined4 C_013e9a20::sub_013e9a20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013e9a20 *)(((char *)this + 4)))->sub_013e3980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013e9a50 {
    undefined4 * sub_013e9a50(undefined4 *);
    int sub_013e8fc0(int);
};

// @baa 0x013e9a50
undefined4 * C_013e9a50::sub_013e9a50(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013e9a50 *)(((char *)this + 4)))->sub_013e8fc0((int)(param_2 + 1));
  return param_1;
}

struct C_013e9a70 { int sub_013e9a70(void); };

// @baa 0x013e9a70
int C_013e9a70::sub_013e9a70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013e9a80 {
    int sub_013e9a80();
};

// @baa 0x013e9a80
int C_013e9a80::sub_013e9a80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x3c;
}

struct C_013e9b20 {
    int sub_013e9b20(int);
    int sub_013e9aa0(int, int);
};

// @baa 0x013e9b20
int C_013e9b20::sub_013e9b20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_013e9b20 *)(this))->sub_013e9aa0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

void sub_013e9bc0();
// @baa 0x013e9c30
void sub_013e9c30(void) { sub_013e9bc0(); }

// @baa 0x013e9c40
void sub_013e9c40(void) { sub_013e9bc0(); }

// @baa 0x013e9c50
void sub_013e9c50(void) { sub_013e9bc0(); }

struct C_013e9c60 {
    undefined4 sub_013e9c60(byte);
};

int sub_013e6e30(void);
// @baa 0x013e9c60
undefined4 C_013e9c60::sub_013e9c60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e6e30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013e9c80 {
    undefined4 sub_013e9c80(byte);
};

int sub_013e0cd0(void);
// @baa 0x013e9c80
undefined4 C_013e9c80::sub_013e9c80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e0cd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013ea2a0 {
    undefined4 sub_013ea2a0(byte);
};

int sub_013e2c80(void);
// @baa 0x013ea2a0
undefined4 C_013ea2a0::sub_013ea2a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e2c80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013ea2c0 {
    undefined4 sub_013ea2c0(byte);
};

int sub_013e2e90(void);
// @baa 0x013ea2c0
undefined4 C_013ea2c0::sub_013ea2c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e2e90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013ec440 { void sub_013e98a0(int); C_013ec440 *sub_013ec440(int); };

// @baa 0x013ec440
C_013ec440 *C_013ec440::sub_013ec440(int a) { sub_013e98a0(a); return this; }

struct C_013ec560 { int a, b, c; C_013ec560(); };

// @baa 0x013ec560
C_013ec560::C_013ec560() : a(0), b(0), c(0) {}

struct C_013ec5d0 {
    int sub_013ec5d0();
};

// @baa 0x013ec5d0
int C_013ec5d0::sub_013ec5d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_013ec650 {
    int sub_013ec650(int);
    int sub_013e91d0(int, int);
};

// @baa 0x013ec650
int C_013ec650::sub_013ec650(int param_2)
{
    int * param_1 = (int *)this;
  ((C_013ec650 *)(this))->sub_013e91d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_013ec680 {
    int sub_013ec680(int);
    int sub_013e92d0(int, int);
};

// @baa 0x013ec680
int C_013ec680::sub_013ec680(int param_2)
{
    int * param_1 = (int *)this;
  ((C_013ec680 *)(this))->sub_013e92d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_013ec6b0 {
    int sub_013ec6b0(int);
};

// @baa 0x013ec6b0
int C_013ec6b0::sub_013ec6b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_013ec6d0 {
    int sub_013ec6d0(int);
    int sub_013e94b0(int, int);
};

// @baa 0x013ec6d0
int C_013ec6d0::sub_013ec6d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_013ec6d0 *)(this))->sub_013e94b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_013ec760 {
    int sub_013ec760(int);
    int sub_013e95b0(int, int);
};

// @baa 0x013ec760
int C_013ec760::sub_013ec760(int param_2)
{
    int * param_1 = (int *)this;
  ((C_013ec760 *)(this))->sub_013e95b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_013ec790 {
    int sub_013ec790(int);
    int sub_013e9620(int, int);
};

// @baa 0x013ec790
int C_013ec790::sub_013ec790(int param_2)
{
    int * param_1 = (int *)this;
  ((C_013ec790 *)(this))->sub_013e9620((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_013ec900 {
    int sub_013ec900(int);
};

// @baa 0x013ec900
int C_013ec900::sub_013ec900(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_013ec9a0 {
    int sub_013ec9a0(int);
};

// @baa 0x013ec9a0
int C_013ec9a0::sub_013ec9a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_013ec9c0 {
    undefined4 sub_013ec9c0(byte);
    int sub_013e3980();
};

// @baa 0x013ec9c0
undefined4 C_013ec9c0::sub_013ec9c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013ec9c0 *)(((char *)this + 4)))->sub_013e3980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_013ecf90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ecf90& operator++();
};

// @baa 0x013ecf90
FSparseArrayConstIt_013ecf90& FSparseArrayConstIt_013ecf90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ecfb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ecfb0& operator++();
};

// @baa 0x013ecfb0
FSparseArrayConstIt_013ecfb0& FSparseArrayConstIt_013ecfb0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ecfd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ecfd0& operator++();
};

// @baa 0x013ecfd0
FSparseArrayConstIt_013ecfd0& FSparseArrayConstIt_013ecfd0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ecff0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ecff0& operator++();
};

// @baa 0x013ecff0
FSparseArrayConstIt_013ecff0& FSparseArrayConstIt_013ecff0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed010 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed010& operator++();
};

// @baa 0x013ed010
FSparseArrayConstIt_013ed010& FSparseArrayConstIt_013ed010::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed030 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed030& operator++();
};

// @baa 0x013ed030
FSparseArrayConstIt_013ed030& FSparseArrayConstIt_013ed030::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed050 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed050& operator++();
};

// @baa 0x013ed050
FSparseArrayConstIt_013ed050& FSparseArrayConstIt_013ed050::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed1b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed1b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed1b0
FSparseArrayConstIt_013ed1b0::FSparseArrayConstIt_013ed1b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed200 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed200(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed200
FSparseArrayConstIt_013ed200::FSparseArrayConstIt_013ed200(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed250 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed250(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed250
FSparseArrayConstIt_013ed250::FSparseArrayConstIt_013ed250(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed2a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed2a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed2a0
FSparseArrayConstIt_013ed2a0::FSparseArrayConstIt_013ed2a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed2f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed2f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed2f0
FSparseArrayConstIt_013ed2f0::FSparseArrayConstIt_013ed2f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed340 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed340(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed340
FSparseArrayConstIt_013ed340::FSparseArrayConstIt_013ed340(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed390 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed390(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed390
FSparseArrayConstIt_013ed390::FSparseArrayConstIt_013ed390(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed3e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed3e0& operator++();
};

// @baa 0x013ed3e0
FSparseArrayConstIt_013ed3e0& FSparseArrayConstIt_013ed3e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed400 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed400& operator++();
};

// @baa 0x013ed400
FSparseArrayConstIt_013ed400& FSparseArrayConstIt_013ed400::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed420 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed420& operator++();
};

// @baa 0x013ed420
FSparseArrayConstIt_013ed420& FSparseArrayConstIt_013ed420::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed440 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed440& operator++();
};

// @baa 0x013ed440
FSparseArrayConstIt_013ed440& FSparseArrayConstIt_013ed440::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed460 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed460& operator++();
};

// @baa 0x013ed460
FSparseArrayConstIt_013ed460& FSparseArrayConstIt_013ed460::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed480 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed480& operator++();
};

// @baa 0x013ed480
FSparseArrayConstIt_013ed480& FSparseArrayConstIt_013ed480::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed4a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed4a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed4a0
FSparseArrayConstIt_013ed4a0::FSparseArrayConstIt_013ed4a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed4f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed4f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed4f0
FSparseArrayConstIt_013ed4f0::FSparseArrayConstIt_013ed4f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed540 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed540(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed540
FSparseArrayConstIt_013ed540::FSparseArrayConstIt_013ed540(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed590 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed590(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed590
FSparseArrayConstIt_013ed590::FSparseArrayConstIt_013ed590(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed5e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed5e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed5e0
FSparseArrayConstIt_013ed5e0::FSparseArrayConstIt_013ed5e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed630 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed630(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed630
FSparseArrayConstIt_013ed630::FSparseArrayConstIt_013ed630(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013ed6f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed6f0& operator++();
};

// @baa 0x013ed6f0
FSparseArrayConstIt_013ed6f0& FSparseArrayConstIt_013ed6f0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_013ed710 {
    int sub_013ed710();
};

// @baa 0x013ed710
int C_013ed710::sub_013ed710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x3c;
}

struct FSparseArrayConstIt_013ed770 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed770& operator++();
};

// @baa 0x013ed770
FSparseArrayConstIt_013ed770& FSparseArrayConstIt_013ed770::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013ed790 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013ed790(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013ed790
FSparseArrayConstIt_013ed790::FSparseArrayConstIt_013ed790(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_013ed7e0 {
    undefined4 * sub_013ed7e0(undefined4);
    int sub_014a9a40(int);
};

extern undefined * g_02276dd0;
// @baa 0x013ed7e0
undefined4 * C_013ed7e0::sub_013ed7e0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_013ed7e0 *)(this))->sub_014a9a40(param_2);
  *param_1 = (undefined4)(&g_02276dd0);
  param_1[0x28] = 0;
  return param_1;
}

struct C_013ed810 {
    void sub_013ed810(undefined4);
};

int sub_014bdb90(void);
// @baa 0x013ed810
void C_013ed810::sub_013ed810(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_014bdb90();
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  return;
}

// @baa 0x013ed830
void sub_013ed830(void) {  }

struct C_013ed860 {
    undefined4 * sub_013ed860(undefined4);
    int sub_014a9a40(int);
};

extern undefined * g_02276e78;
// @baa 0x013ed860
undefined4 * C_013ed860::sub_013ed860(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_013ed860 *)(this))->sub_014a9a40(param_2);
  param_1[0x28] = 0;
  *param_1 = (undefined4)(&g_02276e78);
  param_1[0x29] = 0x50e5;
  return param_1;
}

struct C_013ed8b0 {
    undefined4 * sub_013ed8b0(undefined4);
    int sub_014a9a40(int);
};

extern undefined * g_02276f20;
// @baa 0x013ed8b0
undefined4 * C_013ed8b0::sub_013ed8b0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_013ed8b0 *)(this))->sub_014a9a40(param_2);
  param_1[0x28] = 0;
  *param_1 = (undefined4)(&g_02276f20);
  return param_1;
}

struct T1 { void sub_00551710(int); };

struct T0 {
    void sub_013ed900();
    char pad8[8];
    T1 t1;
};

// @baa 0x013ed900
void T0::sub_013ed900() {
    t1.sub_00551710(0);
}

struct C_013ef7f0 {
    undefined4 sub_013ef7f0(byte);
};

int sub_013ea480(void);
// @baa 0x013ef7f0
undefined4 C_013ef7f0::sub_013ef7f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013ea480();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
