// BmSpecialMoveClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* ARSpecialMoveInstance_RelativeAnimMove::CheckSpaceAtEndOfAnim (0x1634fe0) isn't declared in the kit. */
struct ARSpecialMoveInstance_RelativeAnimMove_ : public ARSpecialMoveInstance_RelativeAnimMove
{
    UBOOL CheckSpaceAtEndOfAnim(FName AnimName, class UAnimSet* AnimSet, FVector AnimLocation, FRotator AnimRotation);
};

// @baa 0x016fbb70
void ARSpecialMoveInstance_RelativeAnimMove::execCheckSpaceAtEndOfAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_GET_OBJECT(UAnimSet, AnimSet);
    P_GET_STRUCT(FVector, AnimLocation);
    P_GET_STRUCT(FRotator, AnimRotation);
    P_FINISH;
    *(UBOOL*)Result = ((ARSpecialMoveInstance_RelativeAnimMove_*)this)->CheckSpaceAtEndOfAnim(AnimName, AnimSet, AnimLocation, AnimRotation);
}

/* ARSpecialMoveInstance_RelativeAnimMove::GetAnimEndLocation (0x1634e00) isn't declared in the kit. */
struct ARSpecialMoveInstance_RelativeAnimMove__016fbc80 : public ARSpecialMoveInstance_RelativeAnimMove
{
    FVector GetAnimEndLocation(FName AnimName, class UAnimSet* AnimSet, FVector AnimLocation, FRotator AnimRotation);
};

// @baa 0x016fbc80
void ARSpecialMoveInstance_RelativeAnimMove::execGetAnimEndLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_GET_OBJECT(UAnimSet, AnimSet);
    P_GET_STRUCT(FVector, AnimLocation);
    P_GET_STRUCT(FRotator, AnimRotation);
    P_FINISH;
    *(FVector*)Result = ((ARSpecialMoveInstance_RelativeAnimMove__016fbc80*)this)->GetAnimEndLocation(AnimName, AnimSet, AnimLocation, AnimRotation);
}
