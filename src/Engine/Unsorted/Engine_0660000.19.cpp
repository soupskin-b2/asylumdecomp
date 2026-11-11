// Engine_0660000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern int g_026667a8;
extern "C" int sub_00630f20(int, const wchar_t*, const wchar_t*);
class AnimationEncodingFormat
{
public:
	virtual void sub_00663710(int, int, int, int, int, int, int);
};

// @baa 0x00663710
void AnimationEncodingFormat::sub_00663710(int a, int b, int c, int d, int e, int f, int g)
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"AnimationEncodingFormat::GetBoneAtomTranslation");
}
