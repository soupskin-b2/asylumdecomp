// Texture.cpp (part 1 of 3): 12 functions
// Placed here by: class 9, neighbours 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007173d0
int UTexture::vf_000(void) { return 1; }

struct SubB { int __thiscall sub_0056bfe0(void); };

// @baa 0x00717420
void UTexture::StripData(UE3::EPlatformType arg)
{
    ((SubB*)((char*)this + 0x54))->sub_0056bfe0();
}

// @baa 0x0071ef30
int UTexture::vf_124(void) { return 0; }

// @baa 0x0071ef40
byte UTexture::vf_128(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x32) & 1;
}

// @baa 0x0071ef50
FLOAT UTexture::vf_12c() {
  return (float10)1;
}

// @baa 0x0071ef60
FLOAT UTexture::GetSurfaceWidth() {
  return (float10)0;
}

// @baa 0x0071ef70
DOUBLE UTexture::GetSurfaceHeight() {
  return (float10)0;
}

int sub_00630f20(...);
extern undefined4 g_026667a8;
// @baa 0x0071ef80
FTextureResource* UTexture::CreateResource() {
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UTexture::CreateResource");
  return 0;
}

// @baa 0x007240f0
IMPLEMENT_CLASS_AT(UTexture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Texture.cpp", 12);

// @baa 0x00724d20
// @baa 0x00760ef0
int UTexture2DDynamic::GetMaterialType(void) { return 16; }

// @baa 0x00760f60
IMPLEMENT_CLASS_AT(UTexture2DDynamic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Texture2DDynamic.cpp", 8);
