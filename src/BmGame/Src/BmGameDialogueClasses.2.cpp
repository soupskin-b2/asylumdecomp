// BmGameDialogueClasses.cpp: 2 functions
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
