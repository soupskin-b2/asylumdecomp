// UnPlayer.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3ec8;
	/* ENGINE_PreRender */
struct UGameViewportClient_ : public UGameViewportClient
{
	void eventPreRender(class UCanvas* Canvas);
};

// @baa 0x008886e0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UGameViewportClient_::eventPreRender(class UCanvas* Canvas)
{
	struct GameViewportClient_eventPreRender_Parms
	{
		class UCanvas* Canvas;
	} Parms;
	Parms.Canvas = Canvas;
	ProcessEvent(FindFunctionChecked(g_026c3ec8), &Parms);
}

extern FName g_026c553c;
	/* SpecialCost */
struct ANavigationPoint_ : public ANavigationPoint
{
	INT eventSpecialCost(class APawn* Seeker, class UReachSpec* Path);
};

// @baa 0x00888760
/* NavigationPoint.SpecialCost script event: the generated glue, out of line here. */
INT ANavigationPoint_::eventSpecialCost(class APawn* Seeker, class UReachSpec* Path)
{
	struct NavigationPoint_eventSpecialCost_Parms
	{
		class APawn* Seeker;
		class UReachSpec* Path;
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	Parms.Seeker = Seeker;
	Parms.Path = Path;
	ProcessEvent(FindFunctionChecked(g_026c553c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c42fc;
	/* OutputText */
struct UConsole_ : public UConsole
{
	void eventOutputText(const FString& Text);
};

// @baa 0x00895f30
/* Console.OutputText script event: the generated glue, out of line here. */
void UConsole_::eventOutputText(const FString& Text)
{
	struct Console_eventOutputText_Parms
	{
		FString Text;
	} Parms;
	Parms.Text = Text;
	ProcessEvent(FindFunctionChecked(g_026c42fc), &Parms);
}

/* Kit gaps: the native's exec and IsFullScreenViewport (008898e0) aren't declared (name from the exe's native table). */
struct UGameViewportClient__00c8cd10 : public UGameViewportClient
{
	void execIsFullScreenViewport(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8cd10
void UGameViewportClient__00c8cd10::execIsFullScreenViewport(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsFullScreenViewport();
}

extern FName g_026c4ce4;
	/* ENGINE_Tick */
/* Kit gap: UGameViewportClient::Tick (UnPlayer.cpp; not virtual in this build, UWorld::Tick calls it on
 * GEngine->GameViewport) isn't declared. */
struct UGameViewportClient__00892430 : public UGameViewportClient
{
	/* GameViewportClient.Tick script event: the generated glue, inlined here (Tick is a probe function). */
	FORCEINLINE void eventTick(FLOAT DeltaTime)
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
	void Tick(FLOAT DeltaTime);
};

// @baa 0x00892430
void UGameViewportClient__00892430::Tick(FLOAT DeltaTime)
{
	// first call the unrealscript tick
	eventTick(DeltaTime);

	// now tick all interactions
	for (INT i = 0; i < GlobalInteractions.Num(); i++)
	{
		UInteraction* Interaction = GlobalInteractions(i);
		Interaction->Tick(DeltaTime);
	}

	bDisplayingUIMouseCursor = FALSE;
}

extern FName g_026c4a1c;
	/* ENGINE_HandleInputChar */
/* Kit gap: the generated delegate glue for GameViewportClient.HandleInputChar (EngineClasses.h) isn't declared;
 * this build keeps it out of line (UGameViewportClient::InputChar calls it). */
struct UGameViewportClient__00895da0 : public UGameViewportClient
{
	UBOOL delegateHandleInputChar(INT ControllerId, const FString& Unicode);
};

// @baa 0x00895da0
UBOOL UGameViewportClient__00895da0::delegateHandleInputChar(INT ControllerId, const FString& Unicode)
{
	struct GameViewportClient_eventHandleInputChar_Parms
	{
		INT ControllerId;
		FString Unicode;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.ControllerId = ControllerId;
	Parms.Unicode = Unicode;
	ProcessDelegate(g_026c4a1c, &__HandleInputChar__Delegate, &Parms, NULL);
	return Parms.ReturnValue;
}

extern FName g_026c50c8;
	/* ENGINE_OnReceivedNativeInputChar */
/* Kit gap: the generated delegate glue for Interaction.OnReceivedNativeInputChar (EngineClasses.h) isn't declared;
 * this build keeps it out of line (the viewport client's InputChar calls it on each interaction). */
struct UInteraction_ : public UInteraction
{
	UBOOL delegateOnReceivedNativeInputChar(INT ControllerId, const FString& Unicode);
};

// @baa 0x00895e80
UBOOL UInteraction_::delegateOnReceivedNativeInputChar(INT ControllerId, const FString& Unicode)
{
	struct Interaction_eventOnReceivedNativeInputChar_Parms
	{
		INT ControllerId;
		FString Unicode;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.ControllerId = ControllerId;
	Parms.Unicode = Unicode;
	ProcessDelegate(g_026c50c8, &__OnReceivedNativeInputChar__Delegate, &Parms, NULL);
	return Parms.ReturnValue;
}
