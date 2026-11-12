// UnSequence.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00cc3b10
void USequenceOp::execGetLinkedObjects(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(USequenceObject*, out_Objects);
	P_GET_OBJECT_OPTX(UClass, ObjectType, NULL);
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_FINISH;
	GetLinkedObjects(out_Objects, ObjectType, bRecurse);
}

// @baa 0x00c98110
void USequenceOp::execHasLinkedOps(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bConsiderInputLinks, FALSE);
	P_FINISH;
	*(UBOOL*)Result = HasLinkedOps(bConsiderInputLinks);
}

// @baa 0x00c98630
// @baa 0x00c98630
void USeqAct_GetMatInstVectorParam::execGetColour(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FLinearColor, Colour);
    P_FINISH;
    GetColour(Colour);
}
