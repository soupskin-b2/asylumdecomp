// UnrealEd_13b0000.cpp: 73 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C_view {
    int sub_00547da0(int);
};

// @baa 0x013b0070
int URFMODSound::sub_013b0070(int param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00547da0(param_2);
  ((C_view *)(((char *)this + 0xc)))->sub_00547da0(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

struct C { C* sub_013b00a0(void); };

// @baa 0x013b00a0
C* C::sub_013b00a0(void) { return this; }

struct C_013b04e0 {
    void sub_013b04e0(undefined4);
};

int sub_007e3de0(...);
// @baa 0x013b04e0
void C_013b04e0::sub_013b04e0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_007e3de0(param_2,param_1 + 0x18);
  return;
}

struct A_013b0540 { virtual void sub_013baae0(); char pad[332]; };

struct B_013b0540 { virtual void sub_013baae0(); };

struct C_013b0540 : A_013b0540, B_013b0540 { virtual void sub_013baae0(); C_013b0540(); };

C_013b0540::C_013b0540() {}

// @baa 0x013b0540
void C_013b0540::sub_013baae0() {}

class wxWindowBase;
class wxWindowBase {
    public:
    public: __declspec(dllimport) bool DestroyChildren();
    friend struct C_013b0550;
};

struct C_013b0550 {
    void sub_013b0550();
};

int sub_0053df70(...);
// @baa 0x013b0550
void C_013b0550::sub_013b0550(void)
{
    wxWindowBase * param_1 = (wxWindowBase *)this;

  undefined4 uVar1;
  
  ((wxWindowBase *)(param_1))->wxWindowBase::DestroyChildren();
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x1b4),0,8);
      *(undefined4 *)(param_1 + 0x1b4) = uVar1;
    }
  }
  return;
}

struct C_013b0730 {
    undefined4 sub_013b0730(byte);
};

int sub_0053dfa0(...);
int sub_013ab5c0(void);
// @baa 0x013b0730
undefined4 C_013b0730::sub_013b0730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013ab5c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S {
    void sub_013b0590(int);
};

struct C_013b1ff0 {
    char pad[0x198];
    S* f;
    void sub_013b1ff0(int x);
};

// @baa 0x013b1ff0
void C_013b1ff0::sub_013b1ff0(int x)
{
    f->sub_013b0590(x);
}

struct C_013b2920 { void sub_013b2000(); void sub_013b2920(int); };

// @baa 0x013b2920
void C_013b2920::sub_013b2920(int) { sub_013b2000(); }

int sub_011202d0(void);
// @baa 0x013b2fc0
undefined4 UUnrealEdEngine::sub_013b2fc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011202d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013b3840 {
    undefined4 * sub_013b3840(byte);
};

extern undefined * g_01e72a60;
// @baa 0x013b3840
undefined4 * C_013b3840::sub_013b3840(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013b61c0 {
    undefined4 sub_013b61c0(byte);
};

int sub_013ad8d0(void);
// @baa 0x013b61c0
undefined4 C_013b61c0::sub_013b61c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013ad8d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013b6cb0 {
    int sub_013b6cb0();
};

// @baa 0x013b6cb0
int C_013b6cb0::sub_013b6cb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_013b7a70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7a70& operator++();
};

// @baa 0x013b7a70
FSparseArrayConstIt_013b7a70& FSparseArrayConstIt_013b7a70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013b7a90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7a90& operator++();
};

// @baa 0x013b7a90
FSparseArrayConstIt_013b7a90& FSparseArrayConstIt_013b7a90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013b7ab0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7ab0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7ab0
FSparseArrayConstIt_013b7ab0::FSparseArrayConstIt_013b7ab0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7b00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7b00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7b00
FSparseArrayConstIt_013b7b00::FSparseArrayConstIt_013b7b00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7b50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7b50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7b50
FSparseArrayConstIt_013b7b50::FSparseArrayConstIt_013b7b50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7ba0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7ba0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7ba0
FSparseArrayConstIt_013b7ba0::FSparseArrayConstIt_013b7ba0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7bf0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7bf0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7bf0
FSparseArrayConstIt_013b7bf0::FSparseArrayConstIt_013b7bf0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7c40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7c40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7c40
FSparseArrayConstIt_013b7c40::FSparseArrayConstIt_013b7c40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7c90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7c90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7c90
FSparseArrayConstIt_013b7c90::FSparseArrayConstIt_013b7c90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7ce0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7ce0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7ce0
FSparseArrayConstIt_013b7ce0::FSparseArrayConstIt_013b7ce0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7d30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7d30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7d30
FSparseArrayConstIt_013b7d30::FSparseArrayConstIt_013b7d30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7d80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7d80& operator++();
};

// @baa 0x013b7d80
FSparseArrayConstIt_013b7d80& FSparseArrayConstIt_013b7d80::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013b7da0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7da0& operator++();
};

