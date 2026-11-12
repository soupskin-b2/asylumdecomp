// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appFree out of line, so ~TArray inlines */
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* TArray<USequenceObject*>::AddItem, out of line here (the kit's TArray has no AddItem). */
struct FSequenceObjectArray : public TArray<USequenceObject*>
{
	INT sub_008b2850(USequenceObject* const& Item);
	INT AddItem(USequenceObject* const& Item) { return sub_008b2850(Item); }
};

/* USequence::FindSeqObjectsByClass isn't declared in Classes.h. */

// @baa 0x009043d0
void USequence::FindSeqObjectsByClass(UClass* DesiredClass, TArray<USequenceObject*>& OutputObjects, UBOOL bRecursive) const
{
	// The original has a local array that is constructed (with its own unwind state) but never
	// used; its inlined destructor folds away. Without it the EH frame and stack layout differ.
	TArray<USequence*> UnusedSequences;

	for (INT Idx = 0; Idx < SequenceObjects.Num(); Idx++)
	{
		if (SequenceObjects(Idx) != NULL && ObjectIsA(SequenceObjects(Idx), DesiredClass))
		{
			((FSequenceObjectArray&)OutputObjects).AddItem(SequenceObjects(Idx));
		}
	}

	if (bRecursive)
	{
		// search the nested sequences too
		for (INT Idx = 0; Idx < NestedSequences.Num(); Idx++)
		{
			const USequence* Seq = (const USequence*)NestedSequences(Idx);
			if (Seq != NULL)
			{
				Seq->FindSeqObjectsByClass(DesiredClass, OutputObjects, bRecursive);
			}
		}
	}
}
