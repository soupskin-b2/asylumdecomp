// UnUIStyles.cpp (part 1 of 4): 359 functions
// Placed here by: neighbours 301, class 36, callers 11, file 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00604540
undefined4 * UObject::sub_00604540(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = param_2[1];
  return param_1;
}

int sub_00ddfe00(...);
int sub_00de4110(void);
extern undefined4 g_026c5df4;
// @baa 0x00ca1c00
int sub_00ca1c00(void)
{
  if (g_026c5df4 == 0) {
    g_026c5df4 = sub_00ddfe00(L"Engine");
    sub_00de4110();
  }
  return g_026c5df4;
}

int sub_00dc9f80(void);
int sub_00dcb6c0(...);
extern undefined4 g_026c5d7c;
// @baa 0x00ca1c30
int sub_00ca1c30(void)
{
  if (g_026c5d7c == 0) {
    g_026c5d7c = sub_00dcb6c0(L"Engine");
    sub_00dc9f80();
  }
  return g_026c5d7c;
}

int sub_00dd8e30(...);
int sub_00dd8fb0(void);
extern undefined4 g_026c5d80;
// @baa 0x00ca1d40
int sub_00ca1d40(void)
{
  if (g_026c5d80 == 0) {
    g_026c5d80 = sub_00dd8e30(L"Engine");
    sub_00dd8fb0();
  }
  return g_026c5d80;
}

int sub_00dca220(void);
int sub_00dcd520(...);
extern undefined4 g_026c5d84;
// @baa 0x00ca7630
int sub_00ca7630(void)
{
  if (g_026c5d84 == 0) {
    g_026c5d84 = sub_00dcd520(L"Engine");
    sub_00dca220();
  }
  return g_026c5d84;
}

int sub_00dcd760(...);
int sub_00dcec30(void);
extern undefined4 g_026c5d90;
// @baa 0x00ca76e0
int sub_00ca76e0(void)
{
  if (g_026c5d90 == 0) {
    g_026c5d90 = sub_00dcd760(L"Engine");
    sub_00dcec30();
  }
  return g_026c5d90;
}

int sub_00dcd5e0(...);
int sub_00dce990(void);
extern undefined4 g_026c5d88;
// @baa 0x00ca7710
int sub_00ca7710(void)
{
  if (g_026c5d88 == 0) {
    g_026c5d88 = sub_00dcd5e0(L"Engine");
    sub_00dce990();
  }
  return g_026c5d88;
}

extern undefined4 g_026c3cdc;
// @baa 0x00cb02f0
undefined4 sub_00cb02f0(void)
{
  return *(undefined4 *)(g_026c3cdc + 100);
}

