// Engine_0960000.cpp (part 1 of 2): 188 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_0095a7c0(int); C *sub_00963890(int); };

// @baa 0x00963890
C *C::sub_00963890(int a) { sub_0095a7c0(a); return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_009638b0 { void* Data; int Num; int Max; void sub_009638b0(); };

// @baa 0x009638b0
void C_009638b0::sub_009638b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00964560 {
    void sub_00964560(int);
};

int sub_0053df70(...);
// @baa 0x00964560
void C_00964560::sub_00964560(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_009646a0 { C_009646a0* sub_009646a0(void); };

// @baa 0x009646a0
C_009646a0* C_009646a0::sub_009646a0(void) { return this; }

struct C_009646b0 { void* Data; int Num; int Max; void sub_009646b0(); };

// @baa 0x009646b0
void C_009646b0::sub_009646b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00964710 {
    undefined4 sub_00964710();
};

// @baa 0x00964710
undefined4 C_00964710::sub_00964710(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00964fb0 { int a, b, c; C_00964fb0(); };

// @baa 0x00964fb0
C_00964fb0::C_00964fb0() : a(0), b(0), c(0) {}

struct C_00964fc0 { int a, b, c; C_00964fc0(); };

// @baa 0x00964fc0
C_00964fc0::C_00964fc0() : a(0), b(0), c(0) {}

struct C_00964fd0 { int a, b, c; C_00964fd0(); };

// @baa 0x00964fd0
C_00964fd0::C_00964fd0() : a(0), b(0), c(0) {}

struct C_00964fe0 { int a, b, c; C_00964fe0(); };

// @baa 0x00964fe0
C_00964fe0::C_00964fe0() : a(0), b(0), c(0) {}

// @baa 0x00965010
int sub_00965010(void) { return 0; }

struct C_00965020 { int sub_00965020(void); };

// @baa 0x00965020
int C_00965020::sub_00965020(void) { return *(int*)((char*)this + 16); }

struct C_00965030 { int sub_00965030(void); };

// @baa 0x00965030
int C_00965030::sub_00965030(void) { return *(int*)((char*)this + 4); }

struct C_00965040 {
    int sub_00965040();
};

// @baa 0x00965040
int C_00965040::sub_00965040(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0xc;
}

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00965050(INT Index) const;
};

// @baa 0x00965050
const E* S::sub_00965050(INT Index) const
{
    return &Items(Index);
}

struct C_009650a0 { char pad[4]; TArray<int> A; const int* sub_009650a0() const; };

// @baa 0x009650a0
const int* C_009650a0::sub_009650a0() const { return &A(0); }

struct C_009650d0 {
    void sub_009650d0(int);
};

// @baa 0x009650d0
void C_009650d0::sub_009650d0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00965110 {
    void sub_00965110();
};

// @baa 0x00965110
void C_00965110::sub_00965110(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x00965160
int sub_00965160(void) { return 0; }

struct C_00965170 { int sub_00965170(void); };

// @baa 0x00965170
int C_00965170::sub_00965170(void) { return *(int*)((char*)this + 16); }

struct C_00965180 { int sub_00965180(void); };

// @baa 0x00965180
int C_00965180::sub_00965180(void) { return *(int*)((char*)this + 4); }

struct C_00965190 {
    int sub_00965190();
};

// @baa 0x00965190
int C_00965190::sub_00965190(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 4;
}

struct S_009651a0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_009651a0(INT Index) const;
};

// @baa 0x009651a0
const DWORD* S_009651a0::sub_009651a0(INT Index) const
{
    return &Items(Index);
}

struct C_009651f0 { char pad[4]; TArray<int> A; const int* sub_009651f0() const; };

// @baa 0x009651f0
const int* C_009651f0::sub_009651f0() const { return &A(0); }

struct C_00965220 {
    void sub_00965220(int);
};

// @baa 0x00965220
void C_00965220::sub_00965220(int param_2)
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

struct C_00965260 {
    void sub_00965260();
};

// @baa 0x00965260
void C_00965260::sub_00965260(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

struct C_00965290 { int a, b, c; C_00965290(); };

// @baa 0x00965290
C_00965290::C_00965290() : a(0), b(0), c(0) {}

struct C_009652a0 { int a, b, c; C_009652a0(); };

// @baa 0x009652a0
C_009652a0::C_009652a0() : a(0), b(0), c(0) {}

struct C_00965470 {
    int sub_00965470(int);
};

// @baa 0x00965470
int C_00965470::sub_00965470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00965490 {
    int sub_00965490(int);
};

// @baa 0x00965490
int C_00965490::sub_00965490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_009654b0 {
    int sub_009654b0(int, undefined4);
    int sub_009591d0(int, int, int);
};

// @baa 0x009654b0
int C_009654b0::sub_009654b0(int param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;
  ((C_009654b0 *)(this))->sub_009591d0((int)(&param_2), param_2, param_3);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

// @baa 0x00966180
int sub_00966180(void) { return 0; }

struct C_00966190 { int sub_00966190(void); };

// @baa 0x00966190
int C_00966190::sub_00966190(void) { return *(int*)((char*)this + 16); }

struct C_009661a0 {
    int sub_009661a0();
};

// @baa 0x009661a0
int C_009661a0::sub_009661a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) << 5;
}

struct C_009661b0 { char pad[4]; TArray<int> A; const int* sub_009661b0() const; };

// @baa 0x009661b0
const int* C_009661b0::sub_009661b0() const { return &A(0); }

struct C_009661e0 {
    void sub_009661e0();
};

// @baa 0x009661e0
void C_009661e0::sub_009661e0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x00966230
int sub_00966230(void) { return 0; }

struct C_00966240 { int sub_00966240(void); };

// @baa 0x00966240
int C_00966240::sub_00966240(void) { return *(int*)((char*)this + 16); }

struct C_00966250 {
    int sub_00966250();
};

// @baa 0x00966250
int C_00966250::sub_00966250(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x24;
}

struct C_00966260 { char pad[4]; TArray<int> A; const int* sub_00966260() const; };

// @baa 0x00966260
const int* C_00966260::sub_00966260() const { return &A(0); }

struct C_00966290 {
    void sub_00966290();
};

// @baa 0x00966290
void C_00966290::sub_00966290(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x009665a0
int sub_009665a0(void) { return 0; }

struct C_009665b0 { int sub_009665b0(void); };

// @baa 0x009665b0
int C_009665b0::sub_009665b0(void) { return *(int*)((char*)this + 16); }

struct C_009665c0 {
    int sub_009665c0();
};

// @baa 0x009665c0
int C_009665c0::sub_009665c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) << 4;
}

struct E_009665d0 { BYTE Bytes[16]; };

struct S_009665d0 {
    TArray<E_009665d0> Items; // 0x00
    const E_009665d0* sub_009665d0(INT Index) const;
};

// @baa 0x009665d0
const E_009665d0* S_009665d0::sub_009665d0(INT Index) const
{
    return &Items(Index);
}

struct C_00966620 { char pad[4]; TArray<int> A; const int* sub_00966620() const; };

// @baa 0x00966620
const int* C_00966620::sub_00966620() const { return &A(0); }

struct C_00966650 {
    void sub_00966650(int);
};

// @baa 0x00966650
void C_00966650::sub_00966650(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00966690 {
    void sub_00966690();
};

// @baa 0x00966690
void C_00966690::sub_00966690(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x009666e0
int sub_009666e0(void) { return 0; }

struct C_009666f0 { int sub_009666f0(void); };

// @baa 0x009666f0
int C_009666f0::sub_009666f0(void) { return *(int*)((char*)this + 16); }

struct C_00966700 {
    int sub_00966700();
};

// @baa 0x00966700
int C_00966700::sub_00966700(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x14;
}

struct E_00966710 { BYTE Bytes[20]; };

struct S_00966710 {
    TArray<E_00966710> Items; // 0x00
    const E_00966710* sub_00966710(INT Index) const;
};

// @baa 0x00966710
const E_00966710* S_00966710::sub_00966710(INT Index) const
{
    return &Items(Index);
}

struct C_00966760 { char pad[4]; TArray<int> A; const int* sub_00966760() const; };

// @baa 0x00966760
const int* C_00966760::sub_00966760() const { return &A(0); }

struct C_00966790 {
    void sub_00966790(int);
};

// @baa 0x00966790
void C_00966790::sub_00966790(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_009667d0 {
    void sub_009667d0();
};

// @baa 0x009667d0
void C_009667d0::sub_009667d0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x00966820
int sub_00966820(void) { return 0; }

struct C_00966830 { int sub_00966830(void); };

// @baa 0x00966830
int C_00966830::sub_00966830(void) { return *(int*)((char*)this + 16); }

struct C_00966840 {
    int sub_00966840();
};

// @baa 0x00966840
int C_00966840::sub_00966840(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x18;
}

struct E_00966850 { BYTE Bytes[24]; };

struct S_00966850 {
    TArray<E_00966850> Items; // 0x00
    const E_00966850* sub_00966850(INT Index) const;
};

// @baa 0x00966850
const E_00966850* S_00966850::sub_00966850(INT Index) const
{
    return &Items(Index);
}

struct C_009668a0 { char pad[4]; TArray<int> A; const int* sub_009668a0() const; };

// @baa 0x009668a0
const int* C_009668a0::sub_009668a0() const { return &A(0); }

struct C_009668d0 {
    void sub_009668d0(int);
};

// @baa 0x009668d0
void C_009668d0::sub_009668d0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x18,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00966910 {
    void sub_00966910();
};

// @baa 0x00966910
void C_00966910::sub_00966910(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x00966960
int sub_00966960(void) { return 0; }

struct C_00966970 { int sub_00966970(void); };

// @baa 0x00966970
int C_00966970::sub_00966970(void) { return *(int*)((char*)this + 16); }

struct C_00966980 {
    int sub_00966980();
};

// @baa 0x00966980
int C_00966980::sub_00966980(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x1c;
}

struct C_009669f0 { char pad[4]; TArray<int> A; const int* sub_009669f0() const; };

// @baa 0x009669f0
const int* C_009669f0::sub_009669f0() const { return &A(0); }

struct C_00966a20 {
    void sub_00966a20(int);
};

// @baa 0x00966a20
void C_00966a20::sub_00966a20(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00966a60 {
    void sub_00966a60();
};

// @baa 0x00966a60
void C_00966a60::sub_00966a60(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x00966ab0
int sub_00966ab0(void) { return 0; }

struct C_00966ac0 { int sub_00966ac0(void); };

// @baa 0x00966ac0
int C_00966ac0::sub_00966ac0(void) { return *(int*)((char*)this + 16); }

struct C_00966ad0 {
    int sub_00966ad0();
};

// @baa 0x00966ad0
int C_00966ad0::sub_00966ad0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x14;
}

struct C_00966ae0 { char pad[4]; TArray<int> A; const int* sub_00966ae0() const; };

// @baa 0x00966ae0
const int* C_00966ae0::sub_00966ae0() const { return &A(0); }

struct C_00966b10 {
    void sub_00966b10();
};

// @baa 0x00966b10
void C_00966b10::sub_00966b10(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x00966b60
int sub_00966b60(void) { return 0; }

struct C_00966b70 { int sub_00966b70(void); };

// @baa 0x00966b70
int C_00966b70::sub_00966b70(void) { return *(int*)((char*)this + 16); }

struct C_00966b80 {
    int sub_00966b80();
};

// @baa 0x00966b80
int C_00966b80::sub_00966b80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x1c;
}

struct C_00966ba0 { char pad[4]; TArray<int> A; const int* sub_00966ba0() const; };

// @baa 0x00966ba0
const int* C_00966ba0::sub_00966ba0() const { return &A(0); }

struct C_00966bd0 {
    void sub_00966bd0();
};

// @baa 0x00966bd0
void C_00966bd0::sub_00966bd0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x00966c20
int sub_00966c20(void) { return 0; }

struct C_00966c30 { int sub_00966c30(void); };

// @baa 0x00966c30
int C_00966c30::sub_00966c30(void) { return *(int*)((char*)this + 16); }

struct C_00966c40 {
    int sub_00966c40();
};

// @baa 0x00966c40
int C_00966c40::sub_00966c40(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x24;
}

struct C_00966c50 { char pad[4]; TArray<int> A; const int* sub_00966c50() const; };

// @baa 0x00966c50
const int* C_00966c50::sub_00966c50() const { return &A(0); }

struct C_00966c80 {
    void sub_00966c80();
};

// @baa 0x00966c80
void C_00966c80::sub_00966c80(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

// @baa 0x00966cd0
int sub_00966cd0(void) { return 0; }

struct C_00966ce0 { int sub_00966ce0(void); };

// @baa 0x00966ce0
int C_00966ce0::sub_00966ce0(void) { return *(int*)((char*)this + 16); }

struct C_00966cf0 {
    int sub_00966cf0();
};

// @baa 0x00966cf0
int C_00966cf0::sub_00966cf0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x2c;
}

struct C_00966d00 { char pad[4]; TArray<int> A; const int* sub_00966d00() const; };

// @baa 0x00966d00
const int* C_00966d00::sub_00966d00() const { return &A(0); }

struct C_00966d30 {
    void sub_00966d30();
};

// @baa 0x00966d30
void C_00966d30::sub_00966d30(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

struct C_00966d60 {
    undefined4 sub_00966d60(byte);
};

int sub_0053dfa0(...);
int sub_009590c0(void);
// @baa 0x00966d60
undefined4 C_00966d60::sub_00966d60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009590c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00966d80 {
    undefined4 sub_00966d80(byte);
};

int sub_00958330(void);
// @baa 0x00966d80
undefined4 C_00966d80::sub_00966d80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00958330();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00966da0 {
    undefined4 sub_00966da0(byte);
};

int sub_00959140(void);
// @baa 0x00966da0
undefined4 C_00966da0::sub_00966da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00959140();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00966dc0 {
    undefined4 sub_00966dc0(byte);
    int sub_00549160();
};

// @baa 0x00966dc0
undefined4 C_00966dc0::sub_00966dc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00966dc0 *)(((char *)this + 0xc)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00966df0 {
    undefined4 sub_00966df0(byte);
    int sub_00549160();
};

// @baa 0x00966df0
undefined4 C_00966df0::sub_00966df0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00966df0 *)(((char *)this + 0xc)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00966e20 {
    undefined4 sub_00966e20(byte);
};

int sub_0094f930(void);
// @baa 0x00966e20
undefined4 C_00966e20::sub_00966e20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0094f930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009671f0 { void sub_0095ab00(int); C_009671f0 *sub_009671f0(int); };

// @baa 0x009671f0
C_009671f0 *C_009671f0::sub_009671f0(int a) { sub_0095ab00(a); return this; }

struct C_00967210 { void sub_0095ac50(int); C_00967210 *sub_00967210(int); };

// @baa 0x00967210
C_00967210 *C_00967210::sub_00967210(int a) { sub_0095ac50(a); return this; }

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00967230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00967230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00967230& operator++();
};

TConstSetBitIterator_00967230::TConstSetBitIterator_00967230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00967230
TConstSetBitIterator_00967230& TConstSetBitIterator_00967230::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009672b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009672b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009672b0& operator++();
};

TConstSetBitIterator_009672b0::TConstSetBitIterator_009672b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009672b0
TConstSetBitIterator_009672b0& TConstSetBitIterator_009672b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00967420 { void sub_0095b230(int); C_00967420 *sub_00967420(int); };

// @baa 0x00967420
C_00967420 *C_00967420::sub_00967420(int a) { sub_0095b230(a); return this; }

struct C_00967440 { void sub_0095b360(int); C_00967440 *sub_00967440(int); };

// @baa 0x00967440
C_00967440 *C_00967440::sub_00967440(int a) { sub_0095b360(a); return this; }

struct C_00967460 { void sub_0095b470(int); C_00967460 *sub_00967460(int); };

// @baa 0x00967460
C_00967460 *C_00967460::sub_00967460(int a) { sub_0095b470(a); return this; }

struct C_00967480 { void sub_0095b570(int); C_00967480 *sub_00967480(int); };

// @baa 0x00967480
C_00967480 *C_00967480::sub_00967480(int a) { sub_0095b570(a); return this; }

void sub_009638b0();
// @baa 0x00967620
void sub_00967620(void) { sub_009638b0(); }

void sub_00963c40();
// @baa 0x009676a0
void sub_009676a0(void) { sub_00963c40(); }

int sub_00964460(...);
// @baa 0x00967770
int sub_00967770(int param_1, undefined4 param_2)
{
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    sub_00964460(param_1,param_2);
  }
  return param_1;
}

void sub_009646b0();
// @baa 0x00967810
void sub_00967810(void) { sub_009646b0(); }

extern char g_026b0e1c[];
// @baa 0x00967b20
int sub_00967b20(void) { return (int)g_026b0e1c; }

struct C_00967b30 {
    int sub_00967b30();
};

// @baa 0x00967b30
int C_00967b30::sub_00967b30(void)
{
    int param_1 = (int)this;

  return param_1 + -0x2d0;
}

struct A_00967b50 { virtual void sub_00967b90(); char pad[716]; };

struct B_00967b50 { virtual void sub_00967b90(); };

struct C_00967b50 : A_00967b50, B_00967b50 { virtual void sub_00967b90(); C_00967b50(); };

C_00967b50::C_00967b50() {}

// @baa 0x00967b50
void C_00967b50::sub_00967b90() {}

int sub_0054cc70(...);
int sub_00963690(...);
// @baa 0x00967bd0
undefined4 sub_00967bd0(undefined4 param_1, int param_2)
{
  sub_0054cc70(param_1,param_2 + 8);
  sub_00963690(param_1,param_2 + 0x14);
  return param_1;
}

struct C_00968370 {
    int sub_00968370(int);
    int sub_00964720(int);
};

// @baa 0x00968370
int C_00968370::sub_00968370(int param_2)
{
    int param_1 = (int)this;
  ((C_00968370 *)(this))->sub_00964720(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}

struct C_00968990 {
    undefined4 sub_00968990(byte);
};

int sub_009688d0(void);
// @baa 0x00968990
undefined4 C_00968990::sub_00968990(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009688d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00968c40 {
    undefined4 sub_00968c40(byte);
};

int sub_00968bd0(void);
// @baa 0x00968c40
undefined4 C_00968c40::sub_00968c40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00968bd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00968cd0
int sub_00968cd0(void) { return 12; }

struct C_00968ce0 {
    int sub_00968ce0();
};

// @baa 0x00968ce0
int C_00968ce0::sub_00968ce0(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_00968cf0 { int sub_00968cf0(void); };

// @baa 0x00968cf0
int C_00968cf0::sub_00968cf0(void) { return *(int*)((char*)this + 0); }

struct C_00968d30 { C_00968d30* sub_00968d30(void); };

// @baa 0x00968d30
C_00968d30* C_00968d30::sub_00968d30(void) { return this; }

struct C_00968e60 { char pad[8]; TArray<int> A; int* sub_00968e60(); };

// @baa 0x00968e60
int* C_00968e60::sub_00968e60() { return &A(0); }

struct C_00969210 {
    undefined4 sub_00969210(byte);
};

int sub_009690c0(void);
// @baa 0x00969210
undefined4 C_00969210::sub_00969210(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009690c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00969300
int sub_00969300(void) { return 4; }

struct C_00969310 {
    int sub_00969310();
};

// @baa 0x00969310
int C_00969310::sub_00969310(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_00969320 { int sub_00969320(void); };

// @baa 0x00969320
int C_00969320::sub_00969320(void) { return *(int*)((char*)this + 0); }

struct C_00969470 { char pad[8]; TArray<int> A; int* sub_00969470(); };

// @baa 0x00969470
int* C_00969470::sub_00969470() { return &A(0); }

struct C_00969800 {
    undefined4 sub_00969800(byte);
};

int sub_009696b0(void);
// @baa 0x00969800
undefined4 C_00969800::sub_00969800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009696b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00969b30
int sub_00969b30(void) { return 0; }

struct C_00969b40 { int sub_00969b40(void); };

// @baa 0x00969b40
int C_00969b40::sub_00969b40(void) { return *(int*)((char*)this + 16); }

struct C_00969b50 {
    int sub_00969b50();
};

// @baa 0x00969b50
int C_00969b50::sub_00969b50(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 2;
}

struct C_00969b60 { char pad[4]; TArray<int> A; const int* sub_00969b60() const; };

// @baa 0x00969b60
const int* C_00969b60::sub_00969b60() const { return &A(0); }

struct C_00969b90 {
    void sub_00969b90();
};

// @baa 0x00969b90
void C_00969b90::sub_00969b90(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

struct C_00969bc0 { C_00969bc0* sub_00969bc0(void); };

// @baa 0x00969bc0
C_00969bc0* C_00969bc0::sub_00969bc0(void) { return this; }

struct C_00969bd0 {
    int sub_00969bd0(int, undefined4);
    int sub_009591d0(int, int, int);
};

// @baa 0x00969bd0
int C_00969bd0::sub_00969bd0(int param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00969bd0 *)(this))->sub_009591d0((int)(&param_2), param_2, param_3);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_00969db0 {
    undefined4 sub_00969db0();
};

// @baa 0x00969db0
undefined4 C_00969db0::sub_00969db0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00969df0 {
    WORD w;
    int sub_00969df0();
};

// @baa 0x00969df0
int C_00969df0::sub_00969df0()
{
    w = 0;
    return (int)this;
}

// @baa 0x00969e60
int sub_00969e60(void) { return 32; }

struct C_00969e70 {
    int sub_00969e70();
};

// @baa 0x00969e70
int C_00969e70::sub_00969e70(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_00969ef0 { int sub_00969ef0(void); };

// @baa 0x00969ef0
int C_00969ef0::sub_00969ef0(void) { return *(int*)((char*)this + 0); }

struct C_00969fc0 { int sub_00969fc0(void); };

// @baa 0x00969fc0
int C_00969fc0::sub_00969fc0(void) { return *(int*)((char*)this + 12); }

struct C_0096a070 { char pad[8]; TArray<int> A; int* sub_0096a070(); };

// @baa 0x0096a070
int* C_0096a070::sub_0096a070() { return &A(0); }

// @baa 0x0096a430
int sub_0096a430(void) { return 36; }

struct C_0096a440 {
    int sub_0096a440();
};

// @baa 0x0096a440
int C_0096a440::sub_0096a440(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_0096a4c0 { int sub_0096a4c0(void); };

// @baa 0x0096a4c0
int C_0096a4c0::sub_0096a4c0(void) { return *(int*)((char*)this + 0); }

struct C_0096a500 {
    char pad[12];
    int f1;
    int f2;
    C_0096a500* sub_0096a500();
};

// @baa 0x0096a500
C_0096a500* C_0096a500::sub_0096a500()
{
    f1 = 0;
    f2 = 0;
    return this;
}

struct C_0096a590 { int sub_0096a590(void); };

// @baa 0x0096a590
int C_0096a590::sub_0096a590(void) { return *(int*)((char*)this + 12); }

struct C_0096a650 { char pad[8]; TArray<int> A; int* sub_0096a650(); };

// @baa 0x0096a650
int* C_0096a650::sub_0096a650() { return &A(0); }

struct M_0096acd0 { void sub_00969120(); };

struct C_0096acd0 { char pad[4]; M_0096acd0 m; void sub_0096acd0(); };

// @baa 0x0096acd0
void C_0096acd0::sub_0096acd0() { m.sub_00969120(); }

// @baa 0x0096d7f0
int sub_0096d7f0(void) { return 44; }

struct C_0096d800 {
    int sub_0096d800();
};

// @baa 0x0096d800
int C_0096d800::sub_0096d800(void)
{
    int param_1 = (int)this;

  if (param_1 != 0) {
    return param_1 + 4;
  }
  return 0;
}

struct C_0096d880 { int sub_0096d880(void); };

// @baa 0x0096d880
int C_0096d880::sub_0096d880(void) { return *(int*)((char*)this + 0); }

struct S_0096d960 {
    INT Unk00;
    INT Unk04;
    S_0096d960 *sub_0096d960();
};

// @baa 0x0096d960
S_0096d960 *S_0096d960::sub_0096d960()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0096da10 { char pad[8]; TArray<int> A; int* sub_0096da10(); };

// @baa 0x0096da10
int* C_0096da10::sub_0096da10() { return &A(0); }

struct M_0096dd90 { void sub_00969710(); };

struct C_0096dd90 { char pad[4]; M_0096dd90 m; void sub_0096dd90(); };

// @baa 0x0096dd90
void C_0096dd90::sub_0096dd90() { m.sub_00969710(); }

struct C_0096dda0 {
    undefined4 sub_0096dda0(byte);
};

int sub_0096a2c0(void);
// @baa 0x0096dda0
undefined4 C_0096dda0::sub_0096dda0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096a2c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096ddc0 {
    undefined4 sub_0096ddc0(byte);
};

int sub_0096a880(void);
// @baa 0x0096ddc0
undefined4 C_0096ddc0::sub_0096ddc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096a880();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096dde0 {
    undefined4 * sub_0096dde0(undefined4 *);
    int sub_00965410(int);
};

// @baa 0x0096dde0
undefined4 * C_0096dde0::sub_0096dde0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_0096dde0 *)(((char *)this + 0x10)))->sub_00965410((int)(param_2 + 4));
  return param_1;
}

struct C_0096de00 {
    undefined4 sub_0096de00(byte);
};

int sub_0096b1c0(void);
// @baa 0x0096de00
undefined4 C_0096de00::sub_0096de00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096b1c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096de20 {
    undefined4 sub_0096de20(byte);
};

int sub_0096b7c0(void);
// @baa 0x0096de20
undefined4 C_0096de20::sub_0096de20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096b7c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096de40 {
    undefined4 sub_0096de40(byte);
};

int sub_0096be10(void);
// @baa 0x0096de40
undefined4 C_0096de40::sub_0096de40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096be10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096de60 {
    undefined4 sub_0096de60(byte);
};

int sub_0096c480(void);
// @baa 0x0096de60
undefined4 C_0096de60::sub_0096de60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096c480();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096de80 {
    undefined4 sub_0096de80(byte);
};

int sub_0096ca50(void);
// @baa 0x0096de80
undefined4 C_0096de80::sub_0096de80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096ca50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096dea0 {
    undefined4 sub_0096dea0(byte);
};

int sub_0096d090(void);
// @baa 0x0096dea0
undefined4 C_0096dea0::sub_0096dea0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096d090();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096dec0 {
    undefined4 sub_0096dec0(byte);
};

int sub_0096d670(void);
// @baa 0x0096dec0
undefined4 C_0096dec0::sub_0096dec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096d670();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096dee0 {
    undefined4 sub_0096dee0(byte);
};

int sub_0096dc50(void);
// @baa 0x0096dee0
undefined4 C_0096dee0::sub_0096dee0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096dc50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096df00 {
    int sub_0096df00(int);
    int sub_005a9820(int, int);
};

// @baa 0x0096df00
int C_0096df00::sub_0096df00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0096df00 *)(this))->sub_005a9820((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_0096e2a0 {
    undefined4 sub_0096e2a0(undefined4);
    int sub_0095ab00(int);
};

// @baa 0x0096e2a0
undefined4 C_0096e2a0::sub_0096e2a0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0096e2a0 *)(((char *)this + 4)))->sub_0095ab00(param_2);
  return param_1;
}

struct M_0096e2c0 { void sub_0096a320(); };

struct C_0096e2c0 { char pad[4]; M_0096e2c0 m; void sub_0096e2c0(); };

// @baa 0x0096e2c0
void C_0096e2c0::sub_0096e2c0() { m.sub_0096a320(); }

struct C_0096e2d0 {
    undefined4 sub_0096e2d0(undefined4);
    int sub_0095ac50(int);
};

// @baa 0x0096e2d0
undefined4 C_0096e2d0::sub_0096e2d0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0096e2d0 *)(((char *)this + 4)))->sub_0095ac50(param_2);
  return param_1;
}

struct M_0096e2f0 { void sub_0096a8e0(); };

struct C_0096e2f0 { char pad[4]; M_0096e2f0 m; void sub_0096e2f0(); };

// @baa 0x0096e2f0
void C_0096e2f0::sub_0096e2f0() { m.sub_0096a8e0(); }

struct M_0096e300 { void sub_0096b220(); };

struct C_0096e300 { char pad[4]; M_0096e300 m; void sub_0096e300(); };

// @baa 0x0096e300
void C_0096e300::sub_0096e300() { m.sub_0096b220(); }

struct M_0096e310 { void sub_0096b820(); };

struct C_0096e310 { char pad[4]; M_0096e310 m; void sub_0096e310(); };

// @baa 0x0096e310
void C_0096e310::sub_0096e310() { m.sub_0096b820(); }

struct M_0096e320 { void sub_0096be70(); };

struct C_0096e320 { char pad[4]; M_0096e320 m; void sub_0096e320(); };

// @baa 0x0096e320
void C_0096e320::sub_0096e320() { m.sub_0096be70(); }

struct M_0096e330 { void sub_0096c4e0(); };

struct C_0096e330 { char pad[4]; M_0096e330 m; void sub_0096e330(); };

// @baa 0x0096e330
void C_0096e330::sub_0096e330() { m.sub_0096c4e0(); }

struct M_0096e340 { void sub_0096cab0(); };

struct C_0096e340 { char pad[4]; M_0096e340 m; void sub_0096e340(); };

// @baa 0x0096e340
void C_0096e340::sub_0096e340() { m.sub_0096cab0(); }

struct M_0096e350 { void sub_0096d0f0(); };

struct C_0096e350 { char pad[4]; M_0096e350 m; void sub_0096e350(); };

// @baa 0x0096e350
void C_0096e350::sub_0096e350() { m.sub_0096d0f0(); }

struct M_0096e360 { void sub_0096d6d0(); };

struct C_0096e360 { char pad[4]; M_0096e360 m; void sub_0096e360(); };

// @baa 0x0096e360
void C_0096e360::sub_0096e360() { m.sub_0096d6d0(); }

struct M_0096e370 { void sub_0096dcb0(); };

struct C_0096e370 { char pad[4]; M_0096e370 m; void sub_0096e370(); };

// @baa 0x0096e370
void C_0096e370::sub_0096e370() { m.sub_0096dcb0(); }

struct C_0096e380 {
    undefined4 sub_0096e380(byte);
};

int sub_00966e40(void);
// @baa 0x0096e380
undefined4 C_0096e380::sub_0096e380(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00966e40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0096e3a0 {
    undefined4 sub_0096e3a0(byte);
};

int sub_00966ea0(void);
// @baa 0x0096e3a0
undefined4 C_0096e3a0::sub_0096e3a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00966ea0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_0096e4b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0096e4b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0096e4b0& operator++();
};

TConstSetBitIterator_0096e4b0::TConstSetBitIterator_0096e4b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0096e4b0
TConstSetBitIterator_0096e4b0& TConstSetBitIterator_0096e4b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0096e500 { void sub_009673c0(int); C_0096e500 *sub_0096e500(int); };

// @baa 0x0096e500
C_0096e500 *C_0096e500::sub_0096e500(int a) { sub_009673c0(a); return this; }

struct C_0096e5b0 {
    undefined4 sub_0096e5b0(undefined4);
    int sub_0095b230(int);
};

// @baa 0x0096e5b0
undefined4 C_0096e5b0::sub_0096e5b0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0096e5b0 *)(((char *)this + 4)))->sub_0095b230(param_2);
  return param_1;
}

