// UnEdObject.cpp (part 1 of 2): 22 functions
// Placed here by: neighbours 13, callers 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_005ba230();
};

int sub_005b0870(void);
// @baa 0x005ba230
int C::sub_005ba230(void)
{
    int param_1 = (int)this;

  sub_005b0870();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

#pragma pack(push, 1)
struct CRect { char _pad0[1]; };

#pragma pack(pop)
struct C_00631070 {
    void sub_00631070(int, int, int, int);
};

int sub_00630ea0(...);
// @baa 0x00631070
void C_00631070::sub_00631070(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;
  sub_00630ea0(this_,param_1,param_2,param_3,param_4);
  return;
}

// @baa 0x00f4d5f0
void __fastcall sub_00f4d5f0(undefined4 param_1, undefined4 * param_2)
{
  short sVar1;
  
  while( true ) {
    sVar1 = *(short *)*param_2;
    if ((sVar1 != 0x20) && (sVar1 != 9)) break;
    *param_2 = (undefined4)((short *)*param_2 + 1);
  }
  return;
}

int sub_005d88c0(...);
int sub_00804730(void);
int sub_00830fb0(...);
extern undefined4 g_026b5488;
// @baa 0x00f51960
void sub_00f51960(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b5488 == 0) {
    g_026b5488 = sub_00830fb0(L"Engine");
    sub_00804730();
  }
  sub_005d88c0(g_026b5488,param_1,param_2,param_3);
  return;
}

int sub_00946350(void);
int sub_0097fae0(...);
extern undefined4 g_026b5f14;
// @baa 0x00f519a0
void sub_00f519a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b5f14 == 0) {
    g_026b5f14 = sub_0097fae0(L"Engine");
    sub_00946350();
  }
  sub_005d88c0(g_026b5f14,param_1,param_2,param_3);
  return;
}

struct C_00f519e0 {
    void sub_00f519e0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00f519e0
void C_00f519e0::sub_00f519e0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00f51a10 {
    void sub_00f51a10(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00f51a10
void C_00f51a10::sub_00f51a10(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00f53610{
int sub_00f53610(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00f53610
int C_00f53610::sub_00f53610(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar3;
int iVar2;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_00f58f30 { int sub_00f58f30(void); };

// @baa 0x00f58f30
int C_00f58f30::sub_00f58f30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00f59020 { void* Data; int Num; int Max; void sub_00f59020(); };

// @baa 0x00f59020
void C_00f59020::sub_00f59020() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f59080 {
    void sub_00f59080(int);
};

// @baa 0x00f59080
void C_00f59080::sub_00f59080(int param_2)
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

struct C_00f59170 { void* Data; int Num; int Max; void sub_00f59170(); };

// @baa 0x00f59170
void C_00f59170::sub_00f59170() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f591d0 { void* Data; int Num; int Max; void sub_00f591d0(); };

// @baa 0x00f591d0
void C_00f591d0::sub_00f591d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f59230 {
    void sub_00f59230(int);
};

// @baa 0x00f59230
void C_00f59230::sub_00f59230(int param_2)
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

struct C_00f59270 { void* Data; int Num; int Max; void sub_00f59270(); };

// @baa 0x00f59270
void C_00f59270::sub_00f59270() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f592d0 {
    void sub_00f592d0(int);
};

// @baa 0x00f592d0
void C_00f592d0::sub_00f592d0(int param_2)
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

struct C_00f59310 {
    void sub_00f59310(int);
};

// @baa 0x00f59310
void C_00f59310::sub_00f59310(int param_2)
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

struct C_00f59350 { void* Data; int Num; int Max; void sub_00f59350(); };

// @baa 0x00f59350
void C_00f59350::sub_00f59350() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f593b0 { void* Data; int Num; int Max; void sub_00f593b0(); };

// @baa 0x00f593b0
void C_00f593b0::sub_00f593b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f594c0 { void* Data; int Num; int Max; void sub_00f594c0(); };

// @baa 0x00f594c0
void C_00f594c0::sub_00f594c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f59520 { void* Data; int Num; int Max; void sub_00f59520(); };

// @baa 0x00f59520
void C_00f59520::sub_00f59520() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f59660 { void* Data; int Num; int Max; void sub_00f59660(); };

// @baa 0x00f59660
void C_00f59660::sub_00f59660() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
