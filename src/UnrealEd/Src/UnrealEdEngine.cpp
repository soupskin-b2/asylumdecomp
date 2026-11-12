// UnrealEdEngine.cpp: 47 functions
// Placed here by: callers 2, neighbours 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x012918b0
IMPLEMENT_CLASS_AT(UUnrealEdKeyBindings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnrealEdEngine.cpp", 1049);

void sub_012901d0();
// @baa 0x012918d0
void sub_012918d0(void) { sub_012901d0(); }

struct C { C* sub_012918e0(void); };

// @baa 0x012918e0
C* C::sub_012918e0(void) { return this; }

// @baa 0x012918f0
// @baa 0x01299240
IMPLEMENT_CLASS_AT(UUnrealEdOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnrealEdEngine.cpp", 1048);

// @baa 0x0129aff0

typedef uint size_t;

struct C_0127ced0{
void sub_0127ced0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
uint sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0127ced0
void C_0127ced0::sub_0127ced0(int param_2,int param_3)
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
if(0>param_2){
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
iVar2=sub_0053d240(iVar2,param_1[2],8);
param_1[2]=iVar2;
if((*param_1)||(iVar2)){
iVar2=sub_0053df70(*param_1,iVar2*8,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*8),(void*)(*param_1+param_2*8),
(iVar1-param_2)*8);
return;
}

// @baa 0x0127cd10
bool UUnrealEdKeyBindings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0127cd50 { int a, b, c; C_0127cd50(); };

// @baa 0x0127cd50
C_0127cd50::C_0127cd50() : a(0), b(0), c(0) {}

struct C_0127cd60 { int a, b, c; C_0127cd60(); };

// @baa 0x0127cd60
C_0127cd60::C_0127cd60() : a(0), b(0), c(0) {}

struct C_0127cd70 { int a, b, c; C_0127cd70(); };

// @baa 0x0127cd70
C_0127cd70::C_0127cd70() : a(0), b(0), c(0) {}

struct C_0127cd80 {
    void sub_0127cd80();
};

int sub_005fae20(void);
// @baa 0x0127cd80
void C_0127cd80::sub_0127cd80(void)
{
    int * param_1 = (int *)this;

  if (0 < *param_1) {
    sub_005fae20();
    return;
  }
  return;
}

struct C_0127cd90 { int a, b, c; C_0127cd90(); };

// @baa 0x0127cd90
C_0127cd90::C_0127cd90() : a(0), b(0), c(0) {}

struct C_0127cda0 { int a, b, c; C_0127cda0(); };

// @baa 0x0127cda0
C_0127cda0::C_0127cda0() : a(0), b(0), c(0) {}

struct C_0127cdb0 { int a, b, c; C_0127cdb0(); };

// @baa 0x0127cdb0
C_0127cdb0::C_0127cdb0() : a(0), b(0), c(0) {}

struct C_0127cff0 { int sub_0127cff0(void); };

// @baa 0x0127cff0
int C_0127cff0::sub_0127cff0(void) { return *(int*)((char*)this + 0); }

struct C_0127d000 { int sub_0127d000(void); };

// @baa 0x0127d000
int C_0127d000::sub_0127d000(void) { return *(int*)((char*)this + 0); }

struct C_0127d080 {
    int sub_0127d080(int);
};

// @baa 0x0127d080
int C_0127d080::sub_0127d080(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127d100 { int sub_0127d100(void); };

// @baa 0x0127d100
int C_0127d100::sub_0127d100(void) { return *(int*)((char*)this + 0); }

struct C_0127d110 { int sub_0127d110(void); };

// @baa 0x0127d110
int C_0127d110::sub_0127d110(void) { return *(int*)((char*)this + 0); }

struct C_0127d190 { int sub_0127d190(void); };

// @baa 0x0127d190
int C_0127d190::sub_0127d190(void) { return *(int*)((char*)this + 0); }

struct C_0127d210 {
    int sub_0127d210();
};

// @baa 0x0127d210
int C_0127d210::sub_0127d210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0127d220 {
    int sub_0127d220();
};

// @baa 0x0127d220
int C_0127d220::sub_0127d220(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0127d230 {
    int sub_0127d230();
};

// @baa 0x0127d230
int C_0127d230::sub_0127d230(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0127d240 { int sub_0127d240(void); };

// @baa 0x0127d240
int C_0127d240::sub_0127d240(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0127d280 { int sub_0127d280(void); };

// @baa 0x0127d280
int C_0127d280::sub_0127d280(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0127d2b0 { int sub_0127d2b0(void); };

// @baa 0x0127d2b0
int C_0127d2b0::sub_0127d2b0(void) { return *(int*)((char*)this + 0); }

struct S_0127d2c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0127d2c0(INT Index);
};

// @baa 0x0127d2c0
DWORD* S_0127d2c0::sub_0127d2c0(INT Index)
{
    return &Items(Index);
}

struct C_0127d310 { int sub_0127d310(void); };

// @baa 0x0127d310
int C_0127d310::sub_0127d310(void) { return *(int*)((char*)this + 0); }

struct C_0127d320 { int sub_0127d320(void); };

// @baa 0x0127d320
int C_0127d320::sub_0127d320(void) { return *(int*)((char*)this + 0); }

struct C_0127d330 { int sub_0127d330(void); };

// @baa 0x0127d330
int C_0127d330::sub_0127d330(void) { return *(int*)((char*)this + 0); }

struct C_0127d3b0 { int sub_0127d3b0(void); };

// @baa 0x0127d3b0
int C_0127d3b0::sub_0127d3b0(void) { return *(int*)((char*)this + 0); }

struct C_0127d3c0 { int sub_0127d3c0(void); };

// @baa 0x0127d3c0
int C_0127d3c0::sub_0127d3c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0127d3f0
int sub_0127d3f0(int a0) { return a0; }

struct C_0127d400 {
    int sub_0127d400(int);
};

// @baa 0x0127d400
int C_0127d400::sub_0127d400(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0127d410 {
    int sub_0127d410(int);
};

// @baa 0x0127d410
int C_0127d410::sub_0127d410(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127d420 { int sub_0127d420(void); };

// @baa 0x0127d420
int C_0127d420::sub_0127d420(void) { return *(int*)((char*)this + 20); }

struct C_0127d430 { int sub_0127d430(void); };

// @baa 0x0127d430
int C_0127d430::sub_0127d430(void) { return *(int*)((char*)this + 0); }

struct C_0127d440 {
    int sub_0127d440(int);
};

// @baa 0x0127d440
int C_0127d440::sub_0127d440(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127d450 {
    int sub_0127d450(int);
};

// @baa 0x0127d450
int C_0127d450::sub_0127d450(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127d460 {
    int sub_0127d460(int);
};

// @baa 0x0127d460
int C_0127d460::sub_0127d460(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0127d470 {
    int sub_0127d470(int);
};

// @baa 0x0127d470
int C_0127d470::sub_0127d470(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127d480 { int sub_0127d480(void); };

// @baa 0x0127d480
int C_0127d480::sub_0127d480(void) { return *(int*)((char*)this + 20); }

struct C_0127d490 { int sub_0127d490(void); };

// @baa 0x0127d490
int C_0127d490::sub_0127d490(void) { return *(int*)((char*)this + 20); }

struct C_0127d4a0 { int sub_0127d4a0(void); };

// @baa 0x0127d4a0
int C_0127d4a0::sub_0127d4a0(void) { return *(int*)((char*)this + 20); }

struct C_0127d4b0 { int sub_0127d4b0(void); };

// @baa 0x0127d4b0
int C_0127d4b0::sub_0127d4b0(void) { return *(int*)((char*)this + 20); }

int sub_0059c990(void);
int sub_005adee0(...);
int sub_005eae70(...);
extern undefined4 g_0268d084;
// @baa 0x0127d4c0
void sub_0127d4c0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_0268d084 == 0) {
    g_0268d084 = sub_005adee0(L"Core");
    sub_0059c990();
  }
  sub_005eae70(g_0268d084,param_1,param_2,param_3,param_4,param_5,1);
  return;
}
