// Editor_0ac0000.cpp: 32 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00acd670(); };

// @baa 0x00acd670
void C::sub_00acd670() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00acd6d0 { int sub_00acd6d0(int param_2); };
// @baa 0x00acd6d0
int C_00acd6d0::sub_00acd6d0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_view {
    int sub_00ac8e10(int, int);
};

struct C_00acd6e0 { int sub_00acd6e0(int param_2); };
// @baa 0x00acd6e0
int C_00acd6e0::sub_00acd6e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00ac8e10((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00acd710 { int sub_00acd710(int param_2); };
// @baa 0x00acd710
int C_00acd710::sub_00acd710(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00acd720 { int sub_00acd720(int param_2); };
// @baa 0x00acd720
int C_00acd720::sub_00acd720(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

// @baa 0x00acd8b0
void __stdcall sub_00acd8b0(int a0, int a1) {  }

struct C_00acd8c0 { int sub_00acd8c0(void); };
// @baa 0x00acd8c0
int C_00acd8c0::sub_00acd8c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00acd8d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00acd8d0& operator++();
};

// @baa 0x00acd8d0
FSparseArrayConstIt_00acd8d0& FSparseArrayConstIt_00acd8d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00acd8f0 { int sub_00acd8f0(void); };
// @baa 0x00acd8f0
int C_00acd8f0::sub_00acd8f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct M_00acd900 { void sub_00ac66b0(); };

struct C_00acd900 { char pad[44]; M_00acd900 m; void sub_00acd900(); };

// @baa 0x00acd900
void C_00acd900::sub_00acd900() { m.sub_00ac66b0(); }

struct C_00acd950 { void* Data; int Num; int Max; void sub_00acd950(); };

// @baa 0x00acd950
void C_00acd950::sub_00acd950() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00acdb20 { int sub_00acdb20(int param_2); };
// @baa 0x00acdb20
int C_00acdb20::sub_00acdb20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

int sub_0053df70(...);
struct C_00acdd60 { void sub_00acdd60(int param_2); };
// @baa 0x00acdd60
void C_00acdd60::sub_00acdd60(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x30,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00acdda0 { int sub_00acdda0(int param_2); };
// @baa 0x00acdda0
int C_00acdda0::sub_00acdda0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00acdf10 { int sub_00acdf10(int param_2); };
// @baa 0x00acdf10
int C_00acdf10::sub_00acdf10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00ace0f0 { int sub_00ace0f0(int param_2); };
// @baa 0x00ace0f0
int C_00ace0f0::sub_00ace0f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_00ace1e0 { void* Data; int Num; int Max; void sub_00ace1e0(); };

// @baa 0x00ace1e0
void C_00ace1e0::sub_00ace1e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ace2a0 {
    int sub_00ace2a0(int);
};

// @baa 0x00ace2a0
int C_00ace2a0::sub_00ace2a0(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x30 +
         (-(uint)(*(uint *)(param_1 + 0x300) == 0) & param_1 | *(uint *)(param_1 + 0x300));
}

// @baa 0x00ace2d0
void __stdcall sub_00ace2d0(int a0, int a1) {  }

struct FSparseArrayConstIt_00ace2e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ace2e0& operator++();
};

// @baa 0x00ace2e0
FSparseArrayConstIt_00ace2e0& FSparseArrayConstIt_00ace2e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ace300 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ace300& operator++();
};

// @baa 0x00ace300
FSparseArrayConstIt_00ace300& FSparseArrayConstIt_00ace300::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00ace380 {
    int sub_00ace380(int);
};

// @baa 0x00ace380
int C_00ace380::sub_00ace380(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1 | *(uint *)(param_1 + 0x18c0));
}

// @baa 0x00ace3a0
void __stdcall sub_00ace3a0(int a0, int a1) {  }

struct C_00ace410 {
    int sub_00ace410(int);
};

// @baa 0x00ace410
int C_00ace410::sub_00ace410(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1 | *(uint *)(param_1 + 0x18c0));
}

// @baa 0x00ace430
void __stdcall sub_00ace430(int a0, int a1) {  }

struct FSparseArrayConstIt_00ace440 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ace440& operator++();
};

// @baa 0x00ace440
FSparseArrayConstIt_00ace440& FSparseArrayConstIt_00ace440::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ace460 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ace460& operator++();
};

// @baa 0x00ace460
FSparseArrayConstIt_00ace460& FSparseArrayConstIt_00ace460::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ace480 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ace480& operator++();
};

// @baa 0x00ace480
FSparseArrayConstIt_00ace480& FSparseArrayConstIt_00ace480::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ace4a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ace4a0& operator++();
};

// @baa 0x00ace4a0
FSparseArrayConstIt_00ace4a0& FSparseArrayConstIt_00ace4a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00ace4c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00ace4c0& operator++();
};

// @baa 0x00ace4c0
FSparseArrayConstIt_00ace4c0& FSparseArrayConstIt_00ace4c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct M_00ace4e0 { void sub_00ac66b0(); };

struct C_00ace4e0 { char pad[44]; M_00ace4e0 m; void sub_00ace4e0(); };

// @baa 0x00ace4e0
void C_00ace4e0::sub_00ace4e0() { m.sub_00ac66b0(); }

struct C_00ace530 { void* Data; int Num; int Max; void sub_00ace530(); };

// @baa 0x00ace530
void C_00ace530::sub_00ace530() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
