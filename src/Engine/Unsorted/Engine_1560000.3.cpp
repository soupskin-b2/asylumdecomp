// Engine_1560000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"
#include "ue3/Native.h"

extern FName g_026e321c;
	/* BMGAME_ExitSpeech */
/* Kit gap: the script event's generated glue (BmGameClasses.h). */
struct URSeqAct_PlaySpeechBase_ : public URSeqAct_PlaySpeechBase
{
	void eventExitSpeech()
	{
		ProcessEvent(FindFunctionChecked(g_026e321c), NULL);
	}
};

/* Kit gap: USeqAct_Latent's script event glue for Update (0x008aa600, out of line). */

// @baa 0x01568380
/* The second input aborts the speech. Once the speech has started (or finished) it ends when finished or when
 * the timeout runs out; the timeout only counts down without the FMOD device, which reports the end itself. */
UBOOL URSeqAct_PlaySpeechBase::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks.Num() >= 2 && InputLinks(1).bHasImpulse)
	{
		((URSeqAct_PlaySpeechBase_*)this)->eventExitSpeech();
	}

	UFMODAudioDevice* FMODDevice = Cast<UFMODAudioDevice>(GEngine->Client->GetAudioDevice());
	if ((bHasBegunStateChange && bHasBegunFirstLine) || bFinished)
	{
		if (FMODDevice == NULL)
		{
			TimeOut -= DeltaTime;
		}
		if (bFinished || TimeOut < 0.f)
		{
			return TRUE;
		}
	}
	this->eventUpdate(DeltaTime);
	return FALSE;
}
