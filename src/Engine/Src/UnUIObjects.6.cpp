// UnUIObjects.cpp (part 6 of 17): 8 functions
// Placed here by: neighbours 6, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C{
void sub_00dada30(int*);
};

int sub_0053df70(...);
void*sub_01a375f0(void*,void*,size_t);
// @baa 0x00dada30
void C::sub_00dada30(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

if((param_1!=param_2)&&(0<param_2[1])){
iVar1=param_1[1]+param_2[1];
if(iVar1>param_1[2]){
param_1[2]=iVar1;
if((*param_1!=0)||(iVar1!=0)){
iVar1=sub_0053df70(*param_1,4*iVar1,8);
*param_1=iVar1;
}
}
sub_01a375f0((void*)(*param_1+param_1[1]*4),(void*)*param_2,param_2[1]*4);
param_1[1]=param_1[1]+param_2[1];
}
return;
}

struct C_00dadc40{
int sub_00dadc40(undefined4*);
};

int sub_0053d240(...);
// @baa 0x00dadc40
int C_00dadc40::sub_00dadc40(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar3;
int iVar2;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*0xc,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+0xc*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

struct C_00dae640 {
    void sub_00dae640(int);
};

// @baa 0x00dae640
void C_00dae640::sub_00dae640(int param_2)
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

struct C_00db15e0 {
    void sub_00db15e0(int);
};

// @baa 0x00db15e0
void C_00db15e0::sub_00db15e0(int param_2)
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

struct C_00db1620{
int*sub_00db1620(int*);
};

// @baa 0x00db1620
int*C_00db1620::sub_00db1620(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

if((param_1!=param_2)&&(0<param_2[1])){
iVar1=param_1[1]+param_2[1];
if(iVar1>param_1[2]){
param_1[2]=iVar1;
if((*param_1!=0)||(iVar1!=0)){
iVar1=sub_0053df70(*param_1,iVar1*4,8);
*param_1=iVar1;
}
}
sub_01a375f0((void*)(*param_1+4*param_1[1]),(void*)*param_2,param_2[1]*4);
param_1[1]=param_1[1]+param_2[1];
}
return param_1;
}

struct C_00db1f50 {
    void sub_00db1f50(int);
};

// @baa 0x00db1f50
void C_00db1f50::sub_00db1f50(int param_2)
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

struct C_00db1f90 {
    void sub_00db1f90(int);
};

// @baa 0x00db1f90
void C_00db1f90::sub_00db1f90(int param_2)
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

extern int sub_006311e0(...);
extern int sub_0053df70(...);
extern int sub_0053dfa0(...);
extern undefined4 g_020c5f64;
extern undefined4 g_020c6150;
extern undefined2 g_01e3f3dc;
struct W;
struct C_00db3360;
struct W { int sub_00daa550(C_00db3360*, BYTE, BYTE); };

struct Arr { W** Data; INT Num; INT Max; void sub_00dad440(W**); };

struct L2 { W** Data; INT Num; INT Max; ~L2() { if (Data) sub_0053dfa0(Data); } };

struct P { void sub_00db3120(L2*, int, int); };

#define V8(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct C_00db3360 {
    V8(a) V8(b) V8(c) V8(d) V8(e) V8(f) V8(g) V8(h)
    virtual void x0();
    virtual P* getP();
    int sub_00db3360(Arr* Out, int a2, BYTE T, BYTE S);
};

// @baa 0x00db3360
int C_00db3360::sub_00db3360(Arr* Out, int a2, BYTE T, BYTE S)
{
    if (T > 4) sub_006311e0("TargetFace<=UIFACE_MAX", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 0x85f, &g_020c5f64);
    if (S > 4) sub_006311e0("SourceFace<=UIFACE_MAX", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 0x860, &g_020c6150);
    int n = 0;
    P* p = getP();
    if (p) {
        L2 L = {0,0,0};
        p->sub_00db3120(&L, 1, 0);
        if (Out) { Out->Num = 0; if (Out->Max) { Out->Max = 0; if (Out->Data) Out->Data = (W**)sub_0053df70(Out->Data, 0, 8); } }
        for (int i = 0; i < L.Num; i++) {
            if (i < 0 || (i >= L.Num && (i != 0 || L.Num != 0)))
                sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))", "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h", 0x230, &g_01e3f3dc);
            W* w = L.Data[i];
            if (w && (C_00db3360*)w != this && w->sub_00daa550(this, S, T)) {
                n++;
                if (Out) Out->sub_00dad440(&w);
            }
        }
        L.Max = 0; L.Num = 0;
    }
    return n;
}
