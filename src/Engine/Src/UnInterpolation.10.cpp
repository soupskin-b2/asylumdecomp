// UnInterpolation.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FName::operator== / != (UnName.h); the kit's FName has no operators. */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

struct USeqAct_Interp_ : public USeqAct_Interp {
    UInterpGroupInst* sub_00cf3830(FName InGroupName); // FindFirstGroupInstByName
};

// @baa 0x00cf3830
UInterpGroupInst* USeqAct_Interp_::sub_00cf3830(FName InGroupName)
{
    if (InGroupName.Index == NAME_None && InGroupName.Number == 0)
    {
        return NULL;
    }

    for (INT i = 0; i < GroupInst.Num(); i++)
    {
        if (GroupInst(i)->Group->GroupName == InGroupName)
        {
            return GroupInst(i);
        }
    }

    return NULL;
}

struct UInterpGroupInst_ : public UInterpGroupInst {
    AActor* GetGroupActor()
    {
        if (!GroupActor || GroupActor->bDeleteMe)
        {
            return NULL;
        }
        return GroupActor;
    }
    UBOOL HasActor(AActor* InActor) { return GetGroupActor() == InActor; }
};

struct USeqAct_Interp__00cf36a0 : public USeqAct_Interp {
    UInterpGroupInst* sub_00cf36a0(AActor* Actor); // FindGroupInst
};

// @baa 0x00cf36a0
UInterpGroupInst* USeqAct_Interp__00cf36a0::sub_00cf36a0(AActor* Actor)
{
    if (!Actor || Actor->bDeleteMe)
    {
        return NULL;
    }

    for (INT i = 0; i < GroupInst.Num(); i++)
    {
        if (((UInterpGroupInst_*)GroupInst(i))->HasActor(Actor))
        {
            return GroupInst(i);
        }
    }

    return NULL;
}

void __stdcall sub_00d1ba30(INT A, INT B);
// @baa 0x00d1bbf0
void __stdcall sub_00d1bbf0(INT Value)
{
    sub_00d1ba30(Value, 0);
}

struct USeqAct_Interp__00cf3770 : public USeqAct_Interp {
    UInterpGroupInst* FindFirstGroupInst(UInterpGroup* InGroup); // 00cf3770
};

// @baa 0x00cf3770
UInterpGroupInst* USeqAct_Interp__00cf3770::FindFirstGroupInst(UInterpGroup* InGroup)
{
    if (!InGroup)
    {
        return NULL;
    }

    for (INT i = 0; i < GroupInst.Num(); i++)
    {
        if (GroupInst(i)->Group == InGroup)
        {
            return GroupInst(i);
        }
    }

    return NULL;
}