// @baa 0x00dc9a80
int sub_00dc9a80(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00dc9a90
void sub_00dc9a90(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00dc9ab0
void UUIStyle_Data::vf_10c(int a0) {  }

// @baa 0x00dc9ac0
void UUIStyle_Data::ResolveExternalReferences(UUISkin* a0) {  }

// @baa 0x00dc9ad0
void UUIStyle_Data::vf_114(void) {  }

struct C { int sub_00dc9ae0(void); };

// @baa 0x00dc9ae0
int C::sub_00dc9ae0(void) { return *(int*)((char*)this + 28); }

struct C_00dc9af0 { void sub_00dc9af0(int a0); };

// @baa 0x00dc9af0
void C_00dc9af0::sub_00dc9af0(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_00dc9b00 { void sub_00dc9b00(int a0); };

// @baa 0x00dc9b00
void C_00dc9b00::sub_00dc9b00(int a0) { *(int*)((char*)this + 28) = a0; }

// @baa 0x00dc9b10
int sub_00dc9b10(int a0, int a1) { return a1; }

// @baa 0x00dc9b20
int sub_00dc9b20(int a0, int a1) { return a1; }

struct C_00dc9b30 { C_00dc9b30* sub_00dc9b30(void); };

// @baa 0x00dc9b30
C_00dc9b30* C_00dc9b30::sub_00dc9b30(void) { return this; }

// @baa 0x00dc9b40
int sub_00dc9b40(int a0, int a1) { return a1; }

// @baa 0x00dc9b50
IMPLEMENT_CLASS_AT(UUIPrefab, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIPrefab.cpp", 16);

// @baa 0x00dc9c60
int UUIPrefab::vf_000(void) { return 1; }

// @baa 0x00dc9c70
bool UUIPrefab::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dc9cb0
IMPLEMENT_CLASS_AT(UUIPrefabInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIPrefab.cpp", 17);

// @baa 0x00dc9dc0
int UUIPrefabInstance::vf_000(void) { return 1; }

// @baa 0x00dc9dd0
bool UUIPrefabInstance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dc9e10
IMPLEMENT_CLASS_AT(UUIPrefabScene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIPrefab.cpp", 18);

// @baa 0x00dc9f20
int UUIPrefabScene::vf_000(void) { return 1; }

// @baa 0x00dc9f30
bool UUIPrefabScene::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_005c1dd0();
// @baa 0x00dc9f70
void sub_00dc9f70(void) { sub_005c1dd0(); }

// @baa 0x00dc9f80
IMPLEMENT_CLASS_AT(UUIString, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStrings.cpp", 23);

// @baa 0x00dca090
int UUIString::vf_000(void) { return 1; }

// @baa 0x00dca0a0
bool UUIString::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00dca1c0 {
    void sub_00dca1c0();
};

// @baa 0x00dca1c0
void C_00dca1c0::sub_00dca1c0(void)
{
    uint * param_1 = (uint *)this;
  *param_1 = *param_1 & 0xffffffe0;
  return;
}

// @baa 0x00dca1d0
int UUIStyle::vf_000(void) { return 1; }

// @baa 0x00dca1e0
bool UUIStyle::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dca220
IMPLEMENT_CLASS_AT(UUIStyle_Data, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStyles.cpp", 14);

// @baa 0x00dca330
int UUIStyle_Data::vf_000(void) { return 1; }

// @baa 0x00dca340
bool UUIStyle_Data::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dca380
int UUIStyle_Image::vf_000(void) { return 1; }

// @baa 0x00dca390
int UUIStyle_Text::vf_000(void) { return 1; }

// @baa 0x00dca3a0
int UUIStyle_Combo::vf_000(void) { return 1; }

// @baa 0x00dca3b0
IMPLEMENT_CLASS_AT(UUISkin, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStyles.cpp", 19);

// @baa 0x00dca4c0
int UUISkin::vf_000(void) { return 1; }

// @baa 0x00dca4d0
bool UUISkin::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dca510
int UUISkin::vf_12c(int a0, int a1) { return 0; }

// @baa 0x00dca6a0
UBOOL UUIStyle_Data::IsDirty()
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x54) >> 1 & 1;
}

struct S_00dcba60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dcba60(INT Index);
};

// @baa 0x00dcba60
DWORD* S_00dcba60::sub_00dcba60(INT Index)
{
    return &Items(Index);
}

struct C_00dcbab0{
int sub_00dcbab0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00dcbab0
int C_00dcbab0::sub_00dcbab0(undefined4*param_2)
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

struct C_00dcbb40 {
    int sub_00dcbb40(int);
};

// @baa 0x00dcbb40
int C_00dcbb40::sub_00dcbb40(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x00dcbb50
void __stdcall sub_00dcbb50(int a0, int a1) {  }

struct C_00dcbb60 {
    int sub_00dcbb60();
};

// @baa 0x00dcbb60
int C_00dcbb60::sub_00dcbb60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00dcbb70 { int sub_00dcbb70(void); };

// @baa 0x00dcbb70
int C_00dcbb70::sub_00dcbb70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dcbb80 { int sub_00dcbb80(void); };

// @baa 0x00dcbb80
int C_00dcbb80::sub_00dcbb80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dcbb90 { int sub_00dcbb90(void); };

// @baa 0x00dcbb90
int C_00dcbb90::sub_00dcbb90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x00dcbba0
void sub_00dcbba0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00dcbc10 {
    int sub_00dcbc10(int);
};

// @baa 0x00dcbc10
int C_00dcbc10::sub_00dcbc10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00dcbc20 {
    int sub_00dcbc20(int);
};

// @baa 0x00dcbc20
int C_00dcbc20::sub_00dcbc20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00dcbc30 { C_00dcbc30* sub_00dcbc30(void); };

// @baa 0x00dcbc30
C_00dcbc30* C_00dcbc30::sub_00dcbc30(void) { *(int*)((char*)this + 8) = -1; return this; }

struct C_00dcbcd0 {
    int sub_00dcbcd0(int);
};

// @baa 0x00dcbcd0
int C_00dcbcd0::sub_00dcbcd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00dcbcf0 {
    int sub_00dcbcf0(int);
};

// @baa 0x00dcbcf0
int C_00dcbcf0::sub_00dcbcf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00dcbd10 { C_00dcbd10* sub_00dcbd10(void); };

// @baa 0x00dcbd10
C_00dcbd10* C_00dcbd10::sub_00dcbd10(void) { *(int*)((char*)this + 20) = -1; return this; }

struct C_00dcbdb0 {
    int sub_00dcbdb0(int);
};

// @baa 0x00dcbdb0
int C_00dcbdb0::sub_00dcbdb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dcbdc0 {
    int sub_00dcbdc0(int);
};

// @baa 0x00dcbdc0
int C_00dcbdc0::sub_00dcbdc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dcbdd0 { C_00dcbdd0* sub_00dcbdd0(void); };

// @baa 0x00dcbdd0
C_00dcbdd0* C_00dcbdd0::sub_00dcbdd0(void) { *(int*)((char*)this + 12) = -1; return this; }

struct C_00dcbea0 {
    int sub_00dcbea0(int);
};

// @baa 0x00dcbea0
int C_00dcbea0::sub_00dcbea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00dcbec0 {
    int sub_00dcbec0(int);
};

// @baa 0x00dcbec0
int C_00dcbec0::sub_00dcbec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00dcbee0 { C_00dcbee0* sub_00dcbee0(void); };

// @baa 0x00dcbee0
C_00dcbee0* C_00dcbee0::sub_00dcbee0(void) { *(int*)((char*)this + 20) = -1; return this; }

struct C_00dcbf80 {
    int sub_00dcbf80(int);
};

// @baa 0x00dcbf80
int C_00dcbf80::sub_00dcbf80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dcbf90 {
    int sub_00dcbf90(int);
};

// @baa 0x00dcbf90
int C_00dcbf90::sub_00dcbf90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dcbfa0 { C_00dcbfa0* sub_00dcbfa0(void); };

// @baa 0x00dcbfa0
C_00dcbfa0* C_00dcbfa0::sub_00dcbfa0(void) { *(int*)((char*)this + 12) = -1; return this; }

struct C_00dcbfd0 {
    undefined4 sub_00dcbfd0();
};

// @baa 0x00dcbfd0
undefined4 C_00dcbfd0::sub_00dcbfd0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x14);
}

struct C_00dcbfe0 { int sub_00dcbfe0(void); };

// @baa 0x00dcbfe0
int C_00dcbfe0::sub_00dcbfe0(void) { return *(int*)((char*)this + 20); }

struct C_00dcbff0 { int sub_00dcbff0(void); };

// @baa 0x00dcbff0
int C_00dcbff0::sub_00dcbff0(void) { return *(int*)((char*)this + 20); }

struct C_00dcc000 { int sub_00dcc000(void); };

// @baa 0x00dcc000
int C_00dcc000::sub_00dcc000(void) { return *(int*)((char*)this + 20); }

struct C_00dcc010 { int sub_00dcc010(void); };

// @baa 0x00dcc010
int C_00dcc010::sub_00dcc010(void) { return *(int*)((char*)this + 20); }

struct C_00dcc020 { int sub_00dcc020(void); };

// @baa 0x00dcc020
int C_00dcc020::sub_00dcc020(void) { return *(int*)((char*)this + 20); }

struct C_00dcc030 {
    int sub_00dcc030();
};

// @baa 0x00dcc030
int C_00dcc030::sub_00dcc030(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcc050 {
    int sub_00dcc050();
};

// @baa 0x00dcc050
int C_00dcc050::sub_00dcc050(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcc070 {
    int sub_00dcc070();
};

// @baa 0x00dcc070
int C_00dcc070::sub_00dcc070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00dcc090 {
    int sub_00dcc090();
};

// @baa 0x00dcc090
int C_00dcc090::sub_00dcc090(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcc0b0 {
    int sub_00dcc0b0();
};

// @baa 0x00dcc0b0
int C_00dcc0b0::sub_00dcc0b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcc0d0 {
    int sub_00dcc0d0();
};

// @baa 0x00dcc0d0
int C_00dcc0d0::sub_00dcc0d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x00dcc0e0
void sub_00dcc0e0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00dcc100
void sub_00dcc100(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return;
}

// @baa 0x00dcc130
void sub_00dcc130(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x00dcc180
void sub_00dcc180(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

void sub_00dcb520();
// @baa 0x00dcc230
void sub_00dcc230(void) { sub_00dcb520(); }

// @baa 0x00dcc270
// @baa 0x00dcc2e0
int UUIStyle_Data::vf_124(int a0) { return 0; }

// @baa 0x00dcc2f0
int sub_005c7a20(void);
extern undefined * g_020cfbe0;
// @baa 0x00dcc310
undefined4 * UObject::sub_00dcc310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020cfbe0);
  return param_1;
}

// @baa 0x00dcc360
IMPLEMENT_CLASS_AT(UUIStyle_Combo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStyles.cpp", 17);

// @baa 0x00dcc3c0
extern undefined * g_020cfe30;
// @baa 0x00dcc3f0
undefined4 * UObject::sub_00dcc3f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020cfe30);
  return param_1;
}

// @baa 0x00dcc410
IMPLEMENT_CLASS_AT(UUIStyle_Image, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStyles.cpp", 15);

// @baa 0x00dcc470
extern undefined * g_020cff58;
// @baa 0x00dcc4a0
undefined4 * UObject::sub_00dcc4a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020cff58);
  return param_1;
}

// @baa 0x00dcc4c0
IMPLEMENT_CLASS_AT(UUIStyle_Text, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStyles.cpp", 16);

// @baa 0x00dcc520
struct T_00dcca40;
// @baa 0x00dcca40
template INT TArray<T_00dcca40*>::RemoveItem(T_00dcca40* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00dccba0 { void* Data; int Num; int Max; void sub_00dccba0(); };

// @baa 0x00dccba0
void C_00dccba0::sub_00dccba0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00dccc00 {
    int sub_00dccc00();
};

// @baa 0x00dccc00
int C_00dccc00::sub_00dccc00(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00dccc10 { int sub_00dccc10(void); };

// @baa 0x00dccc10
int C_00dccc10::sub_00dccc10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dcccc0 {
    int sub_00dcccc0(int);
};

// @baa 0x00dcccc0
int C_00dcccc0::sub_00dcccc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00dcccd0 {
    int sub_00dcccd0(int);
};

// @baa 0x00dcccd0
int C_00dcccd0::sub_00dcccd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00dccd80 {
    int sub_00dccd80(int);
};

// @baa 0x00dccd80
int C_00dccd80::sub_00dccd80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00dccda0 {
    int sub_00dccda0(int);
};

// @baa 0x00dccda0
int C_00dccda0::sub_00dccda0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00dcce60
int UPackageMap::sub_00dcce60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00dcce70
int UPackageMap::sub_00dcce70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00dccf80
int UPackageMap::sub_00dccf80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00dcd040 {
    int sub_00dcd040(int);
};

// @baa 0x00dcd040
int C_00dcd040::sub_00dcd040(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dcd050 {
    int sub_00dcd050();
};

// @baa 0x00dcd050
int C_00dcd050::sub_00dcd050(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcd070 {
    int sub_00dcd070();
};

// @baa 0x00dcd070
int C_00dcd070::sub_00dcd070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00dcd090 {
    int sub_00dcd090();
};

// @baa 0x00dcd090
int C_00dcd090::sub_00dcd090(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcd0b0 {
    int sub_00dcd0b0();
};

// @baa 0x00dcd0b0
int C_00dcd0b0::sub_00dcd0b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00dcd0d0 {
    int sub_00dcd0d0();
};

// @baa 0x00dcd0d0
int C_00dcd0d0::sub_00dcd0d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcd0f0 {
    int sub_00dcd0f0();
};

// @baa 0x00dcd0f0
int C_00dcd0f0::sub_00dcd0f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00dcd110 {
    int sub_00dcd110();
};

// @baa 0x00dcd110
int C_00dcd110::sub_00dcd110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcd130 {
    int sub_00dcd130();
};

// @baa 0x00dcd130
int C_00dcd130::sub_00dcd130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00dcd150 {
    int sub_00dcd150();
};

// @baa 0x00dcd150
int C_00dcd150::sub_00dcd150(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcd170 {
    int sub_00dcd170();
};

// @baa 0x00dcd170
int C_00dcd170::sub_00dcd170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00dcd180 {
    int sub_00dcd180();
};

// @baa 0x00dcd180
int C_00dcd180::sub_00dcd180(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dcd1a0 {
    int sub_00dcd1a0();
};

// @baa 0x00dcd1a0
int C_00dcd1a0::sub_00dcd1a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00dcd1b0 {
    int sub_00dcd1b0(int);
};

// @baa 0x00dcd1b0
int C_00dcd1b0::sub_00dcd1b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dcd1c0 {
    int sub_00dcd1c0();
};

// @baa 0x00dcd1c0
int C_00dcd1c0::sub_00dcd1c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00dcd1e0 {
    int sub_00dcd1e0();
};

// @baa 0x00dcd1e0
int C_00dcd1e0::sub_00dcd1e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00dcd200 {
    int sub_00dcd200();
};

// @baa 0x00dcd200
int C_00dcd200::sub_00dcd200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00dcd210 {
    int sub_00dcd210();
};

// @baa 0x00dcd210
int C_00dcd210::sub_00dcd210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00dcd220 {
    int sub_00dcd220();
};

// @baa 0x00dcd220
int C_00dcd220::sub_00dcd220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00dcd230 {
    int sub_00dcd230();
};

// @baa 0x00dcd230
int C_00dcd230::sub_00dcd230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00dcd240 {
    int sub_00dcd240();
};

// @baa 0x00dcd240
int C_00dcd240::sub_00dcd240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00dcd250 {
    int sub_00dcd250();
};

// @baa 0x00dcd250
int C_00dcd250::sub_00dcd250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00dcd480
// @baa 0x00dcd4a0
// @baa 0x00dcd4e0
// @baa 0x00dcd500
// @baa 0x00dcd520
// @baa 0x00dcd5e0
// @baa 0x00dcd6a0
// @baa 0x00dcd760
struct C_00dcd820 { int sub_00dcd820(void); };

// @baa 0x00dcd820
int C_00dcd820::sub_00dcd820(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dcd830 { C_00dcd830* sub_00dcd830(void); };

// @baa 0x00dcd830
C_00dcd830* C_00dcd830::sub_00dcd830(void) { return this; }

struct C_00dcd840 { C_00dcd840* sub_00dcd840(void); };

// @baa 0x00dcd840
C_00dcd840* C_00dcd840::sub_00dcd840(void) { return this; }

struct C_00dcd850 { void sub_00dcd350(int); C_00dcd850 *sub_00dcd850(int); };

// @baa 0x00dcd850
C_00dcd850 *C_00dcd850::sub_00dcd850(int a) { sub_00dcd350(a); return this; }

struct C_00dcd870 { int sub_00dcd870(void); };

// @baa 0x00dcd870
int C_00dcd870::sub_00dcd870(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

extern TArray<int> g_026a1ca4;
struct C_00dcd880 {
    int sub_00dcd880();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00dcd880
int C_00dcd880::sub_00dcd880()
{
    return g_026a1ca4(Index);
}

struct C_00dcd8e0 {
    int sub_00dcd8e0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00dcd8e0
int C_00dcd8e0::sub_00dcd8e0()
{
    return g_026a1ca4(Index);
}

struct C_00dcd940 {
    int sub_00dcd940();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00dcd940
int C_00dcd940::sub_00dcd940()
{
    return g_026a1ca4(Index);
}

struct C_00dcd9a0 {
    int sub_00dcd9a0(int);
};

// @baa 0x00dcd9a0
int C_00dcd9a0::sub_00dcd9a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00dcd9b0 {
    int sub_00dcd9b0(int);
};

// @baa 0x00dcd9b0
int C_00dcd9b0::sub_00dcd9b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00dcd9d0 {
    int sub_00dcd9d0(int);
};

// @baa 0x00dcd9d0
int C_00dcd9d0::sub_00dcd9d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dcd9e0 {
    int sub_00dcd9e0(int);
};

// @baa 0x00dcd9e0
int C_00dcd9e0::sub_00dcd9e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_view_00dcda00 {
    int sub_00dcce80(int, int);
};

// @baa 0x00dcda00
int UPackageMap::sub_00dcda00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00dcda00 *)(this))->sub_00dcce80((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

// @baa 0x00dcda40
int UPackageMap::sub_00dcda40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00dcda50
int UPackageMap::sub_00dcda50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcda70
int UPackageMap::sub_00dcda70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00dcda90 {
    int sub_00dcda90();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00dcda90
int C_00dcda90::sub_00dcda90()
{
    return g_026a1ca4(Index);
}

// @baa 0x00dcdaf0
int UPackageMap::sub_00dcdaf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcdb10
int UPackageMap::sub_00dcdb10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00dcdb30
int UPackageMap::sub_00dcdb30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcdb50
int UPackageMap::sub_00dcdb50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00dcdb70
int UPackageMap::sub_00dcdb70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcdb90
int UPackageMap::sub_00dcdb90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00dcdba0
int UPackageMap::sub_00dcdba0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcdbc0
int UPackageMap::sub_00dcdbc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00dcdbd0
int UPackageMap::sub_00dcdbd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcdbf0
int UPackageMap::sub_00dcdbf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00dcdc80 {
    int sub_00dcdc80(int);
};

// @baa 0x00dcdc80
int C_00dcdc80::sub_00dcdc80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00dcdd50 {
    int sub_00dcdd50(int);
};

// @baa 0x00dcdd50
int C_00dcdd50::sub_00dcdd50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00dcddf0
int UPackageMap::sub_00dcddf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00dcde00
int UPackageMap::sub_00dcde00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00dcde10
int UPackageMap::sub_00dcde10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00dcdeb0
int UPackageMap::sub_00dcdeb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00dcdf10
int UPackageMap::sub_00dcdf10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x18;
}

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

struct TConstSetBitIterator_00dce4c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce4c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce4c0& operator++();
};

TConstSetBitIterator_00dce4c0::TConstSetBitIterator_00dce4c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce4c0
TConstSetBitIterator_00dce4c0& TConstSetBitIterator_00dce4c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce4e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce4e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce4e0& operator++();
};

TConstSetBitIterator_00dce4e0::TConstSetBitIterator_00dce4e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce4e0
TConstSetBitIterator_00dce4e0& TConstSetBitIterator_00dce4e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce630 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce630(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce630& operator++();
};

TConstSetBitIterator_00dce630::TConstSetBitIterator_00dce630(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce630
TConstSetBitIterator_00dce630& TConstSetBitIterator_00dce630::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce680 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce680(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce680& operator++();
};

TConstSetBitIterator_00dce680::TConstSetBitIterator_00dce680(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce680
TConstSetBitIterator_00dce680& TConstSetBitIterator_00dce680::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce6d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce6d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce6d0& operator++();
};

TConstSetBitIterator_00dce6d0::TConstSetBitIterator_00dce6d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce6d0
TConstSetBitIterator_00dce6d0& TConstSetBitIterator_00dce6d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce720 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce720(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce720& operator++();
};

TConstSetBitIterator_00dce720::TConstSetBitIterator_00dce720(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce720
TConstSetBitIterator_00dce720& TConstSetBitIterator_00dce720::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce770& operator++();
};

TConstSetBitIterator_00dce770::TConstSetBitIterator_00dce770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce770
TConstSetBitIterator_00dce770& TConstSetBitIterator_00dce770::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce7c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce7c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce7c0& operator++();
};

TConstSetBitIterator_00dce7c0::TConstSetBitIterator_00dce7c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce7c0
TConstSetBitIterator_00dce7c0& TConstSetBitIterator_00dce7c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce810 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce810(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce810& operator++();
};

TConstSetBitIterator_00dce810::TConstSetBitIterator_00dce810(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce810
TConstSetBitIterator_00dce810& TConstSetBitIterator_00dce810::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce860 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce860(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce860& operator++();
};

TConstSetBitIterator_00dce860::TConstSetBitIterator_00dce860(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce860
TConstSetBitIterator_00dce860& TConstSetBitIterator_00dce860::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce880& operator++();
};

TConstSetBitIterator_00dce880::TConstSetBitIterator_00dce880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce880
TConstSetBitIterator_00dce880& TConstSetBitIterator_00dce880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce8a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce8a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce8a0& operator++();
};

TConstSetBitIterator_00dce8a0::TConstSetBitIterator_00dce8a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce8a0
TConstSetBitIterator_00dce8a0& TConstSetBitIterator_00dce8a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce8f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce8f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce8f0& operator++();
};

TConstSetBitIterator_00dce8f0::TConstSetBitIterator_00dce8f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce8f0
TConstSetBitIterator_00dce8f0& TConstSetBitIterator_00dce8f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dce940 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dce940(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dce940& operator++();
};

TConstSetBitIterator_00dce940::TConstSetBitIterator_00dce940(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dce940
TConstSetBitIterator_00dce940& TConstSetBitIterator_00dce940::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00dce990
// @baa 0x00dceaa0
bool UUIStyle_Image::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dceae0
// @baa 0x00dcebf0
bool UUIStyle_Text::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dcec30
// @baa 0x00dced40
bool UUIStyle_Combo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view_00dcef10 {
    int sub_00dcce80(int, int);
};

// @baa 0x00dcef10
int UPackageMap::sub_00dcef10(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00dcef10 *)(this))->sub_00dcce80((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

// @baa 0x00dcef50
int UPackageMap::sub_00dcef50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcef70
int UPackageMap::sub_00dcef70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0x10 + param_1[5] * 0x1c;
}

// @baa 0x00dcef90
int UPackageMap::sub_00dcef90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcefb0
int UPackageMap::sub_00dcefb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x1c;
}

// @baa 0x00dcefd0
int UPackageMap::sub_00dcefd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dceff0
int UPackageMap::sub_00dceff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00dcf010
int UPackageMap::sub_00dcf010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x1c;
}

// @baa 0x00dcf030
int UPackageMap::sub_00dcf030(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcf050
int UPackageMap::sub_00dcf050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00dcf060
int UPackageMap::sub_00dcf060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

// @baa 0x00dcf070
int UPackageMap::sub_00dcf070(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00dcf090
int UPackageMap::sub_00dcf090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00dcf0a0
int UPackageMap::sub_00dcf0a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_view_00dcf0b0 {
    int sub_00dcdc00(int, int);
};

// @baa 0x00dcf0b0
int UPackageMap::sub_00dcf0b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00dcf0b0 *)(this))->sub_00dcdc00((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00dcf0e0 {
    int sub_00dcdc90(int, int);
};

// @baa 0x00dcf0e0
int UState::sub_00dcf0e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00dcf0e0 *)(this))->sub_00dcdc90((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_view_00dcf120 {
    int sub_00dcdd70(int, int);
};

// @baa 0x00dcf120
int UPackageMap::sub_00dcf120(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00dcf120 *)(this))->sub_00dcdd70((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_00dcf150 {
    int sub_00dcdd70(int, int);
};

// @baa 0x00dcf150
int UPackageMap::sub_00dcf150(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00dcf150 *)(this))->sub_00dcdd70((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_00dcf180 {
    int sub_006043f0(int, int);
};

// @baa 0x00dcf180
int UPackageMap::sub_00dcf180(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00dcf180 *)(this))->sub_006043f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_view_00dcf1d0 {
    int sub_00dcde30(int, int);
};

// @baa 0x00dcf1d0
int UPackageMap::sub_00dcf1d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00dcf1d0 *)(this))->sub_00dcde30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

int sub_00dcdec0(void);
// @baa 0x00dcf310
undefined4 UPackageMap::sub_00dcf310(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_00dcdec0();
  return param_1;
}

// @baa 0x00dcf320
int UPackageMap::sub_00dcf320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[2] * 0x18;
}

struct TConstSetBitIterator_00dcfb40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfb40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfb40& operator++();
};

TConstSetBitIterator_00dcfb40::TConstSetBitIterator_00dcfb40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfb40
TConstSetBitIterator_00dcfb40& TConstSetBitIterator_00dcfb40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfb60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfb60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfb60& operator++();
};

TConstSetBitIterator_00dcfb60::TConstSetBitIterator_00dcfb60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfb60
TConstSetBitIterator_00dcfb60& TConstSetBitIterator_00dcfb60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfb80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfb80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfb80& operator++();
};

TConstSetBitIterator_00dcfb80::TConstSetBitIterator_00dcfb80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfb80
TConstSetBitIterator_00dcfb80& TConstSetBitIterator_00dcfb80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfba0& operator++();
};

TConstSetBitIterator_00dcfba0::TConstSetBitIterator_00dcfba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfba0
TConstSetBitIterator_00dcfba0& TConstSetBitIterator_00dcfba0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfbc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfbc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfbc0& operator++();
};

TConstSetBitIterator_00dcfbc0::TConstSetBitIterator_00dcfbc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfbc0
TConstSetBitIterator_00dcfbc0& TConstSetBitIterator_00dcfbc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfbe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfbe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfbe0& operator++();
};

TConstSetBitIterator_00dcfbe0::TConstSetBitIterator_00dcfbe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfbe0
TConstSetBitIterator_00dcfbe0& TConstSetBitIterator_00dcfbe0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfc80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfc80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfc80& operator++();
};

TConstSetBitIterator_00dcfc80::TConstSetBitIterator_00dcfc80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfc80
TConstSetBitIterator_00dcfc80& TConstSetBitIterator_00dcfc80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfcd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfcd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfcd0& operator++();
};

TConstSetBitIterator_00dcfcd0::TConstSetBitIterator_00dcfcd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfcd0
TConstSetBitIterator_00dcfcd0& TConstSetBitIterator_00dcfcd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfd20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfd20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfd20& operator++();
};

TConstSetBitIterator_00dcfd20::TConstSetBitIterator_00dcfd20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfd20
TConstSetBitIterator_00dcfd20& TConstSetBitIterator_00dcfd20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfd70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfd70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfd70& operator++();
};

TConstSetBitIterator_00dcfd70::TConstSetBitIterator_00dcfd70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfd70
TConstSetBitIterator_00dcfd70& TConstSetBitIterator_00dcfd70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfdc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfdc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfdc0& operator++();
};

TConstSetBitIterator_00dcfdc0::TConstSetBitIterator_00dcfdc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfdc0
TConstSetBitIterator_00dcfdc0& TConstSetBitIterator_00dcfdc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfe10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfe10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfe10& operator++();
};

TConstSetBitIterator_00dcfe10::TConstSetBitIterator_00dcfe10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfe10
TConstSetBitIterator_00dcfe10& TConstSetBitIterator_00dcfe10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dcfe60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dcfe60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dcfe60& operator++();
};

TConstSetBitIterator_00dcfe60::TConstSetBitIterator_00dcfe60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dcfe60
TConstSetBitIterator_00dcfe60& TConstSetBitIterator_00dcfe60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd0090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd0090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd0090& operator++();
};

TConstSetBitIterator_00dd0090::TConstSetBitIterator_00dd0090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd0090
TConstSetBitIterator_00dd0090& TConstSetBitIterator_00dd0090::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd00e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd00e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd00e0& operator++();
};

TConstSetBitIterator_00dd00e0::TConstSetBitIterator_00dd00e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd00e0
TConstSetBitIterator_00dd00e0& TConstSetBitIterator_00dd00e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd0130 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd0130(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd0130& operator++();
};

TConstSetBitIterator_00dd0130::TConstSetBitIterator_00dd0130(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd0130
TConstSetBitIterator_00dd0130& TConstSetBitIterator_00dd0130::operator++()
{
    It.Advance();
    return *this;
}

struct C_00dd0220 {
    undefined4 * sub_00dd0220();
};

extern undefined * g_020d0080;
// @baa 0x00dd0220
undefined4 * C_00dd0220::sub_00dd0220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *param_1 = (undefined4)(&g_020d0080);
  return param_1;
}

// @baa 0x00dd0250
// @baa 0x00dd02b0
struct C_00dd02e0 {
    undefined4 * sub_00dd02e0();
};

extern undefined * g_020d02c8;
// @baa 0x00dd02e0
undefined4 * C_00dd02e0::sub_00dd02e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *param_1 = (undefined4)(&g_020d02c8);
  return param_1;
}

