// UnParticleModules.cpp (part 5 of 5): 17 functions
// Placed here by: neighbours 11, class 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00b72780
void UParticleModule::vf_120(int a0) {  }

// @baa 0x00b72790
int UParticleModule::vf_138(int a0, int a1, int a2) { return 1; }

// @baa 0x00b728c0
void UParticleModule::vf_15c(int a0) {  }

// @baa 0x00b970d0
IMPLEMENT_CLASS_AT(UParticleModuleAccelerationBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 15);

// @baa 0x00b97170
IMPLEMENT_CLASS_AT(UParticleModuleAttractorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 16);

// @baa 0x00b97230
IMPLEMENT_CLASS_AT(URParticleModuleAttractorComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6470);

// @baa 0x00b972b0
IMPLEMENT_CLASS_AT(UParticleModuleColorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 17);

// @baa 0x00b97370
IMPLEMENT_CLASS_AT(UParticleModuleColorByParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 5412);

// @baa 0x00b973f0
IMPLEMENT_CLASS_AT(UParticleModuleKillBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 18);

// @baa 0x00b97490
IMPLEMENT_CLASS_AT(UParticleModuleLifetimeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 19);

// @baa 0x00b97540
IMPLEMENT_CLASS_AT(UParticleModuleLocationBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 20);

// @baa 0x00b97600
IMPLEMENT_CLASS_AT(UParticleModuleLocationEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 756);

// @baa 0x00b976a0
IMPLEMENT_CLASS_AT(UParticleModuleLocationEmitterDirect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 857);

// @baa 0x00b97720
IMPLEMENT_CLASS_AT(UParticleModuleLocationPrimitiveBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 941);

// @baa 0x00b977f0
IMPLEMENT_CLASS_AT(UParticleModuleLocationVertex, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6717);

// @baa 0x00b97870
IMPLEMENT_CLASS_AT(UParticleModuleOrientationBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 21);

extern int g_01fede18;
struct S {
    int Object; volatile int F4; int F8; int FC; int F10;
    int sub_00b310b0();
};

// @baa 0x00b310b0
int S::sub_00b310b0()
{
    int T = (int)this;
    F4 &= 0xfffffffe;
    F8 = 0;
    Object = (int)&g_01fede18;
    FC = 0;
    F10 = 0;
    return T;
}
