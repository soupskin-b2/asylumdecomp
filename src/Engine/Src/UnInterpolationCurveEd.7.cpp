// UnInterpolationCurveEd.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00cfc730
INT UInterpTrackMorphWeight::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = FloatTrack.AddPoint(Time, 0.f);
    FloatTrack.Points(NewKeyIndex).InterpMode = InitInterpMode;

    FloatTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

#line 43 "candidate.cpp"

// @baa 0x00cfc7b0
INT UInterpTrackFaceFXRegister::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = FloatTrack.AddPoint(Time, 0.f);
    FloatTrack.Points(NewKeyIndex).InterpMode = InitInterpMode;

    FloatTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

// @baa 0x00cfc910
INT UInterpTrackSkelControlScale::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = FloatTrack.AddPoint(Time, 0.f);
    FloatTrack.Points(NewKeyIndex).InterpMode = InitInterpMode;

    FloatTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

// @baa 0x00d04510
INT UInterpTrackFloatBase::SetKeyframeTime(INT KeyIndex, FLOAT NewKeyTime, UBOOL bUpdateOrder)
{
    if (KeyIndex < 0 || KeyIndex >= FloatTrack.Points.Num())
    {
        return KeyIndex;
    }

    INT NewKeyIndex = KeyIndex;
    if (bUpdateOrder)
    {
        NewKeyIndex = FloatTrack.MovePoint(KeyIndex, NewKeyTime);
    }
    else
    {
        FloatTrack.Points(KeyIndex).InVal = NewKeyTime;
    }

    FloatTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

/* FInterpCurve<FVector> (UnMath.h): MovePoint and AutoSetTangents out of line in the exe (007c3d10, 007bb200) */

// @baa 0x00d04810
INT UInterpTrackVectorBase::SetKeyframeTime(INT KeyIndex, FLOAT NewKeyTime, UBOOL bUpdateOrder)
{
    if (KeyIndex < 0 || KeyIndex >= VectorTrack.Points.Num())
    {
        return KeyIndex;
    }

    INT NewKeyIndex = KeyIndex;
    if (bUpdateOrder)
    {
        NewKeyIndex = VectorTrack.MovePoint(KeyIndex, NewKeyTime);
    }
    else
    {
        VectorTrack.Points(KeyIndex).InVal = NewKeyTime;
    }

    VectorTrack.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

/* CastChecked<T> (UnObjBas.h), out of line for this T in the exe (00cfe4e0) */
template<class T> T* CastChecked(UObject* Src);
/* TArray<FVisibilityTrackKey>: Insert out of line in the exe (00cec440) */
struct FVisibilityTrackKeyArray : public TArray<FVisibilityTrackKey>
{
    void Insert(INT Index, INT Count = 1);
};

// @baa 0x00d05130
INT UInterpTrackVisibility::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    UInterpTrackInstVisibility* VisInst = CastChecked<UInterpTrackInstVisibility>(TrInst);

    // Find the correct index to insert this key.
    INT i = 0;
    for (i = 0; i < VisibilityTrack.Num() && ((FVisibilityTrackKeyArray&)VisibilityTrack)(i).Time < Time; i++);
    VisibilityTrack.Insert(i);
    ((FVisibilityTrackKeyArray&)VisibilityTrack)(i).Time = Time;
    ((FVisibilityTrackKeyArray&)VisibilityTrack)(i).Action = VisInst->Action;

    return i;
}

/* TArray<FVisibilityTrackKey>: Insert out of line in the exe (00cec440), InsertZeroed inlined (Array.h) */
struct FVisibilityTrackKeyArray_00cf6f20 : public TArray<FVisibilityTrackKey>
{
    void Insert(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FVisibilityTrackKey), Count * sizeof(FVisibilityTrackKey));
    }
};

// @baa 0x00cf6f20
INT UInterpTrackVisibility::DuplicateKeyframe(INT KeyIndex, FLOAT NewKeyTime)
{
    if (KeyIndex < 0 || KeyIndex >= VisibilityTrack.Num())
    {
        return INDEX_NONE;
    }

    FVisibilityTrackKey VisKey = ((FVisibilityTrackKeyArray_00cf6f20&)VisibilityTrack)(KeyIndex);
    VisKey.Time = NewKeyTime;

    // Find the correct index to insert this key.
    INT i = 0;
    for (i = 0; i < VisibilityTrack.Num() && ((FVisibilityTrackKeyArray_00cf6f20&)VisibilityTrack)(i).Time < NewKeyTime; i++);
    VisibilityTrack.InsertZeroed(i);
    ((FVisibilityTrackKeyArray_00cf6f20&)VisibilityTrack)(i) = VisKey;

    return i;
}

/* TArray<FVisibilityTrackKey>: Insert and Remove out of line in the exe (00cec440, 00cf8530), InsertZeroed inlined (Array.h) */
struct FVisibilityTrackKeyArray_00cfcb30 : public TArray<FVisibilityTrackKey>
{
    void Insert(INT Index, INT Count = 1);
    void Remove(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FVisibilityTrackKey), Count * sizeof(FVisibilityTrackKey));
    }
};

// @baa 0x00cfcb30
INT UInterpTrackVisibility::SetKeyframeTime(INT KeyIndex, FLOAT NewKeyTime, UBOOL bUpdateOrder)
{
    if (KeyIndex < 0 || KeyIndex >= VisibilityTrack.Num())
    {
        return KeyIndex;
    }

    if (bUpdateOrder)
    {
        // First, remove cut from array.
        FVisibilityTrackKey MoveKey = ((FVisibilityTrackKeyArray_00cfcb30&)VisibilityTrack)(KeyIndex);
        VisibilityTrack.Remove(KeyIndex);

        // Set its time to the new one.
        MoveKey.Time = NewKeyTime;

        // Find correct new position and insert.
        INT i = 0;
        for (i = 0; i < VisibilityTrack.Num() && ((FVisibilityTrackKeyArray_00cfcb30&)VisibilityTrack)(i).Time < NewKeyTime; i++);
        VisibilityTrack.InsertZeroed(i);
        ((FVisibilityTrackKeyArray_00cfcb30&)VisibilityTrack)(i) = MoveKey;

        return i;
    }
    else
    {
        ((FVisibilityTrackKeyArray_00cfcb30&)VisibilityTrack)(KeyIndex).Time = NewKeyTime;
        return KeyIndex;
    }
}
