// BmGameDialogueClasses.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3630;
	/* CheckPlayOnce */
struct URSeqAct_PlaySpeechBase_ : public URSeqAct_PlaySpeechBase
{
	UBOOL eventCheckPlayOnce();
};

// @baa 0x01584db0
/* RSeqAct_PlaySpeechBase.CheckPlayOnce script event: the generated glue, out of line here. */
UBOOL URSeqAct_PlaySpeechBase_::eventCheckPlayOnce()
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
struct URSeqAct_ConversationDialogue_ : public URSeqAct_ConversationDialogue
{
	UBOOL eventIsOptionNext();
};

// @baa 0x01585050
/* RSeqAct_ConversationDialogue.IsOptionNext script event: the generated glue, out of line here. */
UBOOL URSeqAct_ConversationDialogue_::eventIsOptionNext()
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
struct URSeqAct_PlaySpeechBase__01584c70 : public URSeqAct_PlaySpeechBase
{
	void eventDisableQuitLines();
};

// @baa 0x01584c70
/* RSeqAct_PlaySpeechBase.DisableQuitLines script event: the generated glue, out of line here. */
void URSeqAct_PlaySpeechBase__01584c70::eventDisableQuitLines()
{
	ProcessEvent(FindFunctionChecked(g_026e377c), NULL);
}

extern FName g_026e25cc;
	/* ChangeDialogueCamera */
struct URSeqAct_ConversationDialogue__01585090 : public URSeqAct_ConversationDialogue
{
	void eventChangeDialogueCamera();
};

// @baa 0x01585090
/* RSeqAct_ConversationDialogue.ChangeDialogueCamera script event: the generated glue, out of line here. */
void URSeqAct_ConversationDialogue__01585090::eventChangeDialogueCamera()
{
	ProcessEvent(FindFunctionChecked(g_026e25cc), NULL);
}

extern FName g_026e328c;
	/* VoAStartSound */
struct URSeqAct_VoiceOfArkham_ : public URSeqAct_VoiceOfArkham
{
	void eventVoAStartSound();
};

// @baa 0x01585830
/* RSeqAct_VoiceOfArkham.VoAStartSound script event: the generated glue, out of line here. */
void URSeqAct_VoiceOfArkham_::eventVoAStartSound()
{
	ProcessEvent(FindFunctionChecked(g_026e328c), NULL);
}
