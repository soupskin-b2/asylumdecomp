// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

// The game keeps these out of line: ~TArray<UObject**> (0x008c26a0), Cast<APawn> (0x007d94d0).
extern template TArray<UObject**>::~TArray();
extern template APawn* Cast<APawn>(UObject* Src);
/* USequenceOp::GetObjectVars (0x008e9100) isn't declared in Classes.h. */

/* slot 0x174 (vf_174) is USequenceOp::Activated; USequenceAction's is 0x008d1890 */


// @baa 0x008ea4d0
void USeqAct_Possess::Activated()
{
    // pick up the pawn to possess
    PawnToPossess = NULL;
    TArray<UObject**> ObjVars;
    this->GetObjectVars(ObjVars, TEXT("Pawn Target"));
    if (ObjVars.Num() > 0)
    {
        PawnToPossess = Cast<APawn>(*(ObjVars(0)));
    }
    this->USequenceAction::Activated(); // Super::Activated()
}
