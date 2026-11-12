// UnSequence.cpp: 1 function
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
