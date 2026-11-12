// UnUIEditorProperties.cpp: 56 functions
// Placed here by: neighbours 14, callers 7, file 7, class 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 * sub_011f9930(int, int, undefined4);
    int sub_011f7780();
};

// @baa 0x011f9930
undefined4 * C::sub_011f9930(int param_2, int param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  if ((param_3 == 0) && (param_2 != 0)) {
    param_1[3] = *(undefined4 *)(param_2 + 0x174);
  }
  ((C *)(this))->sub_011f7780();
  return param_1;
}

void sub_011f7810();
// @baa 0x011f9980
void sub_011f9980(void) { sub_011f7810(); }

// @baa 0x014c7570
IMPLEMENT_CLASS_AT(UUITexture_CustomDrawProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 19);

// @baa 0x014c7590
IMPLEMENT_CLASS_AT(UPlayerInputMask_CustomDrawProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 20);

// @baa 0x014c75b0
IMPLEMENT_CLASS_AT(UUITexture_CustomInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 18);

// @baa 0x014c76c0
int UUITexture_CustomInputProxy::vf_000(void) { return 1; }

// @baa 0x014c76d0
bool UUITexture_CustomInputProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c7710
// @baa 0x014c77d0
// @baa 0x014c78e0
int UUITexture_CustomDrawProxy::vf_000(void) { return 1; }

// @baa 0x014c78f0
bool UUITexture_CustomDrawProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c7930
void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_014ce4e0 { void* Data; int Num; int Max; void sub_014ce4e0(); };

// @baa 0x014ce4e0
void C_014ce4e0::sub_014ce4e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014ce540 { void* Data; int Num; int Max; void sub_014ce540(); };

// @baa 0x014ce540
void C_014ce540::sub_014ce540() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x014ce5a0
void __stdcall sub_014ce5a0(void *a, void *b)
{
}

// @baa 0x014d4ce0
// @baa 0x014d4d40
struct C_014d4d60 {
    undefined4 * sub_014d4d60();
};

int sub_005c7a20(void);
extern undefined * g_022ba620;
// @baa 0x014d4d60
undefined4 * C_014d4d60::sub_014d4d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (undefined4)(&g_022ba620);
  return param_1;
}

// @baa 0x014d4d80
IMPLEMENT_CLASS_AT(UPlayerInputMask_CustomInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 21);

// @baa 0x014d4de0
struct C_014d4e00 {
    undefined4 * sub_014d4e00();
};

extern undefined * g_022ba768;
// @baa 0x014d4e00
undefined4 * C_014d4e00::sub_014d4e00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (undefined4)(&g_022ba768);
  return param_1;
}

// @baa 0x014d4e20
int UCustomInputProxy_Base::vf_110(void) { return 0; }

// @baa 0x014d4e30
IMPLEMENT_CLASS_AT(UCustomInputProxy_Base, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 25);

// @baa 0x014d4e90
// @baa 0x014d7ae0
IMPLEMENT_CLASS_AT(UUIState_CustomInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 22);

// @baa 0x014d7b10
IMPLEMENT_CLASS_AT(UUIStateClass_CustomInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 23);

// @baa 0x014d7b40
// @baa 0x014d7b70
// @baa 0x014d7ba0
// @baa 0x014d7bd0
// @baa 0x014d7c90
// @baa 0x014d7d50
// @baa 0x014d7e10
// @baa 0x014d7ed0

// @baa 0x014c5980
int sub_014c5980(int a0, int a1) { return a1; }

// @baa 0x014c5990
int sub_014c5990(int a0, int a1) { return a1; }

// @baa 0x014c59a0
int sub_014c59a0(int a0, int a1) { return a1; }

extern undefined * g_022b9258;
// @baa 0x014c59b0
undefined4 * UObject::sub_014c59b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b9258);
  return param_1;
}

// @baa 0x014c5a60
int sub_014c5a60(int a0, int a1) { return a1; }

extern char g_026dde74[];
// @baa 0x014c5a70
int sub_014c5a70(void) { return (int)g_026dde74; }

extern char g_025e9400[];
// @baa 0x014c5c70
int sub_014c5c70(void) { return (int)g_025e9400; }

extern char g_026dde8c[];
// @baa 0x014c5c80
int sub_014c5c80(void) { return (int)g_026dde8c; }

// @baa 0x014c7b50

// @baa 0x014c7c60
int UPlayerInputMask_CustomInputProxy::vf_000(void) { return 1; }

// @baa 0x014c7c70
bool UPlayerInputMask_CustomInputProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c7cb0

// @baa 0x014c7dc0
int UUIState_CustomInputProxy::vf_000(void) { return 1; }

// @baa 0x014c7dd0
bool UUIState_CustomInputProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c7e10

// @baa 0x014c7f20
int UUIStateClass_CustomInputProxy::vf_000(void) { return 1; }

// @baa 0x014c7f30
bool UUIStateClass_CustomInputProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014c7f70

// @baa 0x014c8080
int UCustomInputProxy_Base::vf_000(void) { return 1; }

// @baa 0x014c8090
bool UCustomInputProxy_Base::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_014d4c10 {
    undefined4 * sub_014d4c10();
};

extern undefined * g_022ba390;
// @baa 0x014d4c10
undefined4 * C_014d4c10::sub_014d4c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (undefined4)(&g_022ba390);
  return param_1;
}

struct C_014d4cb0 {
    undefined4 * sub_014d4cb0();
};

extern undefined * g_022ba4d8;
// @baa 0x014d4cb0
undefined4 * C_014d4cb0::sub_014d4cb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (undefined4)(&g_022ba4d8);
  return param_1;
}
