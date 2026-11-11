// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USequenceOp_ : public USequenceOp
{
	void GetLinkedObjects(TArray<USequenceObject*>& out_Objects, UClass* ObjectType, UBOOL bRecurse);
	void execGetLinkedObjects(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cc3b10
void USequenceOp_::execGetLinkedObjects(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(USequenceObject*, out_Objects);
	P_GET_OBJECT_OPTX(UClass, ObjectType, NULL);
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_FINISH;
	GetLinkedObjects(out_Objects, ObjectType, bRecurse);
}
