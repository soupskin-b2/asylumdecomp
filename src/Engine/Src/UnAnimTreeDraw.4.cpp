// UnAnimTreeDraw.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UAnimNodeBlend's editor slider handling (UAnimNode vtable slot, declared only as a vf_). */
struct UAnimNodeBlend_ : public UAnimNodeBlend
{
	void HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue);
};

// @baa 0x00cb2560
void UAnimNodeBlend_::HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue)
{
#line 370 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);
	check(Children.Num() == 2);

	Child2WeightTarget = NewSliderValue;
	Child2Weight = NewSliderValue;
}

#line 24 "candidate.cpp"

/* UAnimNodeBlendBySpeed's editor slider position (UAnimNode vtable slot, declared only as a vf_). */
struct UAnimNodeBlendBySpeed_ : public UAnimNodeBlendBySpeed
{
	FLOAT GetSliderPosition(INT SliderIndex, INT ValueIndex);
};

// @baa 0x00cb9450
FLOAT UAnimNodeBlendBySpeed_::GetSliderPosition(INT SliderIndex, INT ValueIndex)
{
#line 388 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);

	// the slider covers up to a bit past the last constraint
	return Speed / (Constraints(Constraints.Num() - 1) * 1.1f);
}

#line 42 "candidate.cpp"

/* UAnimNodeBlendBySpeed's editor slider handling (UAnimNode vtable slot, declared only as a vf_). */
struct UAnimNodeBlendBySpeed__00cb94e0 : public UAnimNodeBlendBySpeed
{
	void HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue);
};

// @baa 0x00cb94e0
void UAnimNodeBlendBySpeed__00cb94e0::HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue)
{
#line 395 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);

	// the slider covers up to a bit past the last constraint
	Speed = Constraints(Constraints.Num() - 1) * NewSliderValue * 1.1f;
}

#line 60 "candidate.cpp"

/* Kit gaps, with UE3's definitions (UnObjBas.h, UnLinkedObjEditor.h): FIntPoint has no constructor, and
 * the linked-object editor's connector types and layout constant aren't defined. */
struct FIntPoint_ : public FIntPoint
{
	FIntPoint_(INT InX, INT InY) { X = InX; Y = InY; }
};

enum EConnectorHitProxyType { LOC_INPUT, LOC_OUTPUT, LOC_VARIABLE, LOC_EVENT };

#define LO_CONNECTOR_LENGTH (10)
/* UAnimNode::GetConnectionLocation (editor drawing) isn't declared in Classes.h. */
struct UAnimNode_ : public UAnimNode
{
	FIntPoint_ GetConnectionLocation(INT ConnType, INT ConnIndex);
};

// @baa 0x00c92a90
FIntPoint_ UAnimNode_::GetConnectionLocation(INT ConnType, INT ConnIndex)
{
	if (ConnType == LOC_INPUT)
	{
#line 143 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
		check(ConnIndex == 0);
		return FIntPoint_(NodePosX - LO_CONNECTOR_LENGTH, OutDrawY);
	}

	return FIntPoint_(0, 0);
}

#line 91 "candidate.cpp"

/* Kit gap, with UE3's definition (UnMath.h): PI isn't defined. */
#define PI (3.1415926535897932)
/* UAnimNodeBlendDirectional's editor slider handling (UAnimNode vtable slot, declared only as a vf_). */
struct UAnimNodeBlendDirectional_ : public UAnimNodeBlendDirectional
{
	void HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue);
};

// @baa 0x00c92b80
void UAnimNodeBlendDirectional_::HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue)
{
#line 419 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);

	// the slider, from [0, 1] to [-PI, PI]
	DirAngle = (NewSliderValue - 0.5f) * (2.f * (FLOAT)PI);
}

#line 111 "candidate.cpp"

/* Kit gap, with UE3's definition (UnMath.h): PI and INV_PI aren't defined. */
#define INV_PI (0.31830988618f)
/* UAnimNodeBlendDirectional's editor slider position (UAnimNode vtable slot, declared only as a vf_). */
struct UAnimNodeBlendDirectional__00c92b30 : public UAnimNodeBlendDirectional
{
	FLOAT GetSliderPosition(INT SliderIndex, INT ValueIndex);
};

// @baa 0x00c92b30
FLOAT UAnimNodeBlendDirectional__00c92b30::GetSliderPosition(INT SliderIndex, INT ValueIndex)
{
#line 412 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex && 0 == ValueIndex);

	// the direction, from [-PI, PI] to [0, 1]
	return ((DirAngle * INV_PI) * 0.5f) + 0.5f;
}

#line 131 "candidate.cpp"
