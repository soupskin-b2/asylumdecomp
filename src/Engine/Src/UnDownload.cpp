// UnDownload.cpp (part 1 of 3): 24 functions
// Placed here by: neighbours 18, callers 4, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_005f2bf0(int);
};

struct A {
    char pad[0x28];
    C *m_pC;
    int sub_00df4400();
};

// @baa 0x00df4400
int A::sub_00df4400()
{
    return m_pC->sub_005f2bf0(0xa64);
}

struct C_00df9b60 {
    void sub_00df9b60();
    int sub_00544ab0(int);
    int sub_005f2bf0(int);
};

extern undefined4 g_020df4f8;
// @baa 0x00df9b60
void C_00df9b60::sub_00df9b60(void)
{
    int param_1 = (int)this;
  ((C_00df9b60 *)(((char *)this + 0x3c)))->sub_00544ab0((int)(&g_020df4f8));
  *(undefined4 *)(param_1 + 0x48) = 0;
  ((C_00df9b60 *)((*(char **)((char *)this + 0x28))))->sub_005f2bf0(0x30);
  return;
}

extern char g_020e3010[];
struct C_00df9bb0 { C_00df9bb0* sub_00df9bb0(void); };

// @baa 0x00df9bb0
C_00df9bb0* C_00df9bb0::sub_00df9bb0(void) { *(int*)((char*)this + 0) = (int)g_020e3010; return this; }

extern char g_020e2fdc[];
struct C_00df9cb0 { void sub_00df9cb0(void); };

// @baa 0x00df9cb0
void C_00df9cb0::sub_00df9cb0(void) { *(int*)((char*)this + 0) = (int)g_020e2fdc; }

extern char g_020e3038[];
struct C_00df9e10 { C_00df9e10* sub_00df9e10(void); };

// @baa 0x00df9e10
C_00df9e10* C_00df9e10::sub_00df9e10(void) { *(int*)((char*)this + 0) = (int)g_020e3038; return this; }

struct C_00df9e20 { void sub_00df9e20(void); };

// @baa 0x00df9e20
void C_00df9e20::sub_00df9e20(void) { *(int*)((char*)this + 0) = (int)g_020e2fdc; }

extern char g_020e3044[];
struct C_00df9e90 { C_00df9e90* sub_00df9e90(void); };

// @baa 0x00df9e90
C_00df9e90* C_00df9e90::sub_00df9e90(void) { *(int*)((char*)this + 0) = (int)g_020e3044; return this; }

struct C_00dfa080 { void sub_00dfa080(void); };

// @baa 0x00dfa080
void C_00dfa080::sub_00dfa080(void) { *(int*)((char*)this + 0) = (int)g_020e2fdc; }

extern char g_020e3058[];
struct C_00dfa090 { C_00dfa090* sub_00dfa090(void); };

// @baa 0x00dfa090
C_00dfa090* C_00dfa090::sub_00dfa090(void) { *(int*)((char*)this + 0) = (int)g_020e3058; return this; }

struct C_00dfa0a0 { void sub_00dfa0a0(void); };

// @baa 0x00dfa0a0
void C_00dfa0a0::sub_00dfa0a0(void) { *(int*)((char*)this + 0) = (int)g_020e2fdc; }

struct C_00dfa0b0 { int a, b, c; C_00dfa0b0(); };

// @baa 0x00dfa0b0
C_00dfa0b0::C_00dfa0b0() : a(0), b(0), c(0) {}

struct C_00dfa130 { int sub_00dfa130(void); };

// @baa 0x00dfa130
int C_00dfa130::sub_00dfa130(void) { return *(int*)((char*)this + 4); }

typedef uint size_t;

struct C_00dfa1b0{
void sub_00dfa1b0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00dfa1b0
void C_00dfa1b0::sub_00dfa1b0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(0!=iVar2)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_00dfa2d0 { int sub_00dfa2d0(void); };

// @baa 0x00dfa2d0
int C_00dfa2d0::sub_00dfa2d0(void) { return *(int*)((char*)this + 0); }

struct C_00dfa2e0 { int sub_00dfa2e0(void); };

// @baa 0x00dfa2e0
int C_00dfa2e0::sub_00dfa2e0(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00dfa310(INT Index) const;
};

// @baa 0x00dfa310
const DWORD* S::sub_00dfa310(INT Index) const
{
    return &Items(Index);
}

struct C_00dfa360 {
    undefined4 * sub_00dfa360(byte);
};

int sub_0053dfa0(...);
// @baa 0x00dfa360
undefined4 * C_00dfa360::sub_00dfa360(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e2fdc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00dfa380 {
    undefined4 * sub_00dfa380(byte);
};

// @baa 0x00dfa380
undefined4 * C_00dfa380::sub_00dfa380(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e2fdc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00dfa3a0 {
    undefined4 * sub_00dfa3a0(byte);
};

// @baa 0x00dfa3a0
undefined4 * C_00dfa3a0::sub_00dfa3a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e2fdc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00dfa3c0 {
    undefined4 * sub_00dfa3c0(byte);
};

// @baa 0x00dfa3c0
undefined4 * C_00dfa3c0::sub_00dfa3c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e2fdc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e01c80
IMPLEMENT_CLASS_AT(UDownload, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDownload.cpp", 315);

// @baa 0x00e01cb0
IMPLEMENT_CLASS_AT(UChannelDownload, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDownload.cpp", 401);

// @baa 0x00e04840
// @baa 0x00e04900
