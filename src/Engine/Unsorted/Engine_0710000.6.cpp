// Engine_0710000.cpp (part 6 of 7): 8 functions
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

struct C_007159c0
{
    double First;
    INT Value_08;

    C_007159c0* sub_007159c0();
};

// @baa 0x007159c0
C_007159c0* C_007159c0::sub_007159c0()
{
    First = 0.0;
    Value_08 = 0;
    return this;
}

struct Sub
{
    void sub_00715940();
};

struct C_00715a50
{
    INT pad_00;
    Sub* Object;

    INT sub_00715a50();
};

// @baa 0x00715a50
INT C_00715a50::sub_00715a50()
{
    Object->sub_00715940();
    return 8;
}

struct Sub_0071d490
{
    void sub_00717f70();
};

struct C_0071d490
{
    INT pad_00;
    Sub_0071d490* Object;

    INT sub_0071d490();
};

// @baa 0x0071d490
INT C_0071d490::sub_0071d490()
{
    Object->sub_00717f70();
    return 8;
}

// @baa 0x007197e0
UINT __cdecl sub_007197e0(UINT A, UINT B)
{
    return A <= B ? A : B;
}
