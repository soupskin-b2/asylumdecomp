// Engine_06d0000.cpp (part 3 of 4): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UPointLightComponent {
    int GetLightType();
};

// @baa 0x006daa20
int UPointLightComponent::GetLightType()
{ return 3; }

struct C
{
    char pad_00[0x4];
    WORD First;
    char pad_6[0x4];
    WORD Second;

    C* sub_006dff00();
};

// @baa 0x006dff00
C* C::sub_006dff00()
{
    First = 0;
    Second = 0;
    return this;
}

struct Object
{
    char pad_00[0x19c];
    BYTE Value;
};

struct C_006d9a80
{
    char pad_00[0xb4];
    Object* Pointer;

    INT sub_006d9a80();
};

// @baa 0x006d9a80
INT C_006d9a80::sub_006d9a80()
{
    return Pointer->Value;
}

struct Object_006d9a90
{
    char pad_00[0x19d];
    BYTE Value;
};

struct C_006d9a90
{
    char pad_00[0xb4];
    Object_006d9a90* Pointer;

    INT sub_006d9a90();
};

// @baa 0x006d9a90
INT C_006d9a90::sub_006d9a90()
{
    return Pointer->Value;
}
