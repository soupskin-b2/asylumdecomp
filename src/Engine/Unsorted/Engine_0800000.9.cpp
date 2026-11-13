// Engine_0800000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ff8;
	/* ENGINE_UpdateCamera */
struct ACamera_ : public ACamera
{
	void eventUpdateCamera(FLOAT DeltaTime);
};

// @baa 0x00802b00
/* The script event's generated glue (EngineClasses.h), out of line here. */
void ACamera_::eventUpdateCamera(FLOAT DeltaTime)
{
	struct Camera_eventUpdateCamera_Parms
	{
		FLOAT DeltaTime;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026c4ff8), &Parms);
}

extern FName g_026c4c6c;
	/* ENGINE_GetPlayerViewPoint */
struct AController_ : public AController
{
	void eventGetPlayerViewPoint(FVector& out_Location, FRotator& out_Rotation);
};

// @baa 0x00802b50
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AController_::eventGetPlayerViewPoint(FVector& out_Location, FRotator& out_Rotation)
{
	struct Controller_eventGetPlayerViewPoint_Parms
	{
		FVector out_Location;
		FRotator out_Rotation;
	} Parms;
	Parms.out_Location = out_Location;
	Parms.out_Rotation = out_Rotation;
	ProcessEvent(FindFunctionChecked(g_026c4c6c), &Parms);
	out_Location = Parms.out_Location;
	out_Rotation = Parms.out_Rotation;
}

extern FName g_026c4030;
	/* ENGINE_PostTouch */
/* EName entry Core.h doesn't list yet (UnNames.h): probe bit 31 */
struct AActor_ : public AActor
{
	void eventPostTouch(AActor* Other);
};

// @baa 0x00802900
/* The script event's generated glue (EngineClasses.h), out of line here. PostTouch is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor_::eventPostTouch(AActor* Other)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_PostTouch - NAME_PROBEMIN))))
	{
		struct Actor_eventPostTouch_Parms
		{
			AActor* Other;
		} Parms;
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c4030), &Parms);
	}
}

extern FName g_026c4ce4;
	/* ENGINE_Tick */
/* Kit gap: the generated glue for Actor's script event Tick (EngineClasses.h) isn't declared; this build keeps it
 * out of line (AActor::Tick calls it). Tick is a probe function. */
struct AActor__00802950 : public AActor
{
	void eventTick(FLOAT DeltaTime);
};

// @baa 0x00802950
void AActor__00802950::eventTick(FLOAT DeltaTime)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Tick - NAME_PROBEMIN))))
	{
		struct Actor_eventTick_Parms
		{
			FLOAT DeltaTime;
		} Parms;
		Parms.DeltaTime = DeltaTime;
		ProcessEvent(FindFunctionChecked(g_026c4ce4), &Parms);
	}
}

extern FName g_026c5204;
	/* ENGINE_PlayerTick */
/* Kit gap: the generated glue for PlayerController's script event PlayerTick (EngineClasses.h) isn't declared;
 * this build keeps it out of line. PlayerTick is a probe function. */
struct APlayerController_ : public APlayerController
{
	void eventPlayerTick(FLOAT DeltaTime);
};

// @baa 0x00802c10
void APlayerController_::eventPlayerTick(FLOAT DeltaTime)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_PlayerTick - NAME_PROBEMIN))))
	{
		struct PlayerController_eventPlayerTick_Parms
		{
			FLOAT DeltaTime;
		} Parms;
		Parms.DeltaTime = DeltaTime;
		ProcessEvent(FindFunctionChecked(g_026c5204), &Parms);
	}
}
