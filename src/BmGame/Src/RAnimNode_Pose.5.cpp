// RAnimNode_Pose.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e34c8;
	/* PlayForceFeedBack */

// @baa 0x01595270
/* RPlayerController.PlayForceFeedBack script event: the generated glue, out of line here. */
void ARPlayerController::eventPlayForceFeedBack(class UForceFeedbackWaveform* FFWaveform)
{
	struct RPlayerController_eventPlayForceFeedBack_Parms
	{
		class UForceFeedbackWaveform* FFWaveform;
	} Parms;
	Parms.FFWaveform = FFWaveform;
	ProcessEvent(FindFunctionChecked(g_026e34c8), &Parms);
}

extern FName g_026e264c;
	/* SetFOV */

// @baa 0x015952d0
/* RAnimatedCameraActor.SetFOV script event: the generated glue, out of line here. */
void ARAnimatedCameraActor::eventSetFOV(FLOAT DesiredValue, FLOAT TimeToChange)
{
	struct RAnimatedCameraActor_eventSetFOV_Parms
	{
		FLOAT DesiredValue;
		FLOAT TimeToChange;
	} Parms;
	Parms.DesiredValue = DesiredValue;
	Parms.TimeToChange = TimeToChange;
	ProcessEvent(FindFunctionChecked(g_026e264c), &Parms);
}

extern FName g_026e261c;
	/* SetGameSpeed */

// @baa 0x01595330
/* RAnimatedCameraActor.SetGameSpeed script event: the generated glue, out of line here. */
void ARAnimatedCameraActor::eventSetGameSpeed(FLOAT DesiredValue, FLOAT TimeToChange)
{
	struct RAnimatedCameraActor_eventSetGameSpeed_Parms
	{
		FLOAT DesiredValue;
		FLOAT TimeToChange;
	} Parms;
	Parms.DesiredValue = DesiredValue;
	Parms.TimeToChange = TimeToChange;
	ProcessEvent(FindFunctionChecked(g_026e261c), &Parms);
}

#include "ue3/ConstructObject.h"

// @baa 0x015a2270
template URPoseConfig* ConstructObject<URPoseConfig>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 105 "candidate.cpp"

// @baa 0x015a2310
template URWeaponConfig* ConstructObject<URWeaponConfig>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