struct C_0096e5d0 {
    undefined4 sub_0096e5d0(undefined4);
    int sub_0095b360(int);
};

// @baa 0x0096e5d0
undefined4 C_0096e5d0::sub_0096e5d0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0096e5d0 *)(((char *)this + 4)))->sub_0095b360(param_2);
  return param_1;
}

struct C_0096e5f0 {
    undefined4 sub_0096e5f0(undefined4);
    int sub_0095b470(int);
};

// @baa 0x0096e5f0
undefined4 C_0096e5f0::sub_0096e5f0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0096e5f0 *)(((char *)this + 4)))->sub_0095b470(param_2);
  return param_1;
}

struct C_0096e610 {
    undefined4 sub_0096e610(undefined4);
    int sub_0095b570(int);
};

// @baa 0x0096e610
undefined4 C_0096e610::sub_0096e610(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0096e610 *)(((char *)this + 4)))->sub_0095b570(param_2);
  return param_1;
}

int sub_007c4f20(void);
// @baa 0x0096e670
undefined4 UTexture2DComposite::sub_0096e670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007c4f20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00967b40
{
    C_00967b40* sub_00967b40();
};

// @baa 0x00967b40
C_00967b40* C_00967b40::sub_00967b40()
{
    return (C_00967b40*)((char*)this - 0x2d0) ? this : 0;
}

