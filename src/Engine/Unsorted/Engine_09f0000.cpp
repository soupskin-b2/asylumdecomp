// Engine_09f0000.cpp (part 1 of 8): 104 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_009ebac0(...);
int sub_009ee5a0(void);
extern undefined4 g_026b63c0;
// @baa 0x009f0000
int sub_009f0000(void)
{
  if (g_026b63c0 == 0) {
    g_026b63c0 = sub_009ebac0(L"Engine");
    sub_009ee5a0();
  }
  return g_026b63c0;
}

int sub_009eb300(...);
int sub_009ee310(void);
extern undefined4 g_026b63bc;
// @baa 0x009f0030
int sub_009f0030(void)
{
  if (g_026b63bc == 0) {
    g_026b63bc = sub_009eb300(L"Engine");
    sub_009ee310();
  }
  return g_026b63bc;
}

int sub_009d72e0(void);
int sub_009eeb40(...);
extern undefined4 g_026b63c8;
// @baa 0x009f0060
int sub_009f0060(void)
{
  if (g_026b63c8 == 0) {
    g_026b63c8 = sub_009eeb40(L"Engine");
    sub_009d72e0();
  }
  return g_026b63c8;
}

// @baa 0x009f00d0
IMPLEMENT_CLASS_AT(AApexDestructibleActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1912);

// @baa 0x009f0180
// @baa 0x009f04e0
IMPLEMENT_CLASS_AT(ARB_RadialImpulseActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 36);

// @baa 0x009f0540
// @baa 0x009f05a0
IMPLEMENT_CLASS_AT(ARB_Thruster, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 34);

// @baa 0x009f0600
// @baa 0x009f0660
IMPLEMENT_CLASS_AT(APhysXEmitterSpawnable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 28);

// @baa 0x009f06c0
// @baa 0x009f07b0
IMPLEMENT_CLASS_AT(UApexStaticComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1350);

