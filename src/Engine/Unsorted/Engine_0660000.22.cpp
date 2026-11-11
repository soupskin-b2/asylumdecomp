// Engine_0660000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern "C" int sub_00630f20(int, const wchar_t*, const wchar_t*);
extern int g_026667a8;
struct AnimationEncodingFormat
{
    virtual INT ByteSwapRotationOut(INT a, INT b, INT c, INT d);
};

// @baa 0x006637b0
INT AnimationEncodingFormat::ByteSwapRotationOut(INT a, INT b, INT c, INT d)
{
    return sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)",
                        L"AnimationEncodingFormat::ByteSwapRotationOut");
}

static void sub_006637a0()
{
    AnimationEncodingFormat AEF;
    AEF.ByteSwapRotationOut(0, 0, 0, 0);
}
