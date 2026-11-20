// BmGameDialogueClasses.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3630;
	/* CheckPlayOnce */

// @baa 0x01584db0
/* RSeqAct_PlaySpeechBase.CheckPlayOnce script event: the generated glue, out of line here. */
UBOOL URSeqAct_PlaySpeechBase::eventCheckPlayOnce()
{
	struct RSeqAct_PlaySpeechBase_eventCheckPlayOnce_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3630), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e39c4;
	/* IsOptionNext */

// @baa 0x01585050
/* RSeqAct_ConversationDialogue.IsOptionNext script event: the generated glue, out of line here. */
UBOOL URSeqAct_ConversationDialogue::eventIsOptionNext()
{
	struct RSeqAct_ConversationDialogue_eventIsOptionNext_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e39c4), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e377c;
	/* DisableQuitLines */

// @baa 0x01584c70
/* RSeqAct_PlaySpeechBase.DisableQuitLines script event: the generated glue, out of line here. */
void URSeqAct_PlaySpeechBase::eventDisableQuitLines()
{
	ProcessEvent(FindFunctionChecked(g_026e377c), NULL);
}

extern FName g_026e25cc;
	/* ChangeDialogueCamera */

// @baa 0x01585090
/* RSeqAct_ConversationDialogue.ChangeDialogueCamera script event: the generated glue, out of line here. */
void URSeqAct_ConversationDialogue::eventChangeDialogueCamera()
{
	ProcessEvent(FindFunctionChecked(g_026e25cc), NULL);
}

extern FName g_026e328c;
	/* VoAStartSound */

// @baa 0x01585830
/* RSeqAct_VoiceOfArkham.VoAStartSound script event: the generated glue, out of line here. */
void URSeqAct_VoiceOfArkham::eventVoAStartSound()
{
	ProcessEvent(FindFunctionChecked(g_026e328c), NULL);
}

extern FName g_026e3a70;
	/* BMGAME_CheckForNewLine */

// @baa 0x01585020
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_ConversationDialogue::eventCheckForNewLine()
{
	ProcessEvent(FindFunctionChecked(g_026e3a70), NULL);
}

	/* BMGAME_CheckForNewLine */

// @baa 0x01585510
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_PlaySpeechConversation::eventCheckForNewLine()
{
	ProcessEvent(FindFunctionChecked(g_026e3a70), NULL);
}

	/* BMGAME_CheckForNewLine */
// @baa 0x015851f0
/* Lets script queue the next line, then runs the speech as usual. */
UBOOL URSeqAct_ConversationDialogue::UpdateOp(FLOAT DeltaTime)
{
	eventCheckForNewLine();
	return Super::UpdateOp(DeltaTime);
}

	/* BMGAME_CheckForNewLine */
// @baa 0x01585590
/* The third and fourth inputs duck and unduck the conversation; then the line delay counts down, script gets
 * a chance to queue the next line, and the speech runs as usual. */
UBOOL URSeqAct_PlaySpeechConversation::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks.Num() >= 3)
	{
		if (InputLinks(2).bHasImpulse)
		{
			bDucked = TRUE;
		}
		if (InputLinks.Num() >= 4 && InputLinks(3).bHasImpulse)
		{
			bDucked = FALSE;
		}
	}
	DelayTimer -= DeltaTime;
	eventCheckForNewLine();
	return Super::UpdateOp(DeltaTime);
}

	/* BMGAME_CheckPlayOnce */
// @baa 0x01584df0
/* Plays the line unless script says a play-once line already ran; then the second output fires instead
 * (USequenceOp::ActivateOutputLink(1), inlined). */
void URBMSeqAct_PlaySpeech::Activated()
{
	if (eventCheckPlayOnce())
	{
		bFinished = FALSE;
		USeqAct_Latent::Activated();
	}
	else if (OutputLinks.Num() > 1)
	{
		FSeqOpOutputLink& Link = OutputLinks(1);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
	}
}

	/* BMGAME_ChangeDialogueCamera */
// @baa 0x015850c0
/* Slot 0x178 is USequenceOp::DeActivated. When the player's dialogue options come next, the camera changes and the
 * options op linked from the exit output is told it may end; then the first output fires
 * (USequenceOp::ActivateOutputLink(0), inlined). */
void URSeqAct_ConversationDialogue::DeActivated()
{
	if (eventIsOptionNext())
	{
		eventChangeDialogueCamera();
		FSeqOpOutputLink& ExitLink = OutputLinks(ExitOptionNo);
		((URSeqAct_PlayerDialogueOptions*)ExitLink.Links(SavedLinkIndex).LinkedOp)->IsReadyToEnd = TRUE;
	}
	FSeqOpOutputLink& Link = OutputLinks(0);
	if (!Link.bDisabled)
	{
		Link.bHasImpulse = TRUE;
	}
}
