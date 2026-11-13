// BmGameDialogueClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

extern FName g_026e3740;
	/* BMGAME_GetOutputLinkForCurrentSelection */
/* Kit gaps: the script events' generated glue (BmGameClasses.h); RSeqAct_PlayerDialogueLine's SetSource copy is
 * out of line (0x01558540). */
struct URSeqAct_PlayerDialogueOptions_ : public URSeqAct_PlayerDialogueOptions
{
	INT eventGetOutputLinkForCurrentSelection()
	{
		struct RSeqAct_PlayerDialogueOptions_eventGetOutputLinkForCurrentSelection_Parms
		{
			INT ReturnValue;
		} Parms;
		Parms.ReturnValue = 0;
		ProcessEvent(FindFunctionChecked(g_026e3740), &Parms);
		return Parms.ReturnValue;
	}
};

// @baa 0x01591ca0
/* Slot 0x178 is USequenceOp::DeActivated (unnamed in the kit). Unless aborted, the output for the selected option
 * fires (USequenceOp::ActivateOutputLink, inlined), and the dialogue line it leads to learns where it came from. */
void URSeqAct_PlayerDialogueOptions::DeActivated()
{
	if (!bAborted)
	{
		INT OutputIdx = ((URSeqAct_PlayerDialogueOptions_*)this)->eventGetOutputLinkForCurrentSelection();
		URSeqAct_PlayerDialogueLine* Line = Cast<URSeqAct_PlayerDialogueLine>(OutputLinks(OutputIdx).Links(0).LinkedOp);
		if (Line)
		{
			Line->eventSetSource(this);
		}
		FSeqOpOutputLink& Link = OutputLinks(OutputIdx);
		if (!Link.bDisabled)
		{
			Link.bHasImpulse = TRUE;
		}
	}
	bAborted = FALSE;
}
