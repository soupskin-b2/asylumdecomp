// UnAnimTreeDraw.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UAnimNodeBlend's editor slider handling (UAnimNode vtable slot, declared only as a vf_). */

// @baa 0x00cb2560
void UAnimNodeBlend::HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue)
{
#line 370 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);
	check(Children.Num() == 2);

	Child2WeightTarget = NewSliderValue;
	Child2Weight = NewSliderValue;
}

#line 24 "candidate.cpp"

/* UAnimNodeBlendBySpeed's editor slider position (UAnimNode vtable slot, declared only as a vf_). */

// @baa 0x00cb9450
FLOAT UAnimNodeBlendBySpeed::GetSliderPosition(INT SliderIndex, INT ValueIndex)
{
#line 388 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);

	// the slider covers up to a bit past the last constraint
	return Speed / (Constraints(Constraints.Num() - 1) * 1.1f);
}

#line 42 "candidate.cpp"

/* UAnimNodeBlendBySpeed's editor slider handling (UAnimNode vtable slot, declared only as a vf_). */

// @baa 0x00cb94e0
void UAnimNodeBlendBySpeed::HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue)
{
#line 395 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);

	// the slider covers up to a bit past the last constraint
	Speed = Constraints(Constraints.Num() - 1) * NewSliderValue * 1.1f;
}

#line 60 "candidate.cpp"

/* Kit gap (UnLinkedObjEditor.h): the linked-object editor's connector types and layout constant aren't defined. */
enum EConnectorHitProxyType { LOC_INPUT, LOC_OUTPUT, LOC_VARIABLE, LOC_EVENT };

#define LO_CONNECTOR_LENGTH (10)

// @baa 0x00c92a90
FIntPoint UAnimNode::GetConnectionLocation(INT ConnType, INT ConnIndex)
{
	if (ConnType == LOC_INPUT)
	{
#line 143 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
		check(ConnIndex == 0);
		return FIntPoint(NodePosX - LO_CONNECTOR_LENGTH, OutDrawY);
	}

	return FIntPoint(0, 0);
}

#line 91 "candidate.cpp"

// @baa 0x00c92b80
void UAnimNodeBlendDirectional::HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue)
{
#line 419 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);

	// the slider, from [0, 1] to [-PI, PI]
	DirAngle = (NewSliderValue - 0.5f) * (2.f * (FLOAT)PI);
}

#line 111 "candidate.cpp"

// @baa 0x00c92b30
FLOAT UAnimNodeBlendDirectional::GetSliderPosition(INT SliderIndex, INT ValueIndex)
{
#line 412 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);

	// the direction, from [-PI, PI] to [0, 1]
	return ((DirAngle * INV_PI) * 0.5f) + 0.5f;
}

#line 131 "candidate.cpp"
