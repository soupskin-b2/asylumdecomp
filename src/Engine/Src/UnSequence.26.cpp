// UnSequence.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FName comparisons (UnName.h); the kit's FName has no operators. */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* UnSequence.cpp's static level lookup (0x008cc3b0): finds the streaming level for LevelName. */
UBOOL FindLevel(ULevelStreaming*& Level, FName LevelName);
/* slot 0x1a0 (vf_1a0) */
struct USeqAct_LevelVisibility_ : public USeqAct_LevelVisibility
{
    void UpdateStatus();
};

// @baa 0x008cc9b0
void USeqAct_LevelVisibility_::UpdateStatus()
{
    // forget the cached level if it no longer matches the name
    if (Level != NULL && LevelName != NAME_None && Level->PackageName != LevelName)
    {
        Level = NULL;
    }
    ULevelStreaming* TheLevel = Level;
    bStatusIsOk = FindLevel(TheLevel, LevelName) != FALSE;
}

/* FIntPoint's constructor and FIntRect (UnMath.h); not in the kit's headers. */
struct FIntPoint_ : public FIntPoint
{
    FIntPoint_() {}
    FIntPoint_(INT InX, INT InY) { X = InX; Y = InY; }
};

struct FIntRect
{
    FIntPoint_ Min, Max;
    FIntRect() {}
    FIntRect(INT X0, INT Y0, INT X1, INT Y1) : Min(X0, Y0), Max(X1, Y1) {}
};

/* slot 0x134 (vf_134) is USequenceObject::GetSeqObjBounds */
struct USequenceObject_ : public USequenceObject
{
    FIntRect GetSeqObjBounds();
};

// @baa 0x00d201a0
FIntRect USequenceObject_::GetSeqObjBounds()
{
    return FIntRect(ObjPosX, ObjPosY, ObjPosX + DrawWidth, ObjPosY + DrawHeight);
}
