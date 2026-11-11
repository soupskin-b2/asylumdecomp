// Editor_0710000.cpp (part 1 of 2): 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00715fe0
int UShaderCache::vf_000(void) { return 1; }

// @baa 0x00715ff0
bool UShaderCache::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007160b0
void sub_007160b0(void) {  }

// @baa 0x007160f0
int sub_007160f0(void) { return 1; }

// @baa 0x00716160
void __stdcall sub_00716160(int a0, int a1) {  }

extern char g_026b2834[];
// @baa 0x00716250
int sub_00716250(void) { return (int)g_026b2834; }

struct C {
    void sub_00716260();
};

// @baa 0x00716260
void C::sub_00716260(void)
{
    int param_1 = (int)this;

                    
                    
  (**(code **)(param_1 + 0x20))();
  return;
}

struct C_007162b0 {
    void sub_007162b0();
};

// @baa 0x007162b0
void C_007162b0::sub_007162b0(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}

// @baa 0x007162d0
IMPLEMENT_CLASS_AT(USkyLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SkyLightComponent.cpp", 9);

// @baa 0x007163e0
int USkyLightComponent::vf_000(void) { return 1; }

// @baa 0x007163f0
bool USkyLightComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00716490
IMPLEMENT_CLASS_AT(USphericalHarmonicLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SphericalHarmonicLightComponent.cpp", 10);

// @baa 0x00716430
FVector4 USkyLightComponent::GetPosition() const
{
	return FVector4(0,0,1,0);
}
