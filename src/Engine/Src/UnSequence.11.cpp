// UnSequence.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c98200
void USequenceOp::execPopulateLinkedVariableValues( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_168();
}

// @baa 0x00c98240
void USequenceOp::execPublishLinkedVariableValues( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_16c();
}

// @baa 0x008e7f80
INT USeqCond_SwitchBase::FindCaseValueIndex(INT CaseIndex)
{
	PURE_VIRTUAL(USeqCond_SwitchBase::FindCaseValueIndex, return INDEX_NONE;);
}

// @baa 0x008e7fc0
FString USeqCond_SwitchBase::GetCaseValueString(INT ValueIndex) const
{
	PURE_VIRTUAL(USeqCond_SwitchBase::GetCaseValueString, return TEXT("NOT IMPLMENTED"););
}

// @baa 0x00c98770
void USeqAct_Latent::execAbortFor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, latentActor);
	P_FINISH;

	vf_19c((INT)latentActor);
}

struct USequenceObject_ : public USequenceObject
{
	AWorldInfo* sub_008aba50();
};

// @baa 0x00c980a0
void USequenceObject::execGetWorldInfo(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AWorldInfo**)Result = ((USequenceObject_*)this)->sub_008aba50();
}

struct UPrefabSequence_ : public UPrefabSequence
{
	APrefabInstance* sub_00d1ff40();
};

// @baa 0x00c983b0
void UPrefabSequence::execGetOwnerPrefab(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(APrefabInstance**)Result = ((UPrefabSequence_*)this)->sub_00d1ff40();
}