// @baa 0x013b7da0
FSparseArrayConstIt_013b7da0& FSparseArrayConstIt_013b7da0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013b7dc0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7dc0& operator++();
};

// @baa 0x013b7dc0
FSparseArrayConstIt_013b7dc0& FSparseArrayConstIt_013b7dc0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013b7de0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7de0& operator++();
};

// @baa 0x013b7de0
FSparseArrayConstIt_013b7de0& FSparseArrayConstIt_013b7de0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013b7e00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7e00& operator++();
};

// @baa 0x013b7e00
FSparseArrayConstIt_013b7e00& FSparseArrayConstIt_013b7e00::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013b7e20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7e20& operator++();
};

// @baa 0x013b7e20
FSparseArrayConstIt_013b7e20& FSparseArrayConstIt_013b7e20::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013b7e40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7e40& operator++();
};

// @baa 0x013b7e40
FSparseArrayConstIt_013b7e40& FSparseArrayConstIt_013b7e40::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013b7e60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7e60(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7e60
FSparseArrayConstIt_013b7e60::FSparseArrayConstIt_013b7e60(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7eb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7eb0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7eb0
FSparseArrayConstIt_013b7eb0::FSparseArrayConstIt_013b7eb0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7f00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7f00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7f00
FSparseArrayConstIt_013b7f00::FSparseArrayConstIt_013b7f00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7f50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7f50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7f50
FSparseArrayConstIt_013b7f50::FSparseArrayConstIt_013b7f50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7fa0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7fa0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7fa0
FSparseArrayConstIt_013b7fa0::FSparseArrayConstIt_013b7fa0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b7ff0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b7ff0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b7ff0
FSparseArrayConstIt_013b7ff0::FSparseArrayConstIt_013b7ff0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b8040 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b8040(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013b8040
FSparseArrayConstIt_013b8040::FSparseArrayConstIt_013b8040(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013b8090 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013b8090& operator++();
};

// @baa 0x013b8090
FSparseArrayConstIt_013b8090& FSparseArrayConstIt_013b8090::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_013b80b0 {
    int sub_013b80b0();
};

// @baa 0x013b80b0
int C_013b80b0::sub_013b80b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013b8210 {
    undefined4 * sub_013b8210(undefined4 *);
    int sub_005518a0(int);
};

// @baa 0x013b8210
undefined4 * C_013b8210::sub_013b8210(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013b8210 *)(((char *)this + 4)))->sub_005518a0((int)(param_2 + 1));
  return param_1;
}

struct C_013b8230 {
    undefined4 * sub_013b8230(undefined4 *);
    int sub_0054e610(int);
};

// @baa 0x013b8230
undefined4 * C_013b8230::sub_013b8230(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013b8230 *)(((char *)this + 4)))->sub_0054e610((int)(param_2 + 1));
  return param_1;
}

struct C_013b8270 { C_013b8270* sub_013b8270(void); };

// @baa 0x013b8270
C_013b8270* C_013b8270::sub_013b8270(void) { return this; }

struct A_013b94d0 { virtual void sub_013b9590(); char pad[320]; };

struct B_013b94d0 { virtual void sub_013b9590(); };

struct C_013b94d0 : A_013b94d0, B_013b94d0 { virtual void sub_013b9590(); C_013b94d0(); };

C_013b94d0::C_013b94d0() {}

// @baa 0x013b94d0
void C_013b94d0::sub_013b9590() {}

struct A_013b94e0 { virtual void sub_013b9590(); char pad[384]; };

struct B_013b94e0 { virtual void sub_013b9590(); };

struct C_013b94e0 : A_013b94e0, B_013b94e0 { virtual void sub_013b9590(); C_013b94e0(); };

C_013b94e0::C_013b94e0() {}

// @baa 0x013b94e0
void C_013b94e0::sub_013b9590() {}

struct A_013b94f0 { virtual void sub_013b9590(); char pad[324]; };

struct B_013b94f0 { virtual void sub_013b9590(); };

struct C_013b94f0 : A_013b94f0, B_013b94f0 { virtual void sub_013b9590(); C_013b94f0(); };

C_013b94f0::C_013b94f0() {}

// @baa 0x013b94f0
void C_013b94f0::sub_013b9590() {}

