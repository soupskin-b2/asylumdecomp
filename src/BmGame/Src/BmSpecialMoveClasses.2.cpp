// BmSpecialMoveClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016fbb70
void ARSpecialMoveInstance_RelativeAnimMove::execCheckSpaceAtEndOfAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_GET_OBJECT(UAnimSet, AnimSet);
    P_GET_STRUCT(FVector, AnimLocation);
    P_GET_STRUCT(FRotator, AnimRotation);
    P_FINISH;
    *(UBOOL*)Result = this->CheckSpaceAtEndOfAnim(AnimName, AnimSet, AnimLocation, AnimRotation);
}

// @baa 0x016fbc80
void ARSpecialMoveInstance_RelativeAnimMove::execGetAnimEndLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_GET_OBJECT(UAnimSet, AnimSet);
    P_GET_STRUCT(FVector, AnimLocation);
    P_GET_STRUCT(FRotator, AnimRotation);
    P_FINISH;
    *(FVector*)Result = this->GetAnimEndLocation(AnimName, AnimSet, AnimLocation, AnimRotation);
}
