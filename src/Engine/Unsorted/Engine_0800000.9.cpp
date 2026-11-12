// Engine_0800000.cpp: 2 functions
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
