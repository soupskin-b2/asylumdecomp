// Kismet.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3f0c;
	/* ENGINE_IsValidLevelSequenceObject */
/* Kit gap: the generated glue for SequenceObject's script event IsValidLevelSequenceObject (EngineClasses.h) isn't
 * declared; this build keeps it out of line (Kismet.cpp calls it on a class default object). */
struct USequenceObject_ : public USequenceObject
{
	UBOOL eventIsValidLevelSequenceObject();
};

// @baa 0x01191f80
UBOOL USequenceObject_::eventIsValidLevelSequenceObject()
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
	/* ENGINE_RemoveValueEntry */
/* Kit gap: the generated glue for SeqCond_SwitchBase's script event RemoveValueEntry (EngineClasses.h) isn't declared; this build keeps it out of line. */
struct USeqCond_SwitchBase_ : public USeqCond_SwitchBase
{
	void eventRemoveValueEntry(INT RemoveIndex);
};

// @baa 0x01192000
void USeqCond_SwitchBase_::eventRemoveValueEntry(INT RemoveIndex)
{
	struct SeqCond_SwitchBase_eventRemoveValueEntry_Parms
	{
		INT RemoveIndex;
	} Parms;
	Parms.RemoveIndex = RemoveIndex;
	ProcessEvent(FindFunctionChecked(g_026c54a0), &Parms);
}

extern FName g_026c3e68;
	/* ENGINE_InsertValueEntry */
/* Kit gap: the generated glue for SeqCond_SwitchBase's script event InsertValueEntry (EngineClasses.h) isn't declared; this build keeps it out of line. */
struct USeqCond_SwitchBase__01192040 : public USeqCond_SwitchBase
{
	void eventInsertValueEntry(INT InsertIndex);
};

// @baa 0x01192040
void USeqCond_SwitchBase__01192040::eventInsertValueEntry(INT InsertIndex)
{
	struct SeqCond_SwitchBase_eventInsertValueEntry_Parms
	{
		INT InsertIndex;
	} Parms;
	Parms.InsertIndex = InsertIndex;
	ProcessEvent(FindFunctionChecked(g_026c3e68), &Parms);
}
