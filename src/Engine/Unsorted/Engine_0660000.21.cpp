// Engine_0660000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern "C" int sub_00630f20(int, const wchar_t*, const wchar_t*);
extern int g_026667a8;
struct AnimationEncodingFormat
{
    virtual INT ByteSwapTranslationIn(INT a, INT b, INT c, INT d);
};

// @baa 0x00663790
INT AnimationEncodingFormat::ByteSwapTranslationIn(INT a, INT b, INT c, INT d)
{
    return sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)",
                        L"AnimationEncodingFormat::ByteSwapTranslationIn");
}

static void sub_00663780()
{
    AnimationEncodingFormat AEF;
    AEF.ByteSwapTranslationIn(0, 0, 0, 0);
}
