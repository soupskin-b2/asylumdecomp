// GetFlagsCommandlet.cpp (part 1 of 3): 30 functions
// Placed here by: callers 11, neighbours 11, class 7, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00ccdba0(void);
int sub_00cdc050(...);
extern undefined4 g_026c3c6c;
// @baa 0x0045f170
int sub_0045f170(void)
{
  if (g_026c3c6c == 0) {
    g_026c3c6c = sub_00cdc050(L"Engine");
    sub_00ccdba0();
  }
  return g_026c3c6c;
}

int sub_0059c990(void);
int sub_005adee0(...);
int sub_0062d220(...);
extern undefined4 g_0268d084;
// @baa 0x005c8a30
void sub_005c8a30(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  if (g_0268d084 == 0) {
    g_0268d084 = sub_005adee0(L"Core");
    sub_0059c990();
  }
  sub_0062d220(param_1,param_2,g_0268d084,param_3,param_4);
  return;
}

// @baa 0x005fae30
void sub_005fae30(void)
{
    GCallbackEvent->Send((ECallbackEventType)17);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00666d90(); };

// @baa 0x00666d90
void C::sub_00666d90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_009461f0(void);
int sub_0097e460(...);
extern undefined4 g_026b5f10;
// @baa 0x009d4600
int sub_009d4600(void)
{
  if (g_026b5f10 == 0) {
    g_026b5f10 = sub_0097e460(L"Engine");
    sub_009461f0();
  }
  return g_026b5f10;
}

int sub_00bab190(void);
int sub_00bd4d90(...);
extern undefined4 g_026bf894;
// @baa 0x00bd74b0
int sub_00bd74b0(void)
{
  if (g_026bf894 == 0) {
    g_026bf894 = sub_00bd4d90(L"Engine");
    sub_00bab190();
  }
  return g_026bf894;
}

struct C_00cb4da0{
int sub_00cb4da0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00cb4da0
int C_00cb4da0::sub_00cb4da0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

int sub_00614d20(...);
int sub_009b04f0(void);
int sub_009c7e30(...);
extern undefined4 g_026b62b4;
// @baa 0x00f76310
void sub_00f76310(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
{
  if (g_026b62b4 == 0) {
    g_026b62b4 = sub_009c7e30(L"Engine");
    sub_009b04f0();
  }
  sub_00614d20(g_026b62b4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10);
  return;
}

struct C_00f78bf0{
int sub_00f78bf0(undefined4*);
};

// @baa 0x00f78bf0
int C_00f78bf0::sub_00f78bf0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_view {
    int sub_00417ef0(int);
};

// @baa 0x00f794a0
int UObject::sub_00f794a0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00417ef0(param_2);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}

// @baa 0x00f7da30
int UObject::sub_00f7da30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00f7da40 { void* Data; int Num; int Max; void sub_00f7da40(); };

// @baa 0x00f7da40
void C_00f7da40::sub_00f7da40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f7daa0 { void* Data; int Num; int Max; void sub_00f7daa0(); };

// @baa 0x00f7daa0
void C_00f7daa0::sub_00f7daa0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f7db00 { void* Data; int Num; int Max; void sub_00f7db00(); };

// @baa 0x00f7db00
void C_00f7db00::sub_00f7db00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012ba090 { void sub_012b87b0(int); C_012ba090 *sub_012ba090(int); };

// @baa 0x012ba090
C_012ba090 *C_012ba090::sub_012ba090(int a) { sub_012b87b0(a); return this; }

void sub_012b88a0();
// @baa 0x012ba0b0
void sub_012ba0b0(void) { sub_012b88a0(); }

struct C_012ba0c0 { C_012ba0c0* sub_012ba0c0(void); };

// @baa 0x012ba0c0
C_012ba0c0* C_012ba0c0::sub_012ba0c0(void) { return this; }

// @baa 0x01759050
IMPLEMENT_CLASS_AT(UGetFlagsCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\GetFlagsCommandlet.cpp", 15);

// @baa 0x01759160
int UGetFlagsCommandlet::vf_000(void) { return 1; }

// @baa 0x01759170
bool UGetFlagsCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0175e4a0
// @baa 0x0175e500
// @baa 0x0175eb70
// @baa 0x0175ee00
int sub_01758d90(void);
int sub_0175ed40(...);
extern undefined4 g_026e5d9c;
// @baa 0x0175eec0
int sub_0175eec0(void)
{
  if (g_026e5d9c == 0) {
    g_026e5d9c = sub_0175ed40(L"BmEditor");
    sub_01758d90();
  }
  return g_026e5d9c;
}

int sub_01758ad0(void);
int sub_0175ebc0(...);
extern undefined4 g_026e5d94;
// @baa 0x0175eef0
int sub_0175eef0(void)
{
  if (g_026e5d94 == 0) {
    g_026e5d94 = sub_0175ebc0(L"BmEditor");
    sub_01758ad0();
  }
  return g_026e5d94;
}

int sub_01758c30(void);
int sub_0175ec80(...);
extern undefined4 g_026e5d98;
// @baa 0x0175ef20
int sub_0175ef20(void)
{
  if (g_026e5d98 == 0) {
    g_026e5d98 = sub_0175ec80(L"BmEditor");
    sub_01758c30();
  }
  return g_026e5d98;
}

int sub_01759050(void);
int sub_0175ee00(...);
extern undefined4 g_026e5da4;
// @baa 0x0175ef50
int sub_0175ef50(void)
{
  if (g_026e5da4 == 0) {
    g_026e5da4 = sub_0175ee00(L"BmEditor");
    sub_01759050();
  }
  return g_026e5da4;
}

int sub_01292820(void);
extern undefined * g_023dad9c;
extern undefined * g_023dadb4;
extern undefined4 g_023dadd8;
extern undefined * g_023dade0;
// @baa 0x0175ef80
undefined4 * UUnrealEdEngine::sub_0175ef80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01292820();
  *param_1 = (undefined4)(&g_023dade0);
  param_1[0xc] = (undefined4)(&g_023dadd8);
  param_1[0x10b] = (undefined4)(&g_023dadb4);
  param_1[0x186] = (undefined4)(&g_023dad9c);
  return param_1;
}

struct A_0175efb0 { virtual void sub_0175f040(); char pad[1064]; };

struct B_0175efb0 { virtual void sub_0175f040(); };

struct C_0175efb0 : A_0175efb0, B_0175efb0 { virtual void sub_0175f040(); C_0175efb0(); };

C_0175efb0::C_0175efb0() {}

// @baa 0x0175efb0
void C_0175efb0::sub_0175f040() {}
