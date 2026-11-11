// Engine_0710000.cpp (part 6 of 7): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct USpotLightComponent {
    int GetLightType();
};

// @baa 0x00716870
int USpotLightComponent::GetLightType()
{ return 4; }

struct UTexture2DComposite {
    float10 GetSurfaceHeight();
};

// @baa 0x00718050
float10 UTexture2DComposite::GetSurfaceHeight()
{
  return (float10)1;
}
