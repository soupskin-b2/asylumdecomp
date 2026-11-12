// Core_0580000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* FName(EName) as UE3 has it (the kit's FName is an aggregate); the same stand-in UnController.cpp binds this with. */
struct FName_ : public FName { FName_(INT N) { Index = N; Number = 0; } };

/* Kit gap: UnNames.h's NAME_PROBEMAX (Core.h only lists NAME_PROBEMIN). */
#define NAME_PROBEMAX_ 0x16c
/* UE3's UObject::IsProbing(FName ProbeName), bound through AController_ as UnController.cpp's
 * ShouldCheckVisibilityOf already calls it. */
struct AController_ : public AController
{
    UBOOL IsProbing(FName_ ProbeName);
};

// @baa 0x0058f750
UBOOL AController_::IsProbing(FName_ ProbeName)
{
    return (ProbeName.Index < NAME_PROBEMIN) ||
           (ProbeName.Index >= NAME_PROBEMAX_) ||
           (!StateFrame) ||
           (StateFrame->ProbeMask & ((QWORD)1 << (ProbeName.Index - NAME_PROBEMIN)));
}
