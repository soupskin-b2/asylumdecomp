// Engine_0660000.cpp: 2 functions
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
