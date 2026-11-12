// MaterialInstance.cpp (part 3 of 3): 5 functions
// Placed here by: class 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_007271f0(void);
// @baa 0x00729050
undefined4 UMaterialInstance::sub_00729050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007271f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0072dd00
undefined4 UMaterialInstance::sub_0072dd00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007271f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Kit gaps: UObject::GetName() (0x0043bbb0) isn't declared, and FString's comparison with a string (UnString.h,
 * out of line here at 0x00544cf0) is missing. */

struct FString_ : public FString
{
    UBOOL operator==(const TCHAR* Other) const; /* 0x00544cf0 */
};

// @baa 0x006bc530
/* Clearing the parent leaves nothing to build a static permutation from. */
void UMaterialInstance::PostEditChange(UProperty* PropertyThatChanged)
{
    Super::PostEditChange(PropertyThatChanged);
    if (PropertyThatChanged)
    {
        if ((FString_&)((UObject*)PropertyThatChanged)->GetName() == TEXT("Parent"))
        {
            if (Parent == NULL)
            {
                bHasStaticPermutationResource = FALSE;
            }
        }
    }
}

// @baa 0x006aee00
/* UE3's UMaterialInstance::CompileStaticPermutation(FStaticParameterSet* Permutation, FMaterialResource*
 * StaticPermutation, EShaderPlatform Platform, UBOOL bFlushExistingShaderMaps, UBOOL bDebugDump, ...) (the kit types the
 * six arguments as INT): a material instance compiles through its parent. */
INT UMaterialInstance::CompileStaticPermutation(INT Permutation, INT StaticPermutation, INT Platform, INT bFlushExistingShaderMaps,
    INT bDebugDump, INT Arg6)
{
    INT Result = FALSE;
    if (Parent != NULL)
    {
        Result = Parent->CompileStaticPermutation(Permutation, StaticPermutation, Platform, bFlushExistingShaderMaps, bDebugDump, Arg6);
    }
    return Result;
}

/* Kit gap: UMaterialInstance::StaticPermutationResources is FMaterialResource* in UE3 but an FPointer mirror here; this
 * lets check() test it as the engine's pointer test does. */
FORCEINLINE UBOOL operator!(const FPointer& P)
{
    return !P.Dummy;
}

// @baa 0x006aecb0
/* UMaterialInstance slot 0x14c (kit vf_14c, UE3 FMaterialResource* GetMaterialResource(EShaderPlatform Platform)): the
 * instance's own static-permutation resource when it has one, else the parent's (returned as the kit's INT). */
INT UMaterialInstance::vf_14c(INT Platform)
{
    if (bHasStaticPermutationResource)
    {
#line 316 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstance.cpp"
        check(StaticPermutationResources[Platform]);
        return StaticPermutationResources[Platform].Dummy;
    }
    else if (Parent)
    {
        return Parent->vf_14c(Platform);
    }
    return 0;
}

#line 102 "candidate.cpp"