struct C_00969e20
{
    WORD First;
    WORD Second;

    C_00969e20* sub_00969e20();
};

// @baa 0x00969e20
C_00969e20* C_00969e20::sub_00969e20()
{
    First = 0;
    Second = 0;
    return this;
}

struct S009652b0
{
	int A;
	int B;
	int C;
	int D;
	int E;
	int F;
	int G;

	S009652b0* sub_009652b0();
};

// @baa 0x009652b0
S009652b0* S009652b0::sub_009652b0()
{
	int Z = 0;
	A = Z;
	B = Z;
	C = Z;
	D = Z;
	E = Z;
	F = Z;
	G = Z;
	return this;
}

S009652b0* sub_009652b0_probe()
{
	S009652b0 S;
	return S.sub_009652b0();
}

/* UE3's checkf (UnBuild.h): check with a formatted message */
#define checkf(expr, ...) { if (!(expr)) appFailAssert(#expr, __FILE__, __LINE__, __VA_ARGS__); }
/* the package versions this build writes (UnObjVer.h); the kit doesn't declare them */
extern INT GPackageFileVersion;
extern INT GPackageFileLicenseeVersion;
inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

/* FkDOPNode (UnkDOP.h): a node of a kDOP tree (0x20 bytes). Not in the kit. */
struct FkDOPNode
{
    FLOAT BoundsMin[3];  /* FkDOP BoundingVolume */
    FLOAT BoundsMax[3];
    UBOOL bIsLeaf;
    WORD Children[2];    /* left and right child, or a leaf's triangle count and first triangle */
};

