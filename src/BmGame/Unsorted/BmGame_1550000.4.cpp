// BmGame_1550000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3740;
	/* GetOutputLinkForCurrentSelection */

// @baa 0x01558360
/* RSeqAct_PlayerDialogueOptions.GetOutputLinkForCurrentSelection script event: the generated glue, out of line here. */
INT URSeqAct_PlayerDialogueOptions::eventGetOutputLinkForCurrentSelection()
{
	struct RSeqAct_PlayerDialogueOptions_eventGetOutputLinkForCurrentSelection_Parms
	{
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e3740), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e27fc;
	/* TaggedLookAt */

// @baa 0x01558440
/* RSeqAct_ConversationDialogue.TaggedLookAt script event: the generated glue, out of line here. */
void URSeqAct_ConversationDialogue::eventTaggedLookAt(class ARPawnCharacter* Looker, class ARPawnCharacter* LookerAt)
{
	struct RSeqAct_ConversationDialogue_eventTaggedLookAt_Parms
	{
		class ARPawnCharacter* Looker;
		class ARPawnCharacter* LookerAt;
	} Parms;
	Parms.Looker = Looker;
	Parms.LookerAt = LookerAt;
	ProcessEvent(FindFunctionChecked(g_026e27fc), &Parms);
}

extern FName g_026e2b7c;
	/* GetSpeakingTo */

// @baa 0x015584d0
/* RSeqAct_ConversationDialogue.GetSpeakingTo script event: the generated glue, out of line here. */
class ARPawnCharacter* URSeqAct_ConversationDialogue::eventGetSpeakingTo(INT Index)
{
	struct RSeqAct_ConversationDialogue_eventGetSpeakingTo_Parms
	{
		INT Index;
		class ARPawnCharacter* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.Index = Index;
	ProcessEvent(FindFunctionChecked(g_026e2b7c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2e08;
	/* SetSource */

// @baa 0x01558540
/* RSeqAct_PlayerDialogueLine.SetSource script event: the generated glue, out of line here. */
void URSeqAct_PlayerDialogueLine::eventSetSource(class URSeqAct_PlayerDialogueOptions* D)
{
	struct RSeqAct_PlayerDialogueLine_eventSetSource_Parms
	{
		class URSeqAct_PlayerDialogueOptions* D;
	} Parms;
	Parms.D = D;
	ProcessEvent(FindFunctionChecked(g_026e2e08), &Parms);
}

extern FName g_026e335c;
	/* BMGAME_SetVariableLinkType */

// @baa 0x01558490
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_ConversationDialogue::eventSetVariableLinkType(INT I)
{
	struct RSeqAct_ConversationDialogue_eventSetVariableLinkType_Parms
	{
		INT I;
	} Parms;
	Parms.I = I;
	ProcessEvent(FindFunctionChecked(g_026e335c), &Parms);
}

	/* BMGAME_SetVariableLinkType */
struct URSeqAct_ConversationDialogue__015585b0 : public URSeqAct_ConversationDialogue
{
	void eventSetVariableLinkType(INT I);
};

// @baa 0x015585b0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URSeqAct_ConversationDialogue__015585b0::eventSetVariableLinkType(INT I)
{
	struct RSeqAct_ConversationDialogue_eventSetVariableLinkType_Parms
	{
		INT I;
	} Parms;
	Parms.I = I;
	ProcessEvent(FindFunctionChecked(g_026e335c), &Parms);
}
