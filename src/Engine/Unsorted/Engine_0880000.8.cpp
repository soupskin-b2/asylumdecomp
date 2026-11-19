// Engine_0880000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0088a510
void UReachSpec::execGetEnd(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = End.Actor;
}

extern FName g_026c46e4;
	/* ENGINE_PostRender */

// @baa 0x00888880
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UGameViewportClient::eventPostRender(class UCanvas* Canvas)
{
	struct GameViewportClient_eventPostRender_Parms
	{
		class UCanvas* Canvas;
	} Parms;
	Parms.Canvas = Canvas;
	ProcessEvent(FindFunctionChecked(g_026c46e4), &Parms);
}

extern FName g_026c4ce4;
	/* ENGINE_Tick */
/* EName entries Core.h doesn't list yet (UnNames.h) */

// @baa 0x008888c0
/* The script event's generated glue (EngineClasses.h), out of line here. Tick is a probe
 * function: the glue only calls into script when the current state probes for it. */
void UGameViewportClient::eventTick(FLOAT DeltaTime)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Tick - NAME_PROBEMIN))))
	{
		struct GameViewportClient_eventTick_Parms
		{
			FLOAT DeltaTime;
		} Parms;
		Parms.DeltaTime = DeltaTime;
		ProcessEvent(FindFunctionChecked(g_026c4ce4), &Parms);
	}
}

extern FName g_026c40e8;
	/* ENGINE_GetSubtitleRegion */

// @baa 0x00888920
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UGameViewportClient::eventGetSubtitleRegion(FVector2D& MinPos, FVector2D& MaxPos)
{
	struct GameViewportClient_eventGetSubtitleRegion_Parms
	{
		FVector2D MinPos;
		FVector2D MaxPos;
	} Parms;
	Parms.MinPos = MinPos;
	Parms.MaxPos = MaxPos;
	ProcessEvent(FindFunctionChecked(g_026c40e8), &Parms);
	MinPos = Parms.MinPos;
	MaxPos = Parms.MaxPos;
}

extern FName g_026c42b8;
	/* HandlePathObstruction */

// @baa 0x008885b0
/* Controller.HandlePathObstruction script event: the generated glue, out of line here. */
UBOOL AController::eventHandlePathObstruction(class AActor* BlockedBy)
{
	struct Controller_eventHandlePathObstruction_Parms
	{
		class AActor* BlockedBy;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.BlockedBy = BlockedBy;
	ProcessEvent(FindFunctionChecked(g_026c42b8), &Parms);
	return Parms.ReturnValue;
}

/* UReachSpec::GetDirection (0x88a550) isn't declared in the kit. */

// @baa 0x0088a6f0
void UReachSpec::execGetDirection(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = this->GetDirection();
}

extern FName g_026c4c3c;
	/* ENGINE_GetZoomMagnification */

// @baa 0x00888660
/* The script event's generated glue (EngineClasses.h), out of line here. */
FLOAT APlayerController::eventGetZoomMagnification()
{
	struct PlayerController_eventGetZoomMagnification_Parms
	{
		FLOAT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026c4c3c), &Parms);
	return Parms.ReturnValue;
}
