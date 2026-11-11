// Engine_0710000.cpp (part 6 of 7): 4 functions
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

struct C
{
    INT Value;

    INT sub_007183b0();
};

// @baa 0x007183b0
INT C::sub_007183b0()
{
    return Value == 0 ? -1 : 0;
}

struct C_00718c40
{
    char pad_00[0x4];
    WORD First;
    char pad_6[0x2];
    WORD Second;

    C_00718c40* sub_00718c40();
};

// @baa 0x00718c40
C_00718c40* C_00718c40::sub_00718c40()
{
    First = 0;
    Second = 0;
    return this;
}
