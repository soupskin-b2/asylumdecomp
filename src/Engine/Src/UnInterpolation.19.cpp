// UnInterpolation.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UnObjBas.h CastChecked<T> (a Cast that fails loudly): out of line in this build, so only declared here. */
template<class T> T* CastChecked(UObject* Src);
// @baa 0x00d08c00
/* Take the property's current value as the key's new value, then refit the curve's tangents. */
void UInterpTrackFloatProp::UpdateKeyframe(INT KeyIndex, UInterpTrackInst* TrInst)
{
	UInterpTrackInstFloatProp* PropInst = CastChecked<UInterpTrackInstFloatProp>(TrInst);
	if (!PropInst->FloatProp.Dummy)
	{
		return;
	}

	if (KeyIndex < 0 || KeyIndex >= FloatTrack.Points.Num())
	{
		return;
	}

	FloatTrack.Points(KeyIndex).OutVal = *(FLOAT*)PropInst->FloatProp.Dummy;
	FloatTrack.sub_007b96a0(CurveTension);
}

// @baa 0x00d08d40
/* Take the property's current value as the key's new value, then refit the curve's tangents. */
void UInterpTrackVectorProp::UpdateKeyframe(INT KeyIndex, UInterpTrackInst* TrInst)
{
	UInterpTrackInstVectorProp* PropInst = CastChecked<UInterpTrackInstVectorProp>(TrInst);
	if (!PropInst->VectorProp.Dummy)
	{
		return;
	}

	if (KeyIndex < 0 || KeyIndex >= VectorTrack.Points.Num())
	{
		return;
	}

	VectorTrack.Points(KeyIndex).OutVal = *(FVector*)PropInst->VectorProp.Dummy;
	VectorTrack.AutoSetTangents(CurveTension);
}

// @baa 0x00d08e90
/* Take the color property's current value (as a linear color) as the key's new value, then refit the curve's tangents. */
void UInterpTrackColorProp::UpdateKeyframe(INT KeyIndex, UInterpTrackInst* TrInst)
{
	UInterpTrackInstColorProp* PropInst = CastChecked<UInterpTrackInstColorProp>(TrInst);
	if (!PropInst->ColorProp.Dummy)
	{
		return;
	}

	if (KeyIndex < 0 || KeyIndex >= VectorTrack.Points.Num())
	{
		return;
	}

	FColor ColorValue = *(FColor*)PropInst->ColorProp.Dummy;
	FLinearColor LinearValue(ColorValue);
	VectorTrack.Points(KeyIndex).OutVal = FVector(LinearValue.R, LinearValue.G, LinearValue.B);
	VectorTrack.AutoSetTangents(CurveTension);
}
