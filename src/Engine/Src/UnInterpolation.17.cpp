// UnInterpolation.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps: RF_Public and UObject::SetFlags (ObjectFlags is an FQWord here). */
#define RF_Public ((QWORD)0x0000000400000000)

// @baa 0x00cf06d0
/* After loading, make the font's page textures public and put them in the UI texture group. */
void UFont::PostLoad()
{
	Super::PostLoad();

	CacheCharacterCountAndMaxCharHeight();

	for (INT TextureIndex = 0; TextureIndex < Textures.Num(); ++TextureIndex)
	{
		UTexture2D* Texture = Textures(TextureIndex);
		if (Texture)
		{
			Texture->SetFlags(RF_Public);
			Texture->LODGroup = TEXTUREGROUP_UI;
		}
	}
}

// @baa 0x00cf7250
/* UE3's UInterpTrackParticleReplay::GetKeyframeTime(INT KeyIndex): the key's time, 0 for an invalid index. */
FLOAT UInterpTrackParticleReplay::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= TrackKeys.Num())
    {
        return 0.f;
    }
    return TrackKeys(KeyIndex).Time;
}

/* Unnamed in the kit: UE3's FInterpCurveVector::MovePoint(INT PointIndex, FLOAT NewInVal) and AutoSetTangents(FLOAT
 * Tension), and FInterpLookupTrack::MovePoint(INT PointIndex, FLOAT NewTime) (0x00cfa320). */
struct FInterpCurveVector_ : public FInterpCurveVector
{
    INT sub_007c3d10(INT PointIndex, FLOAT NewInVal);
    void sub_007bb200(FLOAT Tension);
};

struct FInterpLookupTrack_ : public FInterpLookupTrack
{
    INT sub_00cfa320(INT PointIndex, FLOAT NewTime);
};

// @baa 0x00d03e30
/* UE3's UInterpTrackMove::SetKeyframeTime(INT KeyIndex, FLOAT NewKeyTime, UBOOL bUpdateOrder): retime the key in all
 * three tracks (re-sorting when asked), then rebuild the tangents. */
INT UInterpTrackMove::SetKeyframeTime(INT KeyIndex, FLOAT NewKeyTime, UBOOL bUpdateOrder)
{
#line 3155 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp"
    check((PosTrack.Points.Num() == EulerTrack.Points.Num()) && (PosTrack.Points.Num() == LookupTrack.Points.Num()));

    if (KeyIndex < 0 || KeyIndex >= PosTrack.Points.Num())
    {
        return KeyIndex;
    }

    INT NewKeyIndex = KeyIndex;
    if (bUpdateOrder)
    {
        NewKeyIndex = ((FInterpCurveVector_&)PosTrack).sub_007c3d10(KeyIndex, NewKeyTime);
        INT NewEulerKeyIndex = ((FInterpCurveVector_&)EulerTrack).sub_007c3d10(KeyIndex, NewKeyTime);
        INT NewLookupKeyIndex = ((FInterpLookupTrack_&)LookupTrack).sub_00cfa320(KeyIndex, NewKeyTime);
#line 3165 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp"
        check((NewKeyIndex == NewEulerKeyIndex) && (NewKeyIndex == NewLookupKeyIndex));
    }
    else
    {
        PosTrack.Points(KeyIndex).InVal = NewKeyTime;
        EulerTrack.Points(KeyIndex).InVal = NewKeyTime;
        LookupTrack.Points(KeyIndex).Time = NewKeyTime;
    }

    ((FInterpCurveVector_&)PosTrack).sub_007bb200(LinCurveTension);
    ((FInterpCurveVector_&)EulerTrack).sub_007bb200(AngCurveTension);

    return NewKeyIndex;
}

#line 88 "candidate.cpp"
