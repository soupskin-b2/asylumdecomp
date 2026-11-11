// BmEditor_1750000.cpp (part 1 of 3): 46 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01758be0
int UCheckMapsCommandlet::vf_000(void) { return 1; }

// @baa 0x01758bf0
bool UCheckMapsCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01758d90
IMPLEMENT_CLASS_AT(UChangeDashesToUnderscoresCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\ConvertDashesToUnderscoresCommandlet.cpp", 162);

// @baa 0x01758ea0
int UChangeDashesToUnderscoresCommandlet::vf_000(void) { return 1; }

// @baa 0x01758eb0
bool UChangeDashesToUnderscoresCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x017591b0
int URLevelTransitionRenderingComponent::vf_200(void) { return 1; }

// @baa 0x017591c0
int URPlayerStartInLevelRenderingComponent::vf_200(void) { return 1; }

// @baa 0x017591d0
IMPLEMENT_CLASS_AT(URActorFactorySmashableProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\RActorFactorySmashableProp.cpp", 9);

// @baa 0x017592e0
int URActorFactorySmashableProp::vf_000(void) { return 1; }

// @baa 0x017592f0
bool URActorFactorySmashableProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01759330
int URActorFactorySmashableProp::vf_110(int a0) { return 1; }

struct C_01759340 { int a, b, c; C_01759340(); };

// @baa 0x01759340
C_01759340::C_01759340() : a(0), b(0), c(0) {}

struct C { int sub_01759350(void); };

// @baa 0x01759350
int C::sub_01759350(void) { return *(int*)((char*)this + 4); }

struct C_01759360 { int sub_01759360(void); };

// @baa 0x01759360
int C_01759360::sub_01759360(void) { return *(int*)((char*)this + 4); }

typedef uint size_t;

struct C_01759370{
void sub_01759370(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x01759370
void C_01759370::sub_01759370(int param_2,int param_3)
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
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_01759490 { int sub_01759490(void); };

// @baa 0x01759490
int C_01759490::sub_01759490(void) { return *(int*)((char*)this + 0); }

struct C_01759520 { int sub_01759520(void); };

// @baa 0x01759520
int C_01759520::sub_01759520(void) { return *(int*)((char*)this + 0); }

struct C_01759710 {
    void sub_01759710(int, int);
    int sub_01759370(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01759710
void C_01759710::sub_01759710(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_01759710 *)(this))->sub_01759370(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct E { BYTE Bytes[24]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_01759750(INT Index);
};

// @baa 0x01759750
E* S::sub_01759750(INT Index)
{
    return &Items(Index);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0175a400 { void* Data; int Num; int Max; void sub_0175a400(); };

// @baa 0x0175a400
void C_0175a400::sub_0175a400() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_017591d0(void);
int sub_0175beb0(...);
extern undefined4 g_026e5da8;
// @baa 0x0175c130
int sub_0175c130(void)
{
  if (g_026e5da8 == 0) {
    g_026e5da8 = sub_0175beb0(L"BmEditor");
    sub_017591d0();
  }
  return g_026e5da8;
}

// @baa 0x0175cfb0
int sub_0175cfb0(void) { return 1690; }

struct C_0175cfc0 {
    int sub_0175cfc0();
};

// @baa 0x0175cfc0
int C_0175cfc0::sub_0175cfc0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_0175d060 {
    int sub_0175d060();
};

// @baa 0x0175d060
int C_0175d060::sub_0175d060(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xe0;
}

void sub_006837e0();
// @baa 0x0175d070
void sub_0175d070(void) { sub_006837e0(); }

struct C_view {
    int sub_00683520(int);
};

extern undefined * g_023da730;
// @baa 0x0175d150
undefined4 * ULensFlare::sub_0175d150(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00683520(param_2);
  *param_1 = (undefined4)(&g_023da730);
  param_1[0x34] = param_3;
  return param_1;
}

// @baa 0x0175d4f0
void sub_0175d4f0(void) { sub_006837e0(); }

int sub_005c7a20(void);
extern undefined * g_023da790;
// @baa 0x0175d580
undefined4 * UObject::sub_0175d580(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023da790);
  return param_1;
}

struct M_0175d690 { void sub_014820e0(); };

struct C_0175d690 { char pad[52]; M_0175d690 m; void sub_0175d690(); };

// @baa 0x0175d690
void C_0175d690::sub_0175d690() { m.sub_014820e0(); }

// @baa 0x0175d6e0
int sub_0175d6e0(void) { return 0; }

// @baa 0x0175d6f0
void sub_0175d6f0(void) {  }

// @baa 0x0175d700
void sub_0175d700(void) {  }

// @baa 0x0175d710
void sub_0175d710(void) {  }

// @baa 0x0175d720
void sub_0175d720(void) {  }

// @baa 0x0175d730
void sub_0175d730(void) {  }

// @baa 0x0175d740
void __stdcall sub_0175d740(int a0, int a1) {  }

// @baa 0x0175d750
void sub_0175d750(void) {  }

// @baa 0x0175d760
int sub_0175d760(void) { return 1; }

// @baa 0x0175d770
int sub_0175d770(void) { return 1; }

// @baa 0x0175d780
void sub_0175d780(void) {  }

// @baa 0x0175d790
void __stdcall sub_0175d790(int a0, int a1) {  }

int sub_0053dfa0(...);
int sub_0175d8d0(void);
// @baa 0x0175d930
undefined4 UOptionsDupObject::sub_0175d930(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0175d8d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_023dac88;
// @baa 0x0175e480
undefined4 * UObject::sub_0175e480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023dac88);
  return param_1;
}

int sub_01758ef0(void);
int sub_0175ea50(...);
extern undefined4 g_026e5da0;
// @baa 0x0175eb90
int sub_0175eb90(void)
{
  if (g_026e5da0 == 0) {
    g_026e5da0 = sub_0175ea50(L"BmEditor");
    sub_01758ef0();
  }
  return g_026e5da0;
}

// @baa 0x0175efc0
IMPLEMENT_CLASS_AT(UBmEdEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\BmEdEngine.cpp", 18);

// @baa 0x0175f040
