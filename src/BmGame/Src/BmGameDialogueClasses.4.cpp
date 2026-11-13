// BmGameDialogueClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include <new.h>

struct URSeqAct_ConversationDialogue_ : URSeqAct_ConversationDialogue
{
    void ReBuildScriptNames(); /* 0x0156c200 */
};

// @baa 0x0156c200
void URSeqAct_ConversationDialogue_::ReBuildScriptNames()
{
    ScriptName_Clients.Remove(0, ScriptName_Clients.Num());
    for (INT LineIndex = 0; LineIndex < Conversation->ConversationLines.Num(); ++LineIndex)
    {
        if (FName(TEXT("Batman")) == Conversation->ConversationLines(LineIndex).CharacterName
            || FName(TEXT("Bruce_Wayne")) == Conversation->ConversationLines(LineIndex).CharacterName)
        {
            continue;
        }
        UBOOL AlreadyPresent = FALSE;
        for (INT ClientIndex = 0; ClientIndex < ScriptName_Clients.Num(); ++ClientIndex)
        {
            if (ScriptName_Clients(ClientIndex) == Conversation->ConversationLines(LineIndex).CharacterName)
            {
                AlreadyPresent = TRUE;
                break;
            }
        }
        if (!AlreadyPresent)
        {
            ScriptName_Clients.AddItem(Conversation->ConversationLines(LineIndex).CharacterName);
        }
    }
}
