// UnInterpolation.cpp: 12 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4c28;
	/* ENGINE_InterpolationChanged */

// @baa 0x00ce8490
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventInterpolationChanged(USeqAct_Interp* InterpAction)
{
	struct Actor_eventInterpolationChanged_Parms
	{
		class USeqAct_Interp* InterpAction;
	} Parms;
	Parms.InterpAction = InterpAction;
	ProcessEvent(FindFunctionChecked(g_026c4c28), &Parms);
}

extern FName g_026c3d1c;
	/* ENGINE_InterpolationFinished */

// @baa 0x00ce84d0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventInterpolationFinished(USeqAct_Interp* InterpAction)
{
	struct Actor_eventInterpolationFinished_Parms
	{
		class USeqAct_Interp* InterpAction;
	} Parms;
	Parms.InterpAction = InterpAction;
	ProcessEvent(FindFunctionChecked(g_026c3d1c), &Parms);
}

extern FName g_026c4074;
	/* ENGINE_InterpolationStarted */

// @baa 0x00ce8510
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventInterpolationStarted(USeqAct_Interp* InterpAction)
{
	struct Actor_eventInterpolationStarted_Parms
	{
		class USeqAct_Interp* InterpAction;
	} Parms;
	Parms.InterpAction = InterpAction;
	ProcessEvent(FindFunctionChecked(g_026c4074), &Parms);
}

extern FName g_026c55d4;
	/* ENGINE_GetActorFaceFXAsset */

// @baa 0x00ce8550
/* The script event's generated glue (EngineClasses.h), out of line here. */
UFaceFXAsset* AActor::eventGetActorFaceFXAsset()
{
	struct Actor_eventGetActorFaceFXAsset_Parms
	{
		class UFaceFXAsset* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026c55d4), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4a38;
	/* ENGINE_SetSkelControlScale */

// @baa 0x00ce8590
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventSetSkelControlScale(FName SkelControlName, FLOAT Scale)
{
	struct Actor_eventSetSkelControlScale_Parms
	{
		FName SkelControlName;
		FLOAT Scale;
	} Parms;
	Parms.SkelControlName = SkelControlName;
	Parms.Scale = Scale;
	ProcessEvent(FindFunctionChecked(g_026c4a38), &Parms);
}

extern FName g_026c3f14;
	/* ENGINE_SetMorphWeight */

// @baa 0x00ce85f0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventSetMorphWeight(FName MorphNodeName, FLOAT MorphWeight)
{
	struct Actor_eventSetMorphWeight_Parms
	{
		FName MorphNodeName;
		FLOAT MorphWeight;
	} Parms;
	Parms.MorphNodeName = MorphNodeName;
	Parms.MorphWeight = MorphWeight;
	ProcessEvent(FindFunctionChecked(g_026c3f14), &Parms);
}

extern FName g_026c4f54;
	/* ENGINE_SetAnimPosition */

// @baa 0x00ce8700
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventSetAnimPosition(FName SlotName, INT ChannelIndex, FName InAnimSeqName, FLOAT InPosition, UBOOL bFireNotifies, UBOOL bLooping)
{
	struct Actor_eventSetAnimPosition_Parms
	{
		FName SlotName;
		INT ChannelIndex;
		FName InAnimSeqName;
		FLOAT InPosition;
		UBOOL bFireNotifies;
		UBOOL bLooping;
	} Parms;
	Parms.SlotName = SlotName;
	Parms.ChannelIndex = ChannelIndex;
	Parms.InAnimSeqName = InAnimSeqName;
	Parms.InPosition = InPosition;
	Parms.bFireNotifies = bFireNotifies ? TRUE : FALSE;
	Parms.bLooping = bLooping ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4f54), &Parms);
}

extern FName g_026c4bf8;
	/* ENGINE_MoverFinished */

// @baa 0x00ce87d0
/* The script event's generated glue (EngineClasses.h), out of line here. */
UBOOL AController::eventMoverFinished()
{
	struct Controller_eventMoverFinished_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4bf8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4224;
	/* ENGINE_NotifyDirectorControl */

// @baa 0x00ce8820
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APlayerController::eventNotifyDirectorControl(UBOOL bNowControlling)
{
	struct PlayerController_eventNotifyDirectorControl_Parms
	{
		UBOOL bNowControlling;
	} Parms;
	Parms.bNowControlling = bNowControlling ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4224), &Parms);
}

extern FName g_026c4590;
	/* ENGINE_ShouldShowGore */

// @baa 0x00ce8880
/* The script event's generated glue (EngineClasses.h), out of line here. */
UBOOL AGameReplicationInfo::eventShouldShowGore()
{
	struct GameReplicationInfo_eventShouldShowGore_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4590), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4a90;
	/* ENGINE_SetAnimDirectorBoneName */

// @baa 0x00ce86b0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventSetAnimDirectorBoneName(FName BoneName)
{
	struct Actor_eventSetAnimDirectorBoneName_Parms
	{
		FName BoneName;
	} Parms;
	Parms.BoneName = BoneName;
	ProcessEvent(FindFunctionChecked(g_026c4a90), &Parms);
}

#include "ue3/ConstructObject.h"

// @baa 0x00d0cf10
template UInterpGroupInst* ConstructObject<UInterpGroupInst>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 270 "candidate.cpp"
