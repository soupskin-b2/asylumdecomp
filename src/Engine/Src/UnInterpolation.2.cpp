// UnInterpolation.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4c28;
	/* ENGINE_InterpolationChanged */
struct AActor_ : public AActor
{
	void eventInterpolationChanged(USeqAct_Interp* InterpAction);
};

// @baa 0x00ce8490
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor_::eventInterpolationChanged(USeqAct_Interp* InterpAction)
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
struct AActor__00ce84d0 : public AActor
{
	void eventInterpolationFinished(USeqAct_Interp* InterpAction);
};

// @baa 0x00ce84d0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor__00ce84d0::eventInterpolationFinished(USeqAct_Interp* InterpAction)
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
struct AActor__00ce8510 : public AActor
{
	void eventInterpolationStarted(USeqAct_Interp* InterpAction);
};

// @baa 0x00ce8510
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor__00ce8510::eventInterpolationStarted(USeqAct_Interp* InterpAction)
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
struct AActor__00ce8550 : public AActor
{
	UFaceFXAsset* eventGetActorFaceFXAsset();
};

// @baa 0x00ce8550
/* The script event's generated glue (EngineClasses.h), out of line here. */
UFaceFXAsset* AActor__00ce8550::eventGetActorFaceFXAsset()
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
struct AActor__00ce8590 : public AActor
{
	void eventSetSkelControlScale(FName SkelControlName, FLOAT Scale);
};

// @baa 0x00ce8590
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor__00ce8590::eventSetSkelControlScale(FName SkelControlName, FLOAT Scale)
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
struct AActor__00ce85f0 : public AActor
{
	void eventSetMorphWeight(FName MorphNodeName, FLOAT MorphWeight);
};

// @baa 0x00ce85f0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor__00ce85f0::eventSetMorphWeight(FName MorphNodeName, FLOAT MorphWeight)
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
struct AActor__00ce8700 : public AActor
{
	void eventSetAnimPosition(FName SlotName, INT ChannelIndex, FName InAnimSeqName, FLOAT InPosition, UBOOL bFireNotifies, UBOOL bLooping);
};

// @baa 0x00ce8700
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor__00ce8700::eventSetAnimPosition(FName SlotName, INT ChannelIndex, FName InAnimSeqName, FLOAT InPosition, UBOOL bFireNotifies, UBOOL bLooping)
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
struct AController_ : public AController
{
	UBOOL eventMoverFinished();
};

// @baa 0x00ce87d0
/* The script event's generated glue (EngineClasses.h), out of line here. */
UBOOL AController_::eventMoverFinished()
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
struct APlayerController_ : public APlayerController
{
	void eventNotifyDirectorControl(UBOOL bNowControlling);
};

// @baa 0x00ce8820
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APlayerController_::eventNotifyDirectorControl(UBOOL bNowControlling)
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
struct AGameReplicationInfo_ : public AGameReplicationInfo
{
	UBOOL eventShouldShowGore();
};

// @baa 0x00ce8880
/* The script event's generated glue (EngineClasses.h), out of line here. */
UBOOL AGameReplicationInfo_::eventShouldShowGore()
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
struct AActor__00ce86b0 : public AActor
{
	void eventSetAnimDirectorBoneName(FName BoneName);
};

// @baa 0x00ce86b0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor__00ce86b0::eventSetAnimDirectorBoneName(FName BoneName)
{
	struct Actor_eventSetAnimDirectorBoneName_Parms
	{
		FName BoneName;
	} Parms;
	Parms.BoneName = BoneName;
	ProcessEvent(FindFunctionChecked(g_026c4a90), &Parms);
}
