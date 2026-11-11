// UnSequence.cpp: 15 functions
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

	vf_19c(latentActor);
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

struct USequenceOp_ : public USequenceOp
{
	void sub_008be490(INT);
};

// @baa 0x00c98280
void USequenceOp::execForceActivateInput(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(InputIdx);
	P_FINISH;
	((USequenceOp_*)this)->sub_008be490(InputIdx);
}

struct UPrefabSequence__00c98350 : public UPrefabSequence
{
	void sub_00d1ff30(APrefabInstance*);
};

// @baa 0x00c98350
void UPrefabSequence::execSetOwnerPrefab(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APrefabInstance, InOwner);
	P_FINISH;
	((UPrefabSequence__00c98350*)this)->sub_00d1ff30(InOwner);
}

struct USequenceOp__00c98190 : public USequenceOp
{
	UBOOL sub_008bd720(INT);
};

// @baa 0x00c98190
void USequenceOp::execActivateOutputLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(OutputIdx);
	P_FINISH;
	*(UBOOL*)Result = ((USequenceOp__00c98190*)this)->sub_008bd720(OutputIdx);
}

struct USequence_ : public USequence
{
	void sub_008abb60(UBOOL);
};

// @baa 0x00c982e0
void USequence::execSetEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInEnabled);
	P_FINISH;
	((USequence_*)this)->sub_008abb60(bInEnabled);
}

struct USequenceOp__00cbc690 : public USequenceOp
{
	UBOOL ActivateNamedOutputLink(const FString& LinkDesc);
	void execActivateNamedOutputLink(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cbc690
void USequenceOp__00cbc690::execActivateNamedOutputLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(LinkDesc);
	P_FINISH;
	*(UBOOL*)Result = ActivateNamedOutputLink(LinkDesc);
}

struct USequenceObject__00cbc5a0 : public USequenceObject
{
	void ScriptLog(const FString& OutText, UBOOL bWarning);
	void execScriptLog(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cbc5a0
void USequenceObject__00cbc5a0::execScriptLog(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(LogText);
	P_GET_UBOOL_OPTX(bWarning, TRUE);
	P_FINISH;
	ScriptLog(LogText, bWarning);
}

struct USequence__00906850 : public USequence
{
	void FindSeqObjectsByName(const FString& SeqObjName, UBOOL bCheckComment, TArray<USequenceObject*>& OutputObjects, UBOOL bRecursive);
	void execFindSeqObjectsByName(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00906850
void USequence__00906850::execFindSeqObjectsByName(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(SeqObjName);
	P_GET_UBOOL(bCheckComment);
	P_GET_TARRAY_REF(USequenceObject*, OutputObjects);
	P_GET_UBOOL(bRecursive);
	P_FINISH;
	FindSeqObjectsByName(SeqObjName, bCheckComment, OutputObjects, bRecursive);
}

/* UStruct::IsChildOf isn't declared in Classes.h; this is UE3's inline body. */
struct UClass_ : public UClass
{
	UBOOL IsChildOf( const UField* SomeBase ) const
	{
		for ( const UField* Struct = this; Struct; Struct = Struct->SuperField )
			if ( Struct == SomeBase )
				return 1;
		return 0;
	}
};

struct USequence__009066d0 : public USequence
{
	void FindSeqObjectsByClass( UClass* DesiredClass, TArray<USequenceObject*>& OutputObjects, UBOOL bRecursive ) const;
	void execFindSeqObjectsByClass( FFrame& Stack, RESULT_DECL );
};

// @baa 0x009066d0
void USequence__009066d0::execFindSeqObjectsByClass( FFrame& Stack, RESULT_DECL )
{
	P_GET_OBJECT(UClass_, DesiredClass);
	P_GET_UBOOL(bRecursive);
	P_GET_TARRAY_REF(USequenceObject*, OutputObjects);
	P_FINISH;

#line 4288 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp"
	check(DesiredClass->IsChildOf(USequenceObject::StaticClass()));
	FindSeqObjectsByClass(DesiredClass, OutputObjects, bRecursive);
}

#line 196 "candidate.cpp"
