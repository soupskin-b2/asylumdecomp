// UnPlayer.cpp: 4 functions
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
