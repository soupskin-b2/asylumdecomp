// UnSequence.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FName comparisons (UnName.h); the kit's FName has no operators. */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* UnSequence.cpp's static level lookup (0x008cc3b0): finds the streaming level for LevelName. */
UBOOL FindLevel(ULevelStreaming*& Level, FName LevelName);
// @baa 0x008cc9b0
void USeqAct_LevelVisibility::UpdateStatus()
{
    // forget the cached level if it no longer matches the name
    if (Level != NULL && LevelName != NAME_None && Level->PackageName != LevelName)
    {
        Level = NULL;
    }
    ULevelStreaming* TheLevel = Level;
    bStatusIsOk = FindLevel(TheLevel, LevelName) != FALSE;
}

// @baa 0x00d201a0
FIntRect USequenceObject::GetSeqObjBoundingBox()
{
    return FIntRect(ObjPosX, ObjPosY, ObjPosX + DrawWidth, ObjPosY + DrawHeight);
}
