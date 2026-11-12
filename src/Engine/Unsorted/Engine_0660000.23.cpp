// Engine_0660000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern "C" int sub_00630f20(int, const wchar_t*, const wchar_t*);
extern int g_026667a8;
struct AnimationEncodingFormat
{
    virtual INT ByteSwapTranslationOut(INT a, INT b, INT c, INT d);
};

// @baa 0x006637d0
INT AnimationEncodingFormat::ByteSwapTranslationOut(INT a, INT b, INT c, INT d)
{
    return sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)",
                        L"AnimationEncodingFormat::ByteSwapTranslationOut");
}

struct C
{
    void sub_00659c70(INT* Arg);

    void sub_00665c50(INT Value, INT Other);
};

// @baa 0x00665c50
void C::sub_00665c50(INT Value, INT)
{
    sub_00659c70(&Value);
}

struct C_00665db0
{
    char pad_0[0x60];
    INT Value_60;
    char pad_64[0xc];
    INT Value_70;
    INT Value_74;

    C_00665db0* sub_00665db0();
};

// @baa 0x00665db0
C_00665db0* C_00665db0::sub_00665db0()
{
    Value_60 = 0;
    Value_70 = 0;
    Value_74 = 0;
    return this;
}

struct C_00666770
{
    char pad_0[0x34];
    INT Value_34;
    INT Value_38;
    INT Value_3c;

    C_00666770* sub_00666770();
};

// @baa 0x00666770
C_00666770* C_00666770::sub_00666770()
{
    Value_34 = 0;
    Value_38 = 0;
    Value_3c = 0;
    return this;
}
