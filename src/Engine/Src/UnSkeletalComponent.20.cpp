// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

/* Kit gap: FName has no comparison operators (UnName.h, inline). */

// @baa 0x0091de90
void USkeletalMeshComponent::execIsComponentAttached(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UActorComponent, Component);
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    UBOOL bAttached = FALSE;
    for (INT i = 0; i < Attachments.Num(); i++)
    {
        if (Attachments(i).Component == Component &&
            (BoneName == FName(NAME_None) || Attachments(i).BoneName == BoneName))
        {
            bAttached = TRUE;
            break;
        }
    }
    *(UBOOL*)Result = bAttached;
}

#line 48 "candidate.cpp"
