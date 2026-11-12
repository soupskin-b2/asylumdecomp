// MaterialInstance.cpp (part 3 of 3): 3 functions
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
struct UObject_ : public UObject
{
    FString GetName() const; /* 0x0043bbb0 */
};

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
        if ((FString_&)((UObject_*)PropertyThatChanged)->GetName() == TEXT("Parent"))
        {
            if (Parent == NULL)
            {
                bHasStaticPermutationResource = FALSE;
            }
        }
    }
}
