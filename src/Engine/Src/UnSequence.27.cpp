// UnSequence.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FName comparisons (UnName.h); the kit's FName has no operators. */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

inline UBOOL operator!=(const FName& A, const FName& B) { return A.Index != B.Index || A.Number != B.Number; }

/* UnSequence.cpp's static level lookup (0x008cc3b0): finds the streaming level for LevelName. */
UBOOL FindLevel(ULevelStreaming*& Level, FName LevelName);
/* slot 0x1a0 (vf_1a0) */
struct USeqAct_MultiLevelStreaming_ : public USeqAct_MultiLevelStreaming
{
    void UpdateStatus();
};

// @baa 0x008cc7c0
void USeqAct_MultiLevelStreaming_::UpdateStatus()
{
    bStatusIsOk = TRUE;
    for (INT LevelIdx = 0; LevelIdx < Levels.Num() && bStatusIsOk; LevelIdx++)
    {
        FLevelStreamingNameCombo& Combo = Levels(LevelIdx);
        // forget the cached level if it no longer matches the name
        if (Combo.Level != NULL && Combo.LevelName != NAME_None && Combo.Level->PackageName != Combo.LevelName)
        {
            Combo.Level = NULL;
        }
        ULevelStreaming* TheLevel = Combo.Level;
        bStatusIsOk = bStatusIsOk && FindLevel(TheLevel, Combo.LevelName);
    }
}

// @baa 0x00d201d0
/* UE3's USequenceOp::PostEditChange(UProperty* PropertyThatChanged): fix up the links first (slot 0x188, UE3
 * CleanupConnections()). */
void USequenceOp::PostEditChange(UProperty* PropertyThatChanged)
{
    vf_188();
    Super::PostEditChange(PropertyThatChanged);
}

// @baa 0x008bdf20
/* USequenceOp slot 0x178 (kit vf_178, UE3 DeActivated()): fire every enabled output link when
 * bAutoActivateOutputLinks is set. */
void USequenceOp::vf_178()
{
    if (bAutoActivateOutputLinks)
    {
        for (INT Idx = 0; Idx < OutputLinks.Num(); Idx++)
        {
            FSeqOpOutputLink& Link = OutputLinks(Idx);
            if (!Link.bDisabled)
            {
                Link.bHasImpulse = TRUE;
            }
        }
    }
}
