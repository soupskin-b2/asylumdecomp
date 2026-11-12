// BMBossCrocClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3684;
	/* BMGAME_BackToGameCamera */
extern FName g_026e2718;
	/* BMGAME_UpdateCameraRoot */
/* Kit gap: the script events' generated glue (BmGameClasses.h). */
struct URSeqAct_CrocRelativeAnimCamera_ : public URSeqAct_CrocRelativeAnimCamera
{
	void eventBackToGameCamera()
	{
		ProcessEvent(FindFunctionChecked(g_026e3684), NULL);
	}
	void eventUpdateCameraRoot()
	{
		ProcessEvent(FindFunctionChecked(g_026e2718), NULL);
	}
};

// @baa 0x016cc140
/* The second input ends the camera: the output fires and script returns to the game camera. Until then the
 * camera root follows along every tick. */
UBOOL URSeqAct_CrocRelativeAnimCamera::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(1).bHasImpulse)
	{
		OutputLinks(0).bHasImpulse = TRUE;
		((URSeqAct_CrocRelativeAnimCamera_*)this)->eventBackToGameCamera();
		return TRUE;
	}
	((URSeqAct_CrocRelativeAnimCamera_*)this)->eventUpdateCameraRoot();
	return FALSE;
}
