// UnSequence.cpp: 15 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c98200
void USequenceOp::execPopulateLinkedVariableValues( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PopulateLinkedVariableValues();
}

// @baa 0x00c98240
void USequenceOp::execPublishLinkedVariableValues( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PublishLinkedVariableValues();
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

	AbortFor(latentActor);
}

// @baa 0x00c980a0
void USequenceObject::execGetWorldInfo(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AWorldInfo**)Result = ((USequenceObject*)this)->GetWorldInfo();
}

// @baa 0x00c983b0
void UPrefabSequence::execGetOwnerPrefab(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(APrefabInstance**)Result = ((UPrefabSequence*)this)->GetOwnerPrefab();
}

// @baa 0x00c98280
void USequenceOp::execForceActivateInput(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(InputIdx);
	P_FINISH;
	((USequenceOp*)this)->ForceActivateInput(InputIdx);
}

// @baa 0x00c98350
void UPrefabSequence::execSetOwnerPrefab(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APrefabInstance, InOwner);
	P_FINISH;
	((UPrefabSequence*)this)->SetOwnerPrefab(InOwner);
}

// @baa 0x00c98190
void USequenceOp::execActivateOutputLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(OutputIdx);
	P_FINISH;
	*(UBOOL*)Result = this->ActivateOutputLink(OutputIdx);
}

// @baa 0x00c982e0
void USequence::execSetEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInEnabled);
	P_FINISH;
	SetEnabled(bInEnabled);
}

// @baa 0x00cbc690
void USequenceOp::execActivateNamedOutputLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(LinkDesc);
	P_FINISH;
	*(UBOOL*)Result = ActivateNamedOutputLink(LinkDesc);
}

// @baa 0x00cbc5a0
void USequenceObject::execScriptLog(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(LogText);
	P_GET_UBOOL_OPTX(bWarning, TRUE);
	P_FINISH;
	ScriptLog(LogText, bWarning);
}

// @baa 0x00906850
void USequence::execFindSeqObjectsByName(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(SeqObjName);
	P_GET_UBOOL(bCheckComment);
	P_GET_TARRAY_REF(USequenceObject*, OutputObjects);
	P_GET_UBOOL(bRecursive);
	P_FINISH;
	FindSeqObjectsByName(SeqObjName, bCheckComment, OutputObjects, bRecursive);
}

// @baa 0x009066d0
void USequence::execFindSeqObjectsByClass( FFrame& Stack, RESULT_DECL )
{
	P_GET_OBJECT(UClass, DesiredClass);
	P_GET_UBOOL(bRecursive);
	P_GET_TARRAY_REF(USequenceObject*, OutputObjects);
	P_FINISH;

#line 4288 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp"
	check(DesiredClass->IsChildOf(USequenceObject::StaticClass()));
	FindSeqObjectsByClass(DesiredClass, OutputObjects, bRecursive);
}

#line 196 "candidate.cpp"