// @baa 0x00dd0310
// @baa 0x00dd0370
struct C_view_00dd03e0 {
    int sub_00dcdc90(int, int);
};

// @baa 0x00dd03e0
undefined4 UState::sub_00dd03e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00dd03e0 *)(this))->sub_00dcdc90((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return 0;
}

struct C_view_00dd0420 {
    int sub_00dcdd70(int, int);
};

// @baa 0x00dd0420
int UPackageMap::sub_00dd0420(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00dd0420 *)(this))->sub_00dcdd70((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_view_00dd0460 {
    int sub_00dcdd70(int, int);
};

// @baa 0x00dd0460
undefined4 UPackageMap::sub_00dd0460(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00dd0460 *)(this))->sub_00dcdd70((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

struct C_view_00dd04a0 {
    int sub_006043f0(int, int);
};

// @baa 0x00dd04a0
int UPackageMap::sub_00dd04a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00dd04a0 *)(this))->sub_006043f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_view_00dd04e0 {
    int sub_006043f0(int, int);
};

// @baa 0x00dd04e0
undefined4 UPackageMap::sub_00dd04e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00dd04e0 *)(this))->sub_006043f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}

struct C_view_00dd0540 {
    int sub_00dcde30(int, int);
};

// @baa 0x00dd0540
int UPackageMap::sub_00dd0540(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00dd0540 *)(this))->sub_00dcde30((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct TConstSetBitIterator_00dd0840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd0840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd0840& operator++();
};

TConstSetBitIterator_00dd0840::TConstSetBitIterator_00dd0840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd0840
TConstSetBitIterator_00dd0840& TConstSetBitIterator_00dd0840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd0860 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd0860(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd0860& operator++();
};

TConstSetBitIterator_00dd0860::TConstSetBitIterator_00dd0860(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd0860
TConstSetBitIterator_00dd0860& TConstSetBitIterator_00dd0860::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd0880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd0880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd0880& operator++();
};

TConstSetBitIterator_00dd0880::TConstSetBitIterator_00dd0880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd0880
TConstSetBitIterator_00dd0880& TConstSetBitIterator_00dd0880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd08a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd08a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd08a0& operator++();
};

