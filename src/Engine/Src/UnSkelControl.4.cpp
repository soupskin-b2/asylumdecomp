// UnSkelControl.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* slot 0x140 (vf_140) is USkelControlBase::HandleWidgetDrag(INT WidgetIndex, const FVector& DragVec) */

// @baa 0x0090cfe0
void USkelControlSingleBone::HandleWidgetDrag(INT WidgetIndex, const FVector& DragVec)
{
#line 466 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp"
    check(WidgetIndex == 0);
    BoneTranslation.X += DragVec.X;
    BoneTranslation.Y += DragVec.Y;
    BoneTranslation.Z += DragVec.Z;
}

#line 23 "candidate.cpp"

/* slot 0x140 (vf_140) is USkelControlBase::HandleWidgetDrag(INT WidgetIndex, const FVector& DragVec) */

// @baa 0x0090d140
void USkelControlLookAt::HandleWidgetDrag(INT WidgetIndex, const FVector& DragVec)
{
#line 911 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp"
    check(WidgetIndex == 0);
    TargetLocation.X += DragVec.X;
    TargetLocation.Y += DragVec.Y;
    TargetLocation.Z += DragVec.Z;
}

#line 41 "candidate.cpp"

/* slot 0x140 (vf_140) is USkelControlBase::HandleWidgetDrag(INT WidgetIndex, const FVector& DragVec) */

// @baa 0x0090d2f0
void USkelControl_CCD_IK::HandleWidgetDrag(INT WidgetIndex, const FVector& DragVec)
{
#line 2094 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp"
    check(WidgetIndex == 0);
    EffectorLocation.X += DragVec.X;
    EffectorLocation.Y += DragVec.Y;
    EffectorLocation.Z += DragVec.Z;
}

#line 59 "candidate.cpp"

/* slot 0x140 (vf_140) is USkelControlBase::HandleWidgetDrag(INT WidgetIndex, const FVector& DragVec) */

// @baa 0x0090d1f0
/* widget 0 moves the effector, widget 1 the joint target */
void USkelControlLimb::HandleWidgetDrag(INT WidgetIndex, const FVector& DragVec)
{
#line 1423 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkelControl.cpp"
    check(WidgetIndex < 2);

    if (WidgetIndex == 0)
    {
        EffectorLocation.X += DragVec.X;
        EffectorLocation.Y += DragVec.Y;
        EffectorLocation.Z += DragVec.Z;
    }
    else
    {
        JointTargetLocation.X += DragVec.X;
        JointTargetLocation.Y += DragVec.Y;
        JointTargetLocation.Z += DragVec.Z;
    }
}

#line 88 "candidate.cpp"
