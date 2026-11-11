// Engine_0660000.cpp (part 14 of 17): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006634f0
IMPLEMENT_CLASS_AT(UMaterialInterface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialShared.cpp", 10);

// A UMaterialInterface member the header doesn't declare: returns the material's default
// surface height (an INT).
struct UMaterialInterface_ : public UMaterialInterface
{
    INT sub_006d9240();
    virtual DOUBLE GetSurfaceHeight();
};

// @baa 0x006635a0
DOUBLE UMaterialInterface_::GetSurfaceHeight()
{
    return sub_006d9240();
}

extern int g_026667a8;
extern "C" int sub_00630f20(int IsCritical, const wchar_t* Msg, const wchar_t* FuncName);
class AnimationEncodingFormat
{
public:
	// Pure virtual not implemented: the concrete encodings override this.
	// (Address name so the out-of-line body is found; the real name is
	//  AnimationEncodingFormat::GetBoneAtomRotation.)
	__declspec(noinline) void sub_006636f0(FQuat Rotation, FVector Translation)
	{
		sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"AnimationEncodingFormat::GetBoneAtomRotation");
	}
};

// @baa 0x006636f0
void sub_006636d0(AnimationEncodingFormat* Format, FQuat Rotation, FVector Translation)
{
	Format->sub_006636f0(Rotation, Translation);
}