TConstSetBitIterator_00dd08a0::TConstSetBitIterator_00dd08a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd08a0
TConstSetBitIterator_00dd08a0& TConstSetBitIterator_00dd08a0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00dd08c0 {
    int sub_00dcf3e0(int);
};

// @baa 0x00dd08c0
void UPackageMap::sub_00dd08c0(void)
{
    int param_1 = (int)this;
  ((C_view_00dd08c0 *)((*(char **)((char *)this + 0x1c))))->sub_00dcf3e0(*(undefined4 *)(param_1 + 0x14));
  return;
}

struct TConstSetBitIterator_00dd08d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd08d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd08d0& operator++();
};

TConstSetBitIterator_00dd08d0::TConstSetBitIterator_00dd08d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd08d0
TConstSetBitIterator_00dd08d0& TConstSetBitIterator_00dd08d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00dd08f0 {
    int sub_00dcf3e0(int);
};

// @baa 0x00dd08f0
void UPackageMap::sub_00dd08f0(void)
{
    int param_1 = (int)this;
  ((C_view_00dd08f0 *)((*(char **)((char *)this + 0x10))))->sub_00dcf3e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00dd0910 {
    int sub_00dcf540(int);
};

// @baa 0x00dd0910
void UPackageMap::sub_00dd0910(void)
{
    int param_1 = (int)this;
  ((C_view_00dd0910 *)((*(char **)((char *)this + 0x10))))->sub_00dcf540(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00dd0930 {
    int sub_00dcf6d0(int);
};

// @baa 0x00dd0930
void UPackageMap::sub_00dd0930(void)
{
    int param_1 = (int)this;
  ((C_view_00dd0930 *)((*(char **)((char *)this + 0x10))))->sub_00dcf6d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_00dd0950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd0950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd0950& operator++();
};

TConstSetBitIterator_00dd0950::TConstSetBitIterator_00dd0950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd0950
TConstSetBitIterator_00dd0950& TConstSetBitIterator_00dd0950::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00dd0970 {
    int sub_00dcf840(int);
};

// @baa 0x00dd0970
void UPackageMap::sub_00dd0970(void)
{
    int param_1 = (int)this;
  ((C_view_00dd0970 *)((*(char **)((char *)this + 0x10))))->sub_00dcf840(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00dd0990 {
    int sub_00dcf9d0(int);
};

// @baa 0x00dd0990
void UPackageMap::sub_00dd0990(void)
{
    int param_1 = (int)this;
  ((C_view_00dd0990 *)((*(char **)((char *)this + 0x10))))->sub_00dcf9d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_00dd1110 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd1110(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd1110& operator++();
};

TConstSetBitIterator_00dd1110::TConstSetBitIterator_00dd1110(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd1110
TConstSetBitIterator_00dd1110& TConstSetBitIterator_00dd1110::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd1160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd1160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd1160& operator++();
};

TConstSetBitIterator_00dd1160::TConstSetBitIterator_00dd1160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd1160
TConstSetBitIterator_00dd1160& TConstSetBitIterator_00dd1160::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00dd11b0 {
    int sub_00dcfc00(int);
};

// @baa 0x00dd11b0
void UPackageMap::sub_00dd11b0(void)
{
    int param_1 = (int)this;
  ((C_view_00dd11b0 *)((*(char **)((char *)this + 0x10))))->sub_00dcfc00(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_00dd0580();
// @baa 0x00dd3e10
void sub_00dd3e10(void) { sub_00dd0580(); }

void sub_00dd0670();
// @baa 0x00dd3e20
void sub_00dd3e20(void) { sub_00dd0670(); }

void sub_00dd07b0();
// @baa 0x00dd3e30
void sub_00dd3e30(void) { sub_00dd07b0(); }

struct TConstSetBitIterator_00dd3e40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd3e40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd3e40& operator++();
};

TConstSetBitIterator_00dd3e40::TConstSetBitIterator_00dd3e40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd3e40
TConstSetBitIterator_00dd3e40& TConstSetBitIterator_00dd3e40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd3e60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd3e60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd3e60& operator++();
};

TConstSetBitIterator_00dd3e60::TConstSetBitIterator_00dd3e60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd3e60
TConstSetBitIterator_00dd3e60& TConstSetBitIterator_00dd3e60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd3e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd3e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd3e80& operator++();
};

TConstSetBitIterator_00dd3e80::TConstSetBitIterator_00dd3e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd3e80
TConstSetBitIterator_00dd3e80& TConstSetBitIterator_00dd3e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd3ea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd3ea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd3ea0& operator++();
};

TConstSetBitIterator_00dd3ea0::TConstSetBitIterator_00dd3ea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd3ea0
TConstSetBitIterator_00dd3ea0& TConstSetBitIterator_00dd3ea0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00dd3ec0 {
    void sub_00dd3ec0();
    int sub_00dcf3e0(int);
};

// @baa 0x00dd3ec0
void C_00dd3ec0::sub_00dd3ec0(void)
{
    int param_1 = (int)this;
  ((C_00dd3ec0 *)((*(char **)((char *)this + 0x1c))))->sub_00dcf3e0(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

struct TConstSetBitIterator_00dd3ee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd3ee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd3ee0& operator++();
};

TConstSetBitIterator_00dd3ee0::TConstSetBitIterator_00dd3ee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd3ee0
TConstSetBitIterator_00dd3ee0& TConstSetBitIterator_00dd3ee0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd4270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd4270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd4270& operator++();
};

TConstSetBitIterator_00dd4270::TConstSetBitIterator_00dd4270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd4270
TConstSetBitIterator_00dd4270& TConstSetBitIterator_00dd4270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd42c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd42c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd42c0& operator++();
};

TConstSetBitIterator_00dd42c0::TConstSetBitIterator_00dd42c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd42c0
TConstSetBitIterator_00dd42c0& TConstSetBitIterator_00dd42c0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00dd4310 {
    void sub_00dd4310();
    int sub_00dcfc00(int);
};

// @baa 0x00dd4310
void C_00dd4310::sub_00dd4310(void)
{
    int param_1 = (int)this;
  ((C_00dd4310 *)((*(char **)((char *)this + 0x10))))->sub_00dcfc00(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_00dd47b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd47b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd47b0& operator++();
};

TConstSetBitIterator_00dd47b0::TConstSetBitIterator_00dd47b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd47b0
TConstSetBitIterator_00dd47b0& TConstSetBitIterator_00dd47b0::operator++()
{
    It.Advance();
    return *this;
}

int sub_00dcfeb0(void);
// @baa 0x00dd4ae0
int UUIStyle::sub_00dd4ae0(void)
{
    int param_1 = (int)this;

  sub_00dcfeb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00dcff10(void);
// @baa 0x00dd4b00
int UUIStyle::sub_00dd4b00(void)
{
    int param_1 = (int)this;

  sub_00dcff10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00dcff70(void);
// @baa 0x00dd4b20
int UUIStyle::sub_00dd4b20(void)
{
    int param_1 = (int)this;

  sub_00dcff70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00dcffd0(void);
// @baa 0x00dd4b40
int UUIStyle::sub_00dd4b40(void)
{
    int param_1 = (int)this;

  sub_00dcffd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00dd0030(void);
// @baa 0x00dd4b60
int UUIStyle::sub_00dd4b60(void)
{
    int param_1 = (int)this;

  sub_00dd0030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00dd5740 {
    int sub_00dd4330(int, int);
};

// @baa 0x00dd5740
void UPackageMap::sub_00dd5740(void)
{
    int param_1 = (int)this;
  ((C_view_00dd5740 *)(this))->sub_00dd4330(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00dd58e0 {
    int sub_00dd43f0(int, int);
};

// @baa 0x00dd58e0
void UPackageMap::sub_00dd58e0(void)
{
    int param_1 = (int)this;
  ((C_view_00dd58e0 *)(this))->sub_00dd43f0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00dd5c00 {
    int sub_00dd4570(int, int);
};

// @baa 0x00dd5c00
void UPackageMap::sub_00dd5c00(void)
{
    int param_1 = (int)this;
  ((C_view_00dd5c00 *)(this))->sub_00dd4570(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00dd5f20 {
    int sub_00dd46f0(int, int);
};

// @baa 0x00dd5f20
undefined4 UPackageMap::sub_00dd5f20(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00dd5f20 *)(this))->sub_00dd46f0(param_2, param_3);
  return param_1;
}

struct C_view_00dd5f40 {
    int sub_00dd4750(int, int);
};

// @baa 0x00dd5f40
undefined4 UPackageMap::sub_00dd5f40(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00dd5f40 *)(this))->sub_00dd4750(param_2, param_3);
  return param_1;
}

struct TConstSetBitIterator_00dd5f60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd5f60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd5f60& operator++();
};

TConstSetBitIterator_00dd5f60::TConstSetBitIterator_00dd5f60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd5f60
TConstSetBitIterator_00dd5f60& TConstSetBitIterator_00dd5f60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd5fb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd5fb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd5fb0& operator++();
};

TConstSetBitIterator_00dd5fb0::TConstSetBitIterator_00dd5fb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd5fb0
TConstSetBitIterator_00dd5fb0& TConstSetBitIterator_00dd5fb0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00dd6000 {
    int sub_00dd4800(int, int);
};

// @baa 0x00dd6000
undefined4 UPackageMap::sub_00dd6000(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00dd6000 *)(this))->sub_00dd4800(param_2, param_3);
  return param_1;
}

struct C_view_00dd6020 {
    int sub_00dd4860(int, int);
};

// @baa 0x00dd6020
int UPackageMap::sub_00dd6020(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00dd6020 *)(this))->sub_00dd4860(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00dd6040 {
    int sub_00dd48e0(int, int);
};

// @baa 0x00dd6040
int UPackageMap::sub_00dd6040(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00dd6040 *)(this))->sub_00dd48e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00dd6060 {
    int sub_00dd4960(int, int);
};

// @baa 0x00dd6060
int UPackageMap::sub_00dd6060(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00dd6060 *)(this))->sub_00dd4960(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00dd6080 {
    int sub_00dd49e0(int, int);
};

// @baa 0x00dd6080
int UPackageMap::sub_00dd6080(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00dd6080 *)(this))->sub_00dd49e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00dd60a0 {
    int sub_00dd4a60(int, int);
};

// @baa 0x00dd60a0
int UPackageMap::sub_00dd60a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00dd60a0 *)(this))->sub_00dd4a60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00dd60c0
int UUIStyle::sub_00dd60c0(void)
{
    int param_1 = (int)this;

  sub_00dcfeb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd60e0
int UUIStyle::sub_00dd60e0(void)
{
    int param_1 = (int)this;

  sub_00dcff10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd6100
int UUIStyle::sub_00dd6100(void)
{
    int param_1 = (int)this;

  sub_00dcff70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd6180
int UUIStyle::sub_00dd6180(void)
{
    int param_1 = (int)this;

  sub_00dcffd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd61a0
int UUIStyle::sub_00dd61a0(void)
{
    int param_1 = (int)this;

  sub_00dd0030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00dd61c0 {
    int sub_00dd4b80(int, int);
};

// @baa 0x00dd61c0
int UPackageMap::sub_00dd61c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00dd61c0 *)(this))->sub_00dd4b80(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

void sub_00dd5420();
// @baa 0x00dd61e0
void sub_00dd61e0(void) { sub_00dd5420(); }

void sub_00dd5490();
// @baa 0x00dd61f0
void sub_00dd61f0(void) { sub_00dd5490(); }

void sub_00dd5590();
// @baa 0x00dd6200
void sub_00dd6200(void) { sub_00dd5590(); }

void sub_00dd5600();
// @baa 0x00dd6210
void sub_00dd6210(void) { sub_00dd5600(); }

void sub_00dd5670();
// @baa 0x00dd6220
void sub_00dd6220(void) { sub_00dd5670(); }

struct C_view_00dd6270 {
    int sub_00dd5020(int);
};

// @baa 0x00dd6270
undefined4 UPackageMap::sub_00dd6270(int param_2, uint * param_3)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((param_2 != 0) && ((iVar1 == 0 || (*(int *)(iVar1 + 0x1c) != param_2)))) {
    ((C_view_00dd6270 *)(this))->sub_00dd5020(param_2);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)(iVar1 != *(int *)(param_1 + 0x1c));
  }
  return *(undefined4 *)(param_1 + 0x1c);
}

void sub_00dd56e0();
// @baa 0x00dd62b0
void sub_00dd62b0(void) { sub_00dd56e0(); }

void sub_00dd5810();
// @baa 0x00dd6300
void sub_00dd6300(void) { sub_00dd5810(); }

void sub_00dd5880();
// @baa 0x00dd6310
void sub_00dd6310(void) { sub_00dd5880(); }

void sub_00dd59f0();
// @baa 0x00dd6370
void sub_00dd6370(void) { sub_00dd59f0(); }

void sub_00dd5a60();
// @baa 0x00dd6380
void sub_00dd6380(void) { sub_00dd5a60(); }

void sub_00dd5b90();
// @baa 0x00dd63d0
void sub_00dd63d0(void) { sub_00dd5b90(); }

void sub_00dd5d10();
// @baa 0x00dd64b0
void sub_00dd64b0(void) { sub_00dd5d10(); }

void sub_00dd5d80();
// @baa 0x00dd64c0
void sub_00dd64c0(void) { sub_00dd5d80(); }

void sub_00dd5eb0();
// @baa 0x00dd6510
void sub_00dd6510(void) { sub_00dd5eb0(); }

struct C_view_00dd6520 {
    int sub_00dd46f0(int, int);
};

// @baa 0x00dd6520
int UPackageMap::sub_00dd6520(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00dd6520 *)(this))->sub_00dd46f0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00dd43f0(int, int);
};

struct C_00dd6550 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00dd6550(void);
};

// @baa 0x00dd6550
void C_00dd6550::sub_00dd6550(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00dd43f0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_00dd6570 {
    int sub_00dd4750(int, int);
};

// @baa 0x00dd6570
int UPackageMap::sub_00dd6570(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00dd6570 *)(this))->sub_00dd4750(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00dd65a0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00dd4570(int, int);
};

struct C_00dd65a0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00dd65a0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00dd65a0(void);
};

