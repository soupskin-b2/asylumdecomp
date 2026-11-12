// UnGeomModifiers.cpp: 107 functions
// Placed here by: neighbours 49, callers 12, file 12, class 10.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f9da80
void UGeomModifier::vf_118(void) {  }

// @baa 0x00f9da90
int UGeomModifier::vf_10c(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x00f9daa0
int UGeomModifier::vf_11c(void) { return 0; }

// @baa 0x00f9dab0
int UGeomModifier::vf_114(int a0) { return 1; }

struct C {
    undefined4 sub_00f9dac0();
};

// @baa 0x00f9dac0
undefined4 C::sub_00f9dac0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffd;
  return 1;
}

extern char g_026cdc94[];
// @baa 0x00f9daf0
int sub_00f9daf0(void) { return (int)g_026cdc94; }

// @baa 0x00f9f440
IMPLEMENT_CLASS_AT(UGeomModifier, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 9);

// @baa 0x00f9f550
int UGeomModifier::vf_000(void) { return 1; }

// @baa 0x00f9f560
bool UGeomModifier::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f9f5a0
int UGeomModifier_Edit::vf_000(void) { return 1; }

// @baa 0x00f9f5b0
int UGeomModifier_Extrude::vf_000(void) { return 1; }

// @baa 0x00f9f5c0
int UGeomModifier_Clip::vf_000(void) { return 1; }

// @baa 0x00f9f5d0
int UGeomModifier_Lathe::vf_000(void) { return 1; }

// @baa 0x00f9f5e0
int UGeomModifier_Delete::vf_000(void) { return 1; }

// @baa 0x00f9f5f0
int UGeomModifier_Create::vf_000(void) { return 1; }

// @baa 0x00f9f600
int UGeomModifier_Flip::vf_000(void) { return 1; }

// @baa 0x00f9f610
int UGeomModifier_Split::vf_000(void) { return 1; }

// @baa 0x00f9f620
int UGeomModifier_Triangulate::vf_000(void) { return 1; }

// @baa 0x00f9f630
int UGeomModifier_Turn::vf_000(void) { return 1; }

// @baa 0x00f9f640
int UGeomModifier_Weld::vf_000(void) { return 1; }

// @baa 0x00fa4f40
// @baa 0x00fa4fb0
int sub_005c7a20(void);
extern undefined * g_021773f8;
// @baa 0x00fa4fd0
undefined4 * UObject::sub_00fa4fd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021773f8);
  return param_1;
}

// @baa 0x00fa4ff0
IMPLEMENT_CLASS_AT(UGeomModifier_Edit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 10);

// @baa 0x00fa5050
extern undefined * g_02177518;
// @baa 0x00fa5070
undefined4 * UObject::sub_00fa5070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177518);
  return param_1;
}

extern undefined * g_02177638;
// @baa 0x00fa5090
undefined4 * UObject::sub_00fa5090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177638);
  return param_1;
}

// @baa 0x00fa50b0
IMPLEMENT_CLASS_AT(UGeomModifier_Clip, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 12);

// @baa 0x00fa5110
extern undefined * g_02177758;
// @baa 0x00fa5130
undefined4 * UObject::sub_00fa5130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177758);
  return param_1;
}

// @baa 0x00fa5150
IMPLEMENT_CLASS_AT(UGeomModifier_Create, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 15);

// @baa 0x00fa51b0
extern undefined * g_02177878;
// @baa 0x00fa51d0
undefined4 * UObject::sub_00fa51d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177878);
  return param_1;
}

// @baa 0x00fa51f0
IMPLEMENT_CLASS_AT(UGeomModifier_Delete, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 14);

// @baa 0x00fa5250
extern undefined * g_02177998;
// @baa 0x00fa5270
undefined4 * UObject::sub_00fa5270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177998);
  return param_1;
}

// @baa 0x00fa5290
IMPLEMENT_CLASS_AT(UGeomModifier_Extrude, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 11);

// @baa 0x00fa52f0
extern undefined * g_02177ab8;
// @baa 0x00fa5310
undefined4 * UObject::sub_00fa5310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177ab8);
  return param_1;
}

// @baa 0x00fa5330
IMPLEMENT_CLASS_AT(UGeomModifier_Flip, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 16);

