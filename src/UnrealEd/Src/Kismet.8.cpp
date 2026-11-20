// Kismet.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3f0c;
	/* ENGINE_IsValidLevelSequenceObject */
// @baa 0x01191f80
UBOOL USequenceObject::eventIsValidLevelSequenceObject()
{
	struct SequenceObject_eventIsValidLevelSequenceObject_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026c3f0c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c54a0;

// @baa 0x01192000
void USeqCond_SwitchBase::eventRemoveValueEntry(INT RemoveIndex)
{
	struct SeqCond_SwitchBase_eventRemoveValueEntry_Parms
	{
		INT RemoveIndex;
	} Parms;
	Parms.RemoveIndex = RemoveIndex;
	ProcessEvent(FindFunctionChecked(g_026c54a0), &Parms);
}

extern FName g_026c3e68;

// @baa 0x01192040
void USeqCond_SwitchBase::eventInsertValueEntry(INT InsertIndex)
{
	struct SeqCond_SwitchBase_eventInsertValueEntry_Parms
	{
		INT InsertIndex;
	} Parms;
	Parms.InsertIndex = InsertIndex;
	ProcessEvent(FindFunctionChecked(g_026c3e68), &Parms);
}