// @baa 0x00dd65a0
void C_00dd65a0::sub_00dd65a0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00dd4570(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct TConstSetBitIterator_00dd65c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd65c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd65c0& operator++();
};

TConstSetBitIterator_00dd65c0::TConstSetBitIterator_00dd65c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd65c0
TConstSetBitIterator_00dd65c0& TConstSetBitIterator_00dd65c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd6610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd6610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd6610& operator++();
};

TConstSetBitIterator_00dd6610::TConstSetBitIterator_00dd6610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd6610
TConstSetBitIterator_00dd6610& TConstSetBitIterator_00dd6610::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00dd6660 {
    int sub_00dd4800(int, int);
};

// @baa 0x00dd6660
int UPackageMap::sub_00dd6660(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00dd6660 *)(this))->sub_00dd4800(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00dd6690 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00dd4330(int, int);
};

struct C_00dd6690 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00dd6690* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00dd6690(void);
};

// @baa 0x00dd6690
void C_00dd6690::sub_00dd6690(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00dd4330(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00dd66b0
int UUIStyle::sub_00dd66b0(void)
{
    int param_1 = (int)this;

  sub_00dcfeb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd66d0
int UUIStyle::sub_00dd66d0(void)
{
    int param_1 = (int)this;

  sub_00dcff10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd66f0
int UUIStyle::sub_00dd66f0(void)
{
    int param_1 = (int)this;

  sub_00dcff70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00dd6120();
// @baa 0x00dd6710
void sub_00dd6710(void) { sub_00dd6120(); }

// @baa 0x00dd67a0
int UUIStyle::sub_00dd67a0(void)
{
    int param_1 = (int)this;

  sub_00dcffd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd67c0
int UUIStyle::sub_00dd67c0(void)
{
    int param_1 = (int)this;

  sub_00dd0030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd6830
void sub_00dd6830(void) { sub_00dd5420(); }

// @baa 0x00dd6840
void sub_00dd6840(void) { sub_00dd5490(); }

// @baa 0x00dd6850
void sub_00dd6850(void) { sub_00dd5590(); }

// @baa 0x00dd6860
void sub_00dd6860(void) { sub_00dd5600(); }

// @baa 0x00dd6870
void sub_00dd6870(void) { sub_00dd5670(); }

struct C_view_00dd6d20 {
    int sub_005dfd20(int);
};

int sub_00da0a50(...);
int sub_00dd59f0(...);
int sub_00dd5b90(...);
int sub_00dd5d10(...);
int sub_00dd5eb0(...);
// @baa 0x00dd6d20
void UUISkin::Serialize(FArchive& Ar) {
    UINT param_2 = (UINT)&Ar;
    int param_1 = (int)this;
  undefined4 uVar1;
  ((C_view_00dd6d20 *)(this))->sub_005dfd20(param_2);
  if (*(int *)(param_2 + 0x18) != 0) {
    uVar1 = sub_00dd59f0(param_2,param_1 + 0x90);
    uVar1 = sub_00dd5b90(uVar1,param_1 + 0xcc);
    uVar1 = sub_00da0a50(uVar1,param_1 + 0x108);
    uVar1 = sub_00dd5d10(uVar1,param_1 + 0x150);
    sub_00dd5eb0(uVar1,param_1 + 0x18c);
    return;
  }
  sub_00dd5d10(param_2,param_1 + 0x150);
  return;
}

// @baa 0x00dd7380
int UUIStyle::sub_00dd7380(void)
{
    int param_1 = (int)this;

  sub_00dcfeb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd73a0
int UUIStyle::sub_00dd73a0(void)
{
    int param_1 = (int)this;

  sub_00dcff10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd73c0
int UUIStyle::sub_00dd73c0(void)
{
    int param_1 = (int)this;

  sub_00dcff70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd74a0
int UUIStyle::sub_00dd74a0(void)
{
    int param_1 = (int)this;

  sub_00dcffd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd74c0
int UUIStyle::sub_00dd74c0(void)
{
    int param_1 = (int)this;

  sub_00dd0030();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dd7580
void sub_00dd7580(void) { sub_00dd5420(); }

// @baa 0x00dd7600
void sub_00dd7600(void) { sub_00dd5490(); }

// @baa 0x00dd7610
void sub_00dd7610(void) { sub_00dd5590(); }

// @baa 0x00dd7620
void sub_00dd7620(void) { sub_00dd5600(); }

// @baa 0x00dd7630
void sub_00dd7630(void) { sub_00dd5670(); }

// @baa 0x00dd7740
int UUISkin::vf_124(int a0, int a1) { return 0; }

// @baa 0x00dd8cd0
IMPLEMENT_CLASS_AT(UUIStyle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStyles.cpp", 13);

int sub_005c7a70(...);
int sub_00dd8c40(void);
// @baa 0x00dd8ce0
undefined4 UUIStyle::sub_00dd8ce0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00dd8c40();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xa0);
  }
  return param_1;
}

// @baa 0x00dd8df0
int sub_00dd8d10(void);
// @baa 0x00dd8e00
undefined4 UUISkin::sub_00dd8e00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00dd8d10();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1c8);
  }
  return param_1;
}

// @baa 0x00dd8e30
// @baa 0x00dd8ef0
// @baa 0x00dd8fb0
struct A_00dd93d0 { virtual void sub_00dd9460(); char pad[1108]; };

struct B_00dd93d0 { virtual void sub_00dd9460(); };

struct C_00dd93d0 : A_00dd93d0, B_00dd93d0 { virtual void sub_00dd9460(); C_00dd93d0(); };

C_00dd93d0::C_00dd93d0() {}

// @baa 0x00dd93d0
void C_00dd93d0::sub_00dd9460() {}

// @baa 0x00dd93e0
// @baa 0x00dd9460
struct C_00ddb360 {
    void sub_00ddb360(int);
    int sub_00ddaa80(int);
};

int sub_006311e0(...);
extern undefined4 g_020cdc6c;
extern undefined4 g_020cdd30;
// @baa 0x00ddb360
void C_00ddb360::sub_00ddb360(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  if (param_2 == 0) {
    sub_006311e0("State",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStyles.cpp"
                 ,0x93c,&g_020cdc6c);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    sub_006311e0("SourceStyle",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStyles.cpp"
                 ,0x93d,&g_020cdd30);
  }
  iVar1 = ((C_00ddb360 *)((*(char **)((char *)this + 0x14))))->sub_00ddaa80(param_2);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x18) = param_2;
  }
  return;
}

struct C_view_00ddba40 {
    int sub_00ddb3c0();
};

// @baa 0x00ddba40
UBOOL UUIStyle_Combo::IsDirty()
{
    int param_1 = (int)this;
  int iVar1;
  if ((*(byte *)(param_1 + 0x54) & 2) == 0) {
    iVar1 = ((C_view_00ddba40 *)(((char *)this + 0x84)))->sub_00ddb3c0();
    if (iVar1 == 0) {
      iVar1 = ((C_view_00ddba40 *)(((char *)this + 0x64)))->sub_00ddb3c0();
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

/* Kit gaps: FUIStyleReference has no methods; UUIStyle::GetStyleForState is declared,
 * GetStyleForStateByClass is sub_00ddac00. */
struct FUIStyleReference_ : public FUIStyleReference
{
	UUIStyle_Data* GetStyleDataByState(UUIState* StateObject) const;
	UUIStyle_Data* GetStyleDataByClass(UClass* StateClass) const;
};

// @baa 0x00ddb4e0
/* The resolved style's data for StateObject. */
UUIStyle_Data* FUIStyleReference_::GetStyleDataByState(UUIState* StateObject) const
{
	UUIStyle_Data* Result = NULL;
	if (StateObject != NULL && ResolvedStyle != NULL)
	{
		Result = ResolvedStyle->GetStyleForState(StateObject);
	}
	return Result;
}

// @baa 0x00ddb500
/* The resolved style's data for the state of class StateClass. */
UUIStyle_Data* FUIStyleReference_::GetStyleDataByClass(UClass* StateClass) const
{
	UUIStyle_Data* Result = NULL;
	if (StateClass != NULL && ResolvedStyle != NULL)
	{
		Result = ResolvedStyle->GetStyleForStateByClass(StateClass);
	}
	return Result;
}

// @baa 0x00dca790
/* Forwards to the custom text and image style data. */
void UUIStyle_Combo::vf_114()
{
	UUIStyle_Data* TextData = TextStyle.CustomStyleData;
	if (TextData)
	{
		TextData->vf_114();
	}
	UUIStyle_Data* ImageData = ImageStyle.CustomStyleData;
	if (ImageData)
	{
		ImageData->vf_114();
	}
}

extern FName g_026c4374;
	/* MatchesStyleData */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIStyle_Data_ : public UUIStyle_Data
{
	UBOOL delegateMatchesStyleData(class UUIStyle_Data* OtherStyle);
};

// @baa 0x00dc9a40
/* The script delegate's generated glue, out of line here. */
UBOOL UUIStyle_Data_::delegateMatchesStyleData(class UUIStyle_Data* OtherStyle)
{
	struct UIStyle_Data_eventMatchesStyleData_Parms
	{
		class UUIStyle_Data* OtherStyle;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.OtherStyle = OtherStyle;
	ProcessDelegate(g_026c4374, &__MatchesStyleData__Delegate, &Parms, NULL);
	return Parms.ReturnValue;
}