// @baa 0x00fa5390
extern undefined * g_02177bd8;
// @baa 0x00fa53b0
undefined4 * UObject::sub_00fa53b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177bd8);
  return param_1;
}

// @baa 0x00fa53d0
IMPLEMENT_CLASS_AT(UGeomModifier_Lathe, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 13);

// @baa 0x00fa5430
extern undefined * g_02177cf8;
// @baa 0x00fa5450
undefined4 * UObject::sub_00fa5450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177cf8);
  return param_1;
}

// @baa 0x00fa5470
IMPLEMENT_CLASS_AT(UGeomModifier_Split, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 17);

// @baa 0x00fa54d0
extern undefined * g_02177e18;
// @baa 0x00fa54f0
undefined4 * UObject::sub_00fa54f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177e18);
  return param_1;
}

// @baa 0x00fa5510
IMPLEMENT_CLASS_AT(UGeomModifier_Triangulate, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 18);

// @baa 0x00fa5570
extern undefined * g_02177f38;
// @baa 0x00fa5590
undefined4 * UObject::sub_00fa5590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02177f38);
  return param_1;
}

// @baa 0x00fa55b0
IMPLEMENT_CLASS_AT(UGeomModifier_Turn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 19);

// @baa 0x00fa5610
extern undefined * g_02178058;
// @baa 0x00fa5630
undefined4 * UObject::sub_00fa5630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02178058);
  return param_1;
}

// @baa 0x00fa5650
IMPLEMENT_CLASS_AT(UGeomModifier_Weld, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnGeomModifiers.cpp", 20);

// @baa 0x00fa56b0
void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00fa99c0 { void* Data; int Num; int Max; void sub_00fa99c0(); };

// @baa 0x00fa99c0
void C_00fa99c0::sub_00fa99c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00fac2c0
// @baa 0x00fac2e0
// @baa 0x00fac300
// @baa 0x00fac320
// @baa 0x00fac340
// @baa 0x00fac360
// @baa 0x00fac380
// @baa 0x00fac3a0
// @baa 0x00fac3c0
// @baa 0x00fac3e0
// @baa 0x00fac400
// @baa 0x00fac420
// @baa 0x00fad9b0
// @baa 0x00fada70
// @baa 0x00fadb30
// @baa 0x00fadbf0
// @baa 0x00fadcb0
// @baa 0x00fadd70
// @baa 0x00fade30
// @baa 0x00fadef0
// @baa 0x00fadfb0
// @baa 0x00fae070
// @baa 0x00fae130
// @baa 0x00fae1f0
void sub_00fbd630();
// @baa 0x00fbf540
void sub_00fbf540(void) { sub_00fbd630(); }

int __stdcall sub_00fc1ff0(int, int, int);
// @baa 0x00fca2d0
void UGeomModifier_Lathe::vf_118(void)
{
    int param_1 = (int)this;
  sub_00fc1ff0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
               *(undefined1 *)(param_1 + 0x48));
  return;
}

// @baa 0x00f9db80
INT __stdcall sub_00f9db80(INT Value)
{
    return Value == 3;
}

// @baa 0x00f9dc10
INT __stdcall sub_00f9dc10(INT Value)
{
    return Value == 3;
}

// @baa 0x00fb47a0

// @baa 0x00fb48b0
bool UGeomModifier_Edit::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb7b70

// @baa 0x00fb7c80
bool UGeomModifier_Extrude::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb7cc0

// @baa 0x00fb7dd0
bool UGeomModifier_Clip::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb7e10

// @baa 0x00fb7f20
bool UGeomModifier_Lathe::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb7f60

// @baa 0x00fb8070
bool UGeomModifier_Delete::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb80b0

// @baa 0x00fb81c0
bool UGeomModifier_Create::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb8200

// @baa 0x00fb8310
bool UGeomModifier_Flip::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb8350

// @baa 0x00fb8460
bool UGeomModifier_Split::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb84a0

// @baa 0x00fb85b0
bool UGeomModifier_Triangulate::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb85f0

// @baa 0x00fb8700
bool UGeomModifier_Turn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fb8740

// @baa 0x00fb8850
bool UGeomModifier_Weld::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