FArchive& operator<<(FArchive& Ar, TArray<FkDOPNode>& A);
 /* 0x00959800 */
/* TArray<FkDOPNode> with the out-of-line members BulkSerialize calls: Empty (0x00958a40) and Add (0x009487c0) */
struct FkDOPNodeArray : public TArray<FkDOPNode>
{
    typedef FkDOPNode ElementType;
    void Empty(INT Slack);
    INT Add(INT Count);
    void BulkSerialize(FArchive& Ar);
};

// @baa 0x00965f90
/* TArray::BulkSerialize (Array.h): a raw memory read of the whole array when the package is current,
 * element by element otherwise (a skeletal mesh bone's kDOP nodes) */
void FkDOPNodeArray::BulkSerialize(FArchive& Ar)
{
    INT SerializedElementSize = sizeof(ElementType);
    Ar << SerializedElementSize;
    if (Ar.IsSaving() || Ar.Ver() < GPackageFileVersion || Ar.LicenseeVer() < GPackageFileLicenseeVersion)
    {
        Ar << *this;
    }
    else
    {
        Ar.CountBytes(ArrayNum * sizeof(ElementType), ArrayMax * sizeof(ElementType));
        if (Ar.IsLoading())
        {
#line 758 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
            checkf(SerializedElementSize==0 || SerializedElementSize==sizeof(ElementType), TEXT("Expected %i, Got: %i"), sizeof(ElementType), SerializedElementSize);
            INT NewArrayNum;
            Ar << NewArrayNum;
            Empty(NewArrayNum);
            Add(NewArrayNum);
            Ar.Serialize(GetData(), NewArrayNum * sizeof(ElementType));
        }
    }
}

#line 2099 "candidate.cpp"
