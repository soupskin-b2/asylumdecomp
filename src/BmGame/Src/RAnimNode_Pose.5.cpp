// RAnimNode_Pose.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e34c8;
	/* PlayForceFeedBack */
struct ARPlayerController_ : public ARPlayerController
{
	void eventPlayForceFeedBack(class UForceFeedbackWaveform* FFWaveform);
};

// @baa 0x01595270
/* RPlayerController.PlayForceFeedBack script event: the generated glue, out of line here. */
void ARPlayerController_::eventPlayForceFeedBack(class UForceFeedbackWaveform* FFWaveform)
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
struct ARAnimatedCameraActor_ : public ARAnimatedCameraActor
{
	void eventSetFOV(FLOAT DesiredValue, FLOAT TimeToChange);
};

// @baa 0x015952d0
/* RAnimatedCameraActor.SetFOV script event: the generated glue, out of line here. */
void ARAnimatedCameraActor_::eventSetFOV(FLOAT DesiredValue, FLOAT TimeToChange)
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
struct ARAnimatedCameraActor__01595330 : public ARAnimatedCameraActor
{
	void eventSetGameSpeed(FLOAT DesiredValue, FLOAT TimeToChange);
};

// @baa 0x01595330
/* RAnimatedCameraActor.SetGameSpeed script event: the generated glue, out of line here. */
void ARAnimatedCameraActor__01595330::eventSetGameSpeed(FLOAT DesiredValue, FLOAT TimeToChange)
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
