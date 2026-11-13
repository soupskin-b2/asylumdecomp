// RAnimNode_Pose.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FFinalRootBoneArray_ : FFinalRootBoneArray
{
    FFinalRootBoneArray& operator=(const FFinalRootBoneArray& Other); /* 0x0159c360 */
};

// @baa 0x0159c360
FFinalRootBoneArray& FFinalRootBoneArray_::operator=(const FFinalRootBoneArray& Other)
{
    for (INT Index = 0; Index < sizeof(Data) / sizeof(Data[0]); ++Index)
    {
        Data[Index] = Other.Data[Index];
    }
    Num = Other.Num;
    return *this;
}
