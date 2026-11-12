// Engine_0840000.cpp (part 1 of 2): 45 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_008492d0(void); };

// @baa 0x008492d0
void C::sub_008492d0(void) { *(int*)((char*)this + 4) = 0; }

struct C_008493c0 {
    void sub_008493c0(int);
};

int sub_0053df70(...);
// @baa 0x008493c0
void C_008493c0::sub_008493c0(int param_2)
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

struct T_00849400;
// @baa 0x00849400
template INT TArray<T_00849400*>::RemoveItem(T_00849400* const&);

struct C_00849560 {
    void sub_00849560(int);
};

// @baa 0x00849560
void C_00849560::sub_00849560(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_008495a0 { void* Data; int Num; int Max; void sub_008495a0(); };

// @baa 0x008495a0
void C_008495a0::sub_008495a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00849600 {
    void sub_00849600(int);
};

// @baa 0x00849600
void C_00849600::sub_00849600(int param_2)
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

struct C_00849640 { void* Data; int Num; int Max; void sub_00849640(); };

// @baa 0x00849640
void C_00849640::sub_00849640() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008496a0 {
    void sub_008496a0(int);
};

// @baa 0x008496a0
void C_008496a0::sub_008496a0(int param_2)
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

struct C_008496e0 { void* Data; int Num; int Max; void sub_008496e0(); };

// @baa 0x008496e0
void C_008496e0::sub_008496e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00849740 {
    void sub_00849740(int);
};

// @baa 0x00849740
void C_00849740::sub_00849740(int param_2)
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

struct C_00849780 { void* Data; int Num; int Max; void sub_00849780(); };

// @baa 0x00849780
void C_00849780::sub_00849780() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008497e0 {
    void sub_008497e0(int);
};

// @baa 0x008497e0
void C_008497e0::sub_008497e0(int param_2)
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

struct C_00849820 { void* Data; int Num; int Max; void sub_00849820(); };

// @baa 0x00849820
void C_00849820::sub_00849820() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00849960 { void* Data; int Num; int Max; void sub_00849960(); };

// @baa 0x00849960
void C_00849960::sub_00849960() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008499c0 {
    void sub_008499c0(int);
};

// @baa 0x008499c0
void C_008499c0::sub_008499c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00849a00 { void* Data; int Num; int Max; void sub_00849a00(); };

// @baa 0x00849a00
void C_00849a00::sub_00849a00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00849a60 { void* Data; int Num; int Max; void sub_00849a60(); };

// @baa 0x00849a60
void C_00849a60::sub_00849a60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00849ac0 {
    void sub_00849ac0(int);
};

// @baa 0x00849ac0
void C_00849ac0::sub_00849ac0(int param_2)
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

struct C_00849b00 { void* Data; int Num; int Max; void sub_00849b00(); };

// @baa 0x00849b00
void C_00849b00::sub_00849b00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00849c10 { void* Data; int Num; int Max; void sub_00849c10(); };

// @baa 0x00849c10
void C_00849c10::sub_00849c10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00849c70 { void* Data; int Num; int Max; void sub_00849c70(); };

// @baa 0x00849c70
void C_00849c70::sub_00849c70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00849cd0 { void* Data; int Num; int Max; void sub_00849cd0(); };

// @baa 0x00849cd0
void C_00849cd0::sub_00849cd0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_0053d240(int, int, int);
int sub_0053df70(int, int, int);
struct C_00849d30 {
	int sub_0083d110(undefined4 *);
	int sub_00849d30(undefined4 *);
};

int C_00849d30::sub_0083d110(undefined4 *param_2)
{
	int *param_1 = (int *)this;
	int *puVar1;
	int iVar3;
	int iVar2;
	iVar2 = param_1[1];
	iVar3 = iVar2 + 1;
	param_1[1] = iVar3;
	if (iVar3 > param_1[2]) {
		iVar3 = sub_0053d240(iVar3, param_1[2], 8);
		param_1[2] = iVar3;
		if (*param_1 != 0 || iVar3) {
			iVar3 = sub_0053df70(*param_1, iVar3 * 8, 8);
			*param_1 = iVar3;
		}
	}
	puVar1 = (int *)(*param_1 + iVar2 * 8);
	if (puVar1 != 0) {
		*puVar1 = *param_2;
		puVar1[1] = param_2[1];
	}
	return iVar2;
}

// @baa 0x00849d30
int C_00849d30::sub_00849d30(undefined4 *param_2)
{
	return this->sub_0083d110(param_2);
}

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00849d40
undefined4 * UObject::sub_00849d40(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x00849f50
undefined4 UObject::sub_00849f50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00849a60();
// @baa 0x00849f70
void sub_00849f70(void) { sub_00849a60(); }

struct C_00849ff0 {
    int sub_00849ff0(int);
};

// @baa 0x00849ff0
int C_00849ff0::sub_00849ff0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0084a070 {
    int sub_0084a070(int);
};

// @baa 0x0084a070
int C_0084a070::sub_0084a070(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0084a080 {
    int sub_0084a080();
};

// @baa 0x0084a080
int C_0084a080::sub_0084a080(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0084a0a0 {
    int sub_0084a0a0();
};

// @baa 0x0084a0a0
int C_0084a0a0::sub_0084a0a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0084a0b0 {
    int sub_0084a0b0();
};

// @baa 0x0084a0b0
int C_0084a0b0::sub_0084a0b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0084a0d0 {
    int sub_0084a0d0();
};

// @baa 0x0084a0d0
int C_0084a0d0::sub_0084a0d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0084a0e0 {
    int sub_0084a0e0(int);
};

// @baa 0x0084a0e0
int C_0084a0e0::sub_0084a0e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0084a0f0 {
    int sub_0084a0f0(int);
};

// @baa 0x0084a0f0
int C_0084a0f0::sub_0084a0f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0084a100 {
    int sub_0084a100();
};

// @baa 0x0084a100
int C_0084a100::sub_0084a100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0084a110 {
    int sub_0084a110();
};

// @baa 0x0084a110
int C_0084a110::sub_0084a110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0084a120 {
    int sub_0084a120();
};

// @baa 0x0084a120
int C_0084a120::sub_0084a120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0084a130 {
    int sub_0084a130();
};

// @baa 0x0084a130
int C_0084a130::sub_0084a130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

void sub_008495a0();
// @baa 0x0084ab00
void sub_0084ab00(void) { sub_008495a0(); }

void sub_00849640();
// @baa 0x0084ab10
void sub_0084ab10(void) { sub_00849640(); }

void sub_008496e0();
// @baa 0x0084ab20
void sub_0084ab20(void) { sub_008496e0(); }

void sub_00849780();
// @baa 0x0084ab30
void sub_0084ab30(void) { sub_00849780(); }

void sub_00849820();
// @baa 0x0084ad10
void sub_0084ad10(void) { sub_00849820(); }

struct C_0084beb0 { int a, b, c; C_0084beb0(); };

// @baa 0x0084beb0
C_0084beb0::C_0084beb0() : a(0), b(0), c(0) {}

extern INT g_025d7944;
struct Sub
{
    void sub_00845ea0();
};

struct C_008491a0
{
    INT pad_00;
    Sub* Object;

    void sub_008491a0();
};

// @baa 0x008491a0
void C_008491a0::sub_008491a0()
{
    g_025d7944++;
    Object->sub_00845ea0();
}
