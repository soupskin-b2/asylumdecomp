// UnCamera.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c43ac;
	/* ClientSetViewTarget */
struct APlayerController_ : public APlayerController
{
	void eventClientSetViewTarget(class AActor* A, FViewTargetTransitionParams TransitionParams);
};

// @baa 0x00785280
/* PlayerController.ClientSetViewTarget script event: the generated glue, out of line here. */
void APlayerController_::eventClientSetViewTarget(class AActor* A, FViewTargetTransitionParams TransitionParams)
{
	struct PlayerController_eventClientSetViewTarget_Parms
	{
		class AActor* A;
		FViewTargetTransitionParams TransitionParams;
	} Parms;
	Parms.A = A;
	Parms.TransitionParams = TransitionParams;
	ProcessEvent(FindFunctionChecked(g_026c43ac), &Parms);
}
