// ParticleModules_Event.cpp: 25 functions
// Placed here by: class 12, callers 4, file 4, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00b32f70
int UParticleModuleEventGenerator::vf_000(void) { return 1; }

// @baa 0x00b32f80
void __stdcall sub_00b32f80(int a0, int a1, int a2) {  }

// @baa 0x00b32f90
void __stdcall sub_00b32f90(int a0, int a1, int a2) {  }

// @baa 0x00b32fa0
int UParticleModuleEventGenerator::vf_114(int a0) { return 0; }

// @baa 0x00b32fb0
int UParticleModuleEventGenerator::vf_118(int a0) { return 24; }

// @baa 0x00b32fc0
void UParticleModuleEventGenerator::vf_168(void) {  }

// @baa 0x00b333e0
void __stdcall sub_00b333e0(int a0, int a1, int a2) {  }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00b3c2d0(); };

// @baa 0x00b3c2d0
void C::sub_00b3c2d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00b40d00
IMPLEMENT_CLASS_AT(UParticleModuleEventBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Event.cpp", 11);

int sub_005c7a20(void);
extern const unsigned char g_01fef1f0;

// @baa 0x00b40d20
UINT* UObject::sub_00b40d20(void)
{
	sub_005c7a20();
	*(const void**)this = &g_01fef1f0;
	return (UINT*)this;
}

// @baa 0x00b40d40
IMPLEMENT_CLASS_AT(UParticleModuleEventGenerator, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Event.cpp", 16);

// @baa 0x00b40db0
// @baa 0x00b40dd0
IMPLEMENT_CLASS_AT(UParticleModuleEventReceiverBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Event.cpp", 301);

// @baa 0x00b41930
// @baa 0x00b419f0
// @baa 0x00b43850
// @baa 0x00b48850
// @baa 0x00b48910
// @baa 0x00b48a20
bool UParticleModuleEventGenerator::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b4a880
IMPLEMENT_CLASS_AT(UParticleModuleEventReceiverSpawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Event.cpp", 306);

// @baa 0x00b4b130

// @baa 0x00b32e10

// @baa 0x00b32f20
int UParticleModuleEventBase::vf_000(void) { return 1; }

// @baa 0x00b32f30
bool UParticleModuleEventBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern const unsigned char g_01fef7a0;

// @baa 0x00b43870
UINT* UObject::sub_00b43870(void)
{
	sub_005c7a20();
	*(const void**)this = &g_01fef7a0;
	return (UINT*)this;
}
