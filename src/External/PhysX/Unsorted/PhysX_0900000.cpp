// PhysX_0900000.cpp: 15 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0090dac0
int UWaveFormBase::vf_000(void) { return 1; }

// @baa 0x0090dad0
bool UWaveFormBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090db10
int UAnimNotify_ForceField::vf_000(void) { return 1; }

struct C { C* sub_0090db90(void); };

// @baa 0x0090db90
C* C::sub_0090db90(void) { return this; }

struct C_0090dba0 { int a; C_0090dba0(int); };

// @baa 0x0090dba0
C_0090dba0::C_0090dba0(int x) : a(x) {}

struct C_0090dbe0 { C_0090dbe0* sub_0090dbe0(void); };

// @baa 0x0090dbe0
C_0090dbe0* C_0090dbe0::sub_0090dbe0(void) { return this; }

struct V_0090dc10 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void g(int);
    void sub_0090dc10();
};

// @baa 0x0090dc10
void V_0090dc10::sub_0090dc10() { g(9); }

extern char g_024088e4[];
struct C_0090dc50 { void sub_0090dc50(void); };

// @baa 0x0090dc50
void C_0090dc50::sub_0090dc50(void) { *(int*)((char*)this + 0) = (int)g_024088e4; }

struct C_0090dc60 {
    float10 sub_0090dc60();
};

// @baa 0x0090dc60
float10 C_0090dc60::sub_0090dc60(void)
{
    float * param_1 = (float *)this;

  return (float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1] +
         (float10)param_1[2] * (float10)param_1[2];
}

// @baa 0x0090de60
void sub_0090de60(void) {  }

struct C_0090de70 { void sub_0090de70(void); };

// @baa 0x0090de70
void C_0090de70::sub_0090de70(void) { *(int*)((char*)this + 0) = (int)g_024088e4; }

// @baa 0x0090dfd0
IMPLEMENT_CLASS_AT(USkeletalMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalComponent.cpp", 74);

// @baa 0x0090e0e0
int USkeletalMeshComponent::vf_000(void) { return 1; }

// @baa 0x0090e0f0
bool USkeletalMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090e160
void USkeletalMeshComponent::SetParentToWorld(const FMatrix& ParentToWorld)
{
	// If getting transform from ParentAnimComponent, ignore the transform passed in.
	if (bTransformFromAnimParent && ParentAnimComponent)
	{
		return;
	}
	Super::SetParentToWorld(ParentToWorld);
}
