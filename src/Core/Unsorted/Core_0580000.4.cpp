// Core_0580000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UE3's UObject::IsProbing(FName ProbeName), bound through AController_ as UnController.cpp's
 * ShouldCheckVisibilityOf already calls it. */
struct AController_ : public AController
{
    UBOOL IsProbing(FName ProbeName);
};

// @baa 0x0058f750
UBOOL AController_::IsProbing(FName ProbeName)
{
    return (ProbeName.Index < NAME_PROBEMIN) ||
           (ProbeName.Index >= NAME_PROBEMAX) ||
           (!StateFrame) ||
           (StateFrame->ProbeMask & ((QWORD)1 << (ProbeName.Index - NAME_PROBEMIN)));
}
