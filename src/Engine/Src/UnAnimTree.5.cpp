// UnAnimTree.cpp: 14 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AnimNodeSlotNative : UAnimNodeSlot
{
    void sub_00c7f1f0(FLOAT BlendOutTime);
};

// @baa 0x00c913c0
void UAnimNodeSlot::execStopCustomAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(BlendOutTime);
    P_FINISH;
    static_cast<AnimNodeSlotNative*>(this)->sub_00c7f1f0(BlendOutTime);
}

struct AnimNodeSlotNative_00c914a0 : UAnimNodeSlot
{
    void sub_00c7cbb0(UBOOL bNewStatus);
};

// @baa 0x00c914a0
void UAnimNodeSlot::execSetActorAnimEndNotification(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bNewStatus);
    P_FINISH;
    static_cast<AnimNodeSlotNative_00c914a0*>(this)->sub_00c7cbb0(bNewStatus);
}

struct AnimNodeSlotNative_00c91430 : UAnimNodeSlot
{
    void sub_00c7f230(FName AnimName);
};

// @baa 0x00c91430
void UAnimNodeSlot::execSetCustomAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_FINISH;
    static_cast<AnimNodeSlotNative_00c91430*>(this)->sub_00c7f230(AnimName);
}

struct AnimNodeSlotNative_00c91550 : UAnimNodeSlot
{
    void sub_00c7cd10(BYTE AxisX, BYTE AxisY, BYTE AxisZ);
};

// @baa 0x00c91550
void UAnimNodeSlot::execSetRootBoneAxisOption(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE_OPTX(AxisX, 0);
    P_GET_BYTE_OPTX(AxisY, 0);
    P_GET_BYTE_OPTX(AxisZ, 0);
    P_FINISH;
    static_cast<AnimNodeSlotNative_00c91550*>(this)->sub_00c7cd10(AxisX, AxisY, AxisZ);
}

struct AnimNodeSlotNative_00c91050 : UAnimNodeSlot
{
    FLOAT sub_00c7ef60(FName AnimName, FLOAT Rate, FLOAT BlendInTime, FLOAT BlendOutTime, UBOOL bLooping, UBOOL bOverride);
};

// @baa 0x00c91050
void UAnimNodeSlot::execPlayCustomAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_GET_FLOAT(Rate);
    P_GET_FLOAT_OPTX(BlendInTime, 0.0f);
    P_GET_FLOAT_OPTX(BlendOutTime, 0.0f);
    P_GET_UBOOL_OPTX(bLooping, FALSE);
    P_GET_UBOOL_OPTX(bOverride, FALSE);
    P_FINISH;
    *(FLOAT*)Result = static_cast<AnimNodeSlotNative_00c91050*>(this)->sub_00c7ef60(AnimName, Rate, BlendInTime, BlendOutTime, bLooping, bOverride);
}

// @baa 0x00c91510
void UAnimNodeSlot::execGetCustomAnimNodeSeq(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UAnimNodeSequence**)Result = sub_00c7ccb0();
}

// @baa 0x00c90490
void UAnimNodeAimOffset::execSetActiveProfileByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ProfileName);
    P_FINISH;
    SetActiveProfileByName(ProfileName);
}

// @baa 0x00c4b920
void UAnimNodeBlendMultiBone::execSetTargetStartBone(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(TargetIdx);
    P_GET_NAME(StartBoneName);
    P_GET_FLOAT_OPTX(PerBoneIncrease, 1.0f);
    P_FINISH;
    SetTargetStartBone(TargetIdx, StartBoneName, PerBoneIncrease);
}

// @baa 0x00c90510
void UAnimNodeAimOffset::execSetActiveProfileByIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ProfileIndex);
	P_FINISH;

	SetActiveProfileByIndex(ProfileIndex);
}

// @baa 0x00c91620
void UAnimNodeSlot::execAddToSynchGroup(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	sub_00c803f0(GroupName);
}

// @baa 0x00c911e0
void UAnimNodeSlot::execPlayCustomAnimByDuration(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(AnimName);
	P_GET_FLOAT(Duration);
	P_GET_FLOAT_OPTX(BlendInTime, 0.f);
	P_GET_FLOAT_OPTX(BlendOutTime, 0.f);
	P_GET_UBOOL_OPTX(bLooping, FALSE);
	P_GET_UBOOL_OPTX(bOverride, TRUE);
	P_FINISH;
	PlayCustomAnimByDuration(AnimName, Duration, BlendInTime, BlendOutTime, bLooping, bOverride);
}

// @baa 0x00c91370
void UAnimNodeSlot::execGetPlayedAnimation(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FName*)Result = GetPlayedAnimation();
}

// @baa 0x00c902e0
void UAnimNode::execFindAnimNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InNodeName);
	P_FINISH;
	*(UAnimNode**)Result = FindAnimNode(InNodeName);
}

#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;
/* UStruct::IsChildOf isn't declared in Classes.h; this is UE3's inline body. */

/* UnObjBas.h ConstructObject<T> */
template<class T>
T* ConstructObject(UClass* Class, UObject* Outer, FName Name, QWORD SetFlags, UObject* Template, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph)
{
#line 1317 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnClass.h"
    check(Class->IsChildOf(T::StaticClass()));
    if (Outer == INVALID_OBJECT)
    {
        Outer = UObject::GetTransientPackage();
    }
    return (T*)UObject::StaticConstructObject(Class, Outer, Name, SetFlags, Template, GError, SubobjectRoot, InstanceGraph);
}

// @baa 0x00c7f6a0
template UAnimTree* ConstructObject<UAnimTree>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 186 "candidate.cpp"
