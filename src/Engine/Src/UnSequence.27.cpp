// UnSequence.cpp: 7 functions
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

// @baa 0x008ac6d0
/* UE3's USeqAct_SetMatInstScalarParam::Activated(): push the scalar onto the material instance. */
void USeqAct_SetMatInstScalarParam::Activated()
{
    if (MatInst != NULL)
    {
        MatInst->SetScalarParameterValue(ParamName, ScalarValue);
    }
}

// @baa 0x008ac710
/* UE3's USeqAct_SetMatInstTexParam::Activated(): push the texture onto the material instance. */
void USeqAct_SetMatInstTexParam::Activated()
{
    if (NewTexture != NULL && MatInst != NULL)
    {
        MatInst->SetTextureParameterValue(ParamName, NewTexture);
    }
}

// @baa 0x008abb80
/* USequenceEvent slot 0x19c (kit vf_19c, UE3's CheckActivate(InOriginator, InInstigator, bTest) short form): forward to
 * slot 0x1a4 with no activate indices and bPushTop off. */
INT USequenceEvent::vf_19c(INT InOriginator, INT InInstigator, INT bTest)
{
    return vf_1a4(InOriginator, InInstigator, bTest, 0, 0);
}

// @baa 0x008c0980
/* USequence slot 0x154 (kit vf_154, UE3 USequenceObject::CleanUp-style pass): run it on every object in the sequence. */
void USequence::vf_154()
{
    for (INT Idx = 0; Idx < SequenceObjects.Num(); Idx++)
    {
        USequenceObject* SeqObj = SequenceObjects(Idx);
        if (SeqObj != NULL)
        {
            SeqObj->vf_154();
        }
    }
}
