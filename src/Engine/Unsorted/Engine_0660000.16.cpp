// Engine_0660000.cpp (part 16 of 17): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UMaterialInterface {
    undefined4 AllocateResource();
};

// @baa 0x00663650
undefined4 UMaterialInterface::AllocateResource()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",
               L"UMaterialInterface::AllocateResource");
  return 0;
}

int __cdecl sub_00630f20(int Value, const wchar_t* Format, const wchar_t* Name);
struct AnimationEncodingFormat_
{
    int GetPoseRotations(int A, int B, int C, int D, int E);
};

// @baa 0x00663730
int AnimationEncodingFormat_::GetPoseRotations(int A, int B, int C, int D, int E)
{
    return sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"AnimationEncodingFormat::GetPoseRotations");
}