// @baa 0x009f08c0
bool UApexStaticComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009f0900
IMPLEMENT_CLASS_AT(UApexDynamicComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexSupport.cpp", 1367);

// @baa 0x009f0a10
bool UApexDynamicComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009f0ba0
IMPLEMENT_CLASS_AT(ARB_CylindricalForceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 39);

// @baa 0x009f0c00
// @baa 0x009f0c60
IMPLEMENT_CLASS_AT(ARB_RadialForceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 37);

// @baa 0x009f0cc0
struct C {
    void sub_009f16f0();
    int sub_009efcd0(int, int);
};

// @baa 0x009f16f0
void C::sub_009f16f0(void)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_009efcd0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view {
    int sub_009efd90(int, int);
};

// @baa 0x009f1700
undefined4 UObject::sub_009f1700(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_009efd90(param_2, param_3);
  return param_1;
}

struct C_009f1720 {
    int sub_009f1720();
};

int sub_009ea0c0(void);
// @baa 0x009f1720
int C_009f1720::sub_009f1720(void)
{
    int param_1 = (int)this;

  sub_009ea0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009f1740 {
    int sub_009f1740();
};

int sub_009ea120(void);
// @baa 0x009f1740
int C_009f1740::sub_009f1740(void)
{
    int param_1 = (int)this;

  sub_009ea120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_009eec00(...);
int sub_009f07b0(void);
extern undefined4 g_026b63cc;
// @baa 0x009f18d0
int sub_009f18d0(void)
{
  if (g_026b63cc == 0) {
    g_026b63cc = sub_009eec00(L"Engine");
    sub_009f07b0();
  }
  return g_026b63cc;
}

struct C_009f1b50 {
    undefined4 sub_009f1b50(byte);
};

int sub_0053dfa0(...);
int sub_009f1b00(void);
// @baa 0x009f1b50
undefined4 C_009f1b50::sub_009f1b50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009f1b00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_009f1610();
// @baa 0x009f31c0
void sub_009f31c0(void) { sub_009f1610(); }

void sub_009f1680();
// @baa 0x009f31d0
void sub_009f31d0(void) { sub_009f1680(); }

// @baa 0x009f3900
int UObject::sub_009f3900(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_009efd90(param_2, param_4);
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
    void sub_009efcd0(int, int);
};

struct C_009f3930 {
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
    void sub_009f3930(void);
};

// @baa 0x009f3930
void C_009f3930::sub_009f3930(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_009efcd0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_009f3950 {
    int sub_009f3950();
};

// @baa 0x009f3950
int C_009f3950::sub_009f3950(void)
{
    int param_1 = (int)this;

  sub_009ea0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009f3970 {
    int sub_009f3970();
};

// @baa 0x009f3970
int C_009f3970::sub_009f3970(void)
{
    int param_1 = (int)this;

  sub_009ea120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_009eed80(...);
int sub_009f2390(void);
extern undefined4 g_026b63d4;
// @baa 0x009f49d0
int sub_009f49d0(void)
{
  if (g_026b63d4 == 0) {
    g_026b63d4 = sub_009eed80(L"Engine");
    sub_009f2390();
  }
  return g_026b63d4;
}

int sub_009d76a0(void);
int sub_009f2640(...);
extern undefined4 g_026b63d8;
// @baa 0x009f4a00
int sub_009f4a00(void)
{
  if (g_026b63d8 == 0) {
    g_026b63d8 = sub_009f2640(L"Engine");
    sub_009d76a0();
  }
  return g_026b63d8;
}

// @baa 0x009f4a30
void sub_009f4a30(void) { sub_009f1610(); }

// @baa 0x009f4a40
void sub_009f4a40(void) { sub_009f1680(); }

// @baa 0x009f4b70
IMPLEMENT_CLASS_AT(AKActorSpawnable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 32);

// @baa 0x009f4c80
bool AKActorSpawnable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_009f4d80 {
    int sub_009f4d80();
};

// @baa 0x009f4d80
int C_009f4d80::sub_009f4d80(void)
{
    int param_1 = (int)this;

  sub_009ea0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009f4da0 {
    int sub_009f4da0();
};

// @baa 0x009f4da0
int C_009f4da0::sub_009f4da0(void)
{
    int param_1 = (int)this;

  sub_009ea120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x009f6160
void sub_009f6160(void) { sub_009f1610(); }

// @baa 0x009f6170
void sub_009f6170(void) { sub_009f1680(); }

// @baa 0x009f6d30
void sub_009f6d30(void) {  }

struct C_009f70e0 {
    int Unk0;
    int Unk4;
    int sub_009f70e0();
};

// @baa 0x009f70e0
int C_009f70e0::sub_009f70e0()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_009f70f0 { int sub_009f70f0(void); };

// @baa 0x009f70f0
int C_009f70f0::sub_009f70f0(void) { return *(int*)((char*)this + 4); }

int sub_009d87d0(void);
int sub_009f3240(...);
extern undefined4 g_026b6414;
// @baa 0x009f7160
int sub_009f7160(void)
{
  if (g_026b6414 == 0) {
    g_026b6414 = sub_009f3240(L"Engine");
    sub_009d87d0();
  }
  return g_026b6414;
}

struct C_009f7190 { C_009f7190* sub_009f7190(void); };

// @baa 0x009f7190
C_009f7190* C_009f7190::sub_009f7190(void) { return this; }

struct C_009f71a0 {
    undefined4 sub_009f71a0(int *);
};

// @baa 0x009f71a0
undefined4 C_009f71a0::sub_009f71a0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// @baa 0x009f71f0
int sub_009f71f0(int param_1, int param_2)
{
  return param_2 * 0x17 + param_1;
}

struct C_009f7220 { C_009f7220* sub_009f7220(int a0); };

// @baa 0x009f7220
C_009f7220* C_009f7220::sub_009f7220(int a0) { return this; }

// @baa 0x009f7270
int sub_009f7270(int a0, int a1) { return a1; }

// @baa 0x009f7280
int sub_009f7280(int a0, int a1) { return a1; }

// @baa 0x009f72b0
IMPLEMENT_CLASS_AT(URB_Handle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 27);

// @baa 0x009f7310
// @baa 0x009f7340
int sub_009f7340(int a0, int a1) { return a1; }

// @baa 0x009f7350
int sub_009f7350(int a0, int a1) { return a1; }

// @baa 0x009f7360
int sub_009f7360(int a0, int a1) { return a1; }

// @baa 0x009f74d0
IMPLEMENT_CLASS_AT(UPhysicalMaterialPropertyBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 22);

// @baa 0x009f74f0
undefined4 sub_009f74f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x009f7500
int sub_009f7500(int a0, int a1) { return a1; }

// @baa 0x009f7510
int sub_009f7510(int a0, int a1) { return a1; }

int sub_00a31ec0(void);
int sub_00a376f0(...);
extern undefined4 g_026b682c;
// @baa 0x009f75d0
int sub_009f75d0(void)
{
  if (g_026b682c == 0) {
    g_026b682c = sub_00a376f0(L"Engine");
    sub_00a31ec0();
  }
  return g_026b682c;
}

int sub_00a31cf0(void);
int sub_00a370f0(...);
extern undefined4 g_026b680c;
// @baa 0x009f7600
int sub_009f7600(void)
{
  if (g_026b680c == 0) {
    g_026b680c = sub_00a370f0(L"Engine");
    sub_00a31cf0();
  }
  return g_026b680c;
}

struct C_009f7690 {
    undefined4 sub_009f7690();
};

// @baa 0x009f7690
undefined4 C_009f7690::sub_009f7690(void)
{
    float * param_1 = (float *)this;
  if (((*param_1 == 0.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) {
    return 1;
  }
  return 0;
}

struct C_009f77d0 {
    float10 sub_009f77d0(float *);
};

// @baa 0x009f77d0
float10 C_009f77d0::sub_009f77d0(float * param_2)
{
    float * param_1 = (float *)this;

  return (float10)*param_2 * (float10)*param_1 +
         (float10)param_2[1] * (float10)param_1[1] +
         (float10)param_2[2] * (float10)param_1[2] + (float10)param_2[3] * (float10)param_1[3];
}

extern char g_01fb3844[];
struct C_009f88c0 { void sub_009f88c0(void); };

// @baa 0x009f88c0
void C_009f88c0::sub_009f88c0(void) { *(int*)((char*)this + 0) = (int)g_01fb3844; }

extern char g_01fa3e7c[];
struct C_009f8d60 { void sub_009f8d60(void); };

// @baa 0x009f8d60
void C_009f8d60::sub_009f8d60(void) { *(int*)((char*)this + 0) = (int)g_01fa3e7c; }

// @baa 0x009f8df0
int sub_009f8df0(int a0, int a1) { return a1; }

// @baa 0x009f8e00
int sub_009f8e00(int a0, int a1) { return a1; }

// @baa 0x009f8e10
int sub_009f8e10(int a0, int a1) { return a1; }

// @baa 0x009f8e20
IMPLEMENT_CLASS_AT(UPhysicsAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 15);

// @baa 0x009f8f30
int UPhysicsAsset::vf_000(void) { return 1; }

// @baa 0x009f8f40
bool UPhysicsAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009f8f80
IMPLEMENT_CLASS_AT(URB_BodySetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 16);

// @baa 0x009f9090
int URB_BodySetup::vf_000(void) { return 1; }

// @baa 0x009f90a0
bool URB_BodySetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009f9500
// @baa 0x009f9610
int UPhysicalMaterialPropertyBase::vf_000(void) { return 1; }

// @baa 0x009f9620
bool UPhysicalMaterialPropertyBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_009fa5c0();
// @baa 0x009fa990
void sub_009fa990(void) { sub_009fa5c0(); }

struct C_009fd440 { C_009fd440* sub_009fd440(int a0); };

// @baa 0x009fd440
C_009fd440* C_009fd440::sub_009fd440(int a0) { return this; }

struct Target {
    virtual ~Target() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3(int x, int y, int z) = 0;
};

struct C_009fd4f0 {
    char pad[4];
    Target* p; // offset 4

    void sub_009fd4f0(int a, int b, int c) {
        p->v3(a, b, c);
    }

    void caller() {
        sub_009fd4f0(1, 2, 3);
    }
};

extern C_009fd4f0* g_ptr;
// @baa 0x009fd4f0
void ref_user() { g_ptr->caller(); }

extern char g_01fb3884[];
struct C_009fd500 { C_009fd500* sub_009fd500(void); };

// @baa 0x009fd500
C_009fd500* C_009fd500::sub_009fd500(void) { *(int*)((char*)this + 0) = (int)g_01fb3884; return this; }

struct C_009fd510 { void sub_009fd510(void); };

// @baa 0x009fd510
void C_009fd510::sub_009fd510(void) { *(int*)((char*)this + 0) = (int)g_01fb3884; }

struct C_009fd520 {
    undefined4 * sub_009fd520(byte);
};

// @baa 0x009fd520
undefined4 * C_009fd520::sub_009fd520(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fb3884);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009fd5a0 { int sub_009fd5a0(void); };

// @baa 0x009fd5a0
int C_009fd5a0::sub_009fd5a0(void) { return *(int*)((char*)this + 4); }

extern char g_01fb38d8[];
struct C_009fd5b0 { C_009fd5b0* sub_009fd5b0(void); };

// @baa 0x009fd5b0
C_009fd5b0* C_009fd5b0::sub_009fd5b0(void) { *(int*)((char*)this + 0) = (int)g_01fb38d8; return this; }

struct C_009fd5c0 { int sub_009fd5c0(void); };

// @baa 0x009fd5c0
int C_009fd5c0::sub_009fd5c0(void) { return *(int*)((char*)this + 4); }

struct C_009fd5d0 { void sub_009fd5d0(void); };

// @baa 0x009fd5d0
void C_009fd5d0::sub_009fd5d0(void) { *(int*)((char*)this + 0) = (int)g_01fb3884; }

struct C_009fd5e0 {
    undefined4 * sub_009fd5e0(byte);
};

// @baa 0x009fd5e0
undefined4 * C_009fd5e0::sub_009fd5e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fb3884);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct Target_009fd600 {
    virtual int v0();
    virtual int v1(int a);
};

struct S {
    int f0;
    Target_009fd600 *f1;
    int sub_009fd600(int a);
};

// @baa 0x009fd600
int S::sub_009fd600(int a) { return f1->v1(a); }

// @baa 0x009fd610
IMPLEMENT_CLASS_AT(URB_RadialImpulseComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 26);

// @baa 0x009fd720
int URB_RadialImpulseComponent::vf_000(void) { return 1; }

// @baa 0x009fd730
bool URB_RadialImpulseComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009fd770
// @baa 0x009fd880
int URB_Handle::vf_000(void) { return 1; }

// @baa 0x009fd890
bool URB_Handle::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009fd8d0
IMPLEMENT_CLASS_AT(URB_Spring, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 28);

// @baa 0x009fd9e0
int URB_Spring::vf_000(void) { return 1; }

// @baa 0x009fd9f0
bool URB_Spring::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009fda30
IMPLEMENT_CLASS_AT(URB_ForceComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 31);

// @baa 0x009fdb40
int URB_ForceComponent::vf_000(void) { return 1; }

// @baa 0x009fdb50
bool URB_ForceComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009fdb90
int URB_ForceComponentCylindrical::vf_000(void) { return 1; }

// @baa 0x009fdba0
int URB_ForceComponentRadial::vf_000(void) { return 1; }
