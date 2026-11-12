// Engine_0800000.cpp: 3 functions
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
#define NAME_PostTouch 0x14b
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