int sub_013b9500(void);
// @baa 0x013b9590
undefined4 UUnrealEdEngine::sub_013b9590(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013b9500();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013baae0 {
    undefined4 sub_013baae0(byte);
};

int sub_013b06d0(void);
// @baa 0x013baae0
undefined4 C_013baae0::sub_013baae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013b06d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_0226d2a4[];
// @baa 0x013bacc0
int sub_013bacc0(void) { return (int)g_0226d2a4; }

struct A_013bacd0 { virtual void sub_013bad90(); char pad[388]; };

struct B_013bacd0 { virtual void sub_013bad90(); };

struct C_013bacd0 : A_013bacd0, B_013bacd0 { virtual void sub_013bad90(); C_013bacd0(); };

C_013bacd0::C_013bacd0() {}

// @baa 0x013bacd0
void C_013bacd0::sub_013bad90() {}

struct A_013bace0 { virtual void sub_013bad90(); char pad[320]; };

struct B_013bace0 { virtual void sub_013bad90(); };

struct C_013bace0 : A_013bace0, B_013bace0 { virtual void sub_013bad90(); C_013bace0(); };

C_013bace0::C_013bace0() {}

// @baa 0x013bace0
void C_013bace0::sub_013bad90() {}

struct A_013bacf0 { virtual void sub_013bad90(); char pad[324]; };

struct B_013bacf0 { virtual void sub_013bad90(); };

struct C_013bacf0 : A_013bacf0, B_013bacf0 { virtual void sub_013bad90(); C_013bacf0(); };

C_013bacf0::C_013bacf0() {}

// @baa 0x013bacf0
void C_013bacf0::sub_013bad90() {}

int sub_013bad00(void);
// @baa 0x013bad90
undefined4 UUnrealEdEngine::sub_013bad90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013bad00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013bc200 { void sub_013bb340(); void sub_013bc200(int); };

// @baa 0x013bc200
void C_013bc200::sub_013bc200(int) { sub_013bb340(); }

struct C_view_013bd7e0 {
    int sub_013aeff0(int, int);
};

// @baa 0x013bd7e0
int UPackageMap::sub_013bd7e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_013bd7e0 *)(this))->sub_013aeff0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct FSparseArrayConstIt_013beba0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013beba0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013beba0
FSparseArrayConstIt_013beba0::FSparseArrayConstIt_013beba0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013bebf0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013bebf0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013bebf0
FSparseArrayConstIt_013bebf0::FSparseArrayConstIt_013bebf0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013bec40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013bec40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013bec40
FSparseArrayConstIt_013bec40::FSparseArrayConstIt_013bec40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013bec90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013bec90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013bec90
FSparseArrayConstIt_013bec90::FSparseArrayConstIt_013bec90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013bece0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013bece0& operator++();
};

// @baa 0x013bece0
FSparseArrayConstIt_013bece0& FSparseArrayConstIt_013bece0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_013bed00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013bed00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013bed00
FSparseArrayConstIt_013bed00::FSparseArrayConstIt_013bed00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013bed50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013bed50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013bed50
FSparseArrayConstIt_013bed50::FSparseArrayConstIt_013bed50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013beda0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013beda0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013beda0
FSparseArrayConstIt_013beda0::FSparseArrayConstIt_013beda0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013bedf0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013bedf0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013bedf0
FSparseArrayConstIt_013bedf0::FSparseArrayConstIt_013bedf0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_013bee40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_013bee40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x013bee40
FSparseArrayConstIt_013bee40::FSparseArrayConstIt_013bee40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_013bf230 { void sub_013b8110(int); C_013bf230 *sub_013bf230(int); };

// @baa 0x013bf230
C_013bf230 *C_013bf230::sub_013bf230(int a) { sub_013b8110(a); return this; }

void sub_013b8170();
// @baa 0x013bf250
void sub_013bf250(void) { sub_013b8170(); }

struct SInner {
    int sub_013bb440();
};

struct SOuter {
    int sub_013bf2f0(int arg1);
    char pad[0x1b0];
    SInner* inner;
};

// @baa 0x013bf2f0
int SOuter::sub_013bf2f0(int arg1)
{
    return ((SInner *)inner)->sub_013bb440();
}

// The original takes one argument and discards it, forwarding a fixed value.
INT sub_013b9d90(INT bShow);
// @baa 0x013ba480
INT sub_013ba480(INT bShow)
{
    return sub_013b9d90(TRUE);
}

// @baa 0x013ba490
INT sub_013ba490(INT bShow)
{
    return sub_013b9d90(FALSE);
}

// The original takes one argument and discards it, forwarding a fixed value.
INT sub_013bba00(INT bShow);
// @baa 0x013bc1c0
INT sub_013bc1c0(INT bShow)
{
    return sub_013bba00(TRUE);
}

// @baa 0x013bc1d0
INT sub_013bc1d0(INT bShow)
{
    return sub_013bba00(FALSE);
}

// The original takes one argument and discards it, forwarding a fixed value.
INT sub_013bb960(INT bShow);
// @baa 0x013bc1e0
INT sub_013bc1e0(INT bShow)
{
    return sub_013bb960(TRUE);
}

// @baa 0x013bc1f0
INT sub_013bc1f0(INT bShow)
{
    return sub_013bb960(FALSE);
}
