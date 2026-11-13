// UnSequence.cpp (part 10 of 10): 34 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x008e8070
IMPLEMENT_CLASS_AT(USeqCond_SwitchClass, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 72);

// @baa 0x008e8130
IMPLEMENT_CLASS_AT(USeqCond_SwitchName, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 76);

// @baa 0x008e81f0
IMPLEMENT_CLASS_AT(USeqCond_SwitchObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 77);

// @baa 0x008f9050
bool USeqCond_SwitchBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ff200
bool USeqCond_SwitchClass::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ff350
bool USeqCond_SwitchName::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008bf4a0
FString USeqCond_SwitchName::GetCaseValueString( INT ValueIndex ) const
{
	FString Result;
	if ( SupportedValues.IsValidIndex(ValueIndex) )
	{
		Result = SupportedValues(ValueIndex).NameValue.ToString();
	}
	return Result;
}

// @baa 0x008bf6c0
FString USeqCond_SwitchClass::GetCaseValueString( INT ValueIndex ) const
{
	FString Result;
	if ( ClassArray.IsValidIndex(ValueIndex) )
	{
		Result = ClassArray(ValueIndex).ClassName.ToString();
	}
	return Result;
}

/* The float formatter of UnSequence.cpp (005a9fc0): writes Value into Result as the format says. */
FString sub_005a9fc0(const TCHAR* Format, FLOAT Value);
// @baa 0x008c81a0
FString USeqVar_Float::vf_194()
{
	return sub_005a9fc0(TEXT("%2.3f"), FloatValue);
}

struct C
{
    char pad_00[0xd4];
    float Target;
    float Source;

    void sub_008e6260();
};

// @baa 0x008e6260
void C::sub_008e6260()
{
    Target = Source;
}

/* USeqCond_CompareFloat's Activated (USequenceOp vtable 0x174, declared only as vf_174). */
struct USeqCond_CompareFloat_ : public USeqCond_CompareFloat
{
	void Activated();
};

// @baa 0x008e7290
void USeqCond_CompareFloat_::Activated()
{
	// compare the values and set the matching output impulses
	if (ValueA <= ValueB)
	{
		OutputLinks(0).bHasImpulse = TRUE;
	}
	if (ValueA > ValueB)
	{
		OutputLinks(1).bHasImpulse = TRUE;
	}
	if (ValueA == ValueB)
	{
		OutputLinks(2).bHasImpulse = TRUE;
	}
	if (ValueA < ValueB)
	{
		OutputLinks(3).bHasImpulse = TRUE;
	}
	if (ValueA >= ValueB)
	{
		OutputLinks(4).bHasImpulse = TRUE;
	}
}

struct USeqCond_CompareInt_ : public USeqCond_CompareInt
{
    void Activated();
};

// @baa 0x008e74a0
void USeqCond_CompareInt_::Activated()
{
    // compare the values and set the appropriate output impulses
    if (ValueA <= ValueB)
    {
        OutputLinks(0).bHasImpulse = TRUE;
    }
    if (ValueA > ValueB)
    {
        OutputLinks(1).bHasImpulse = TRUE;
    }
    if (ValueA == ValueB)
    {
        OutputLinks(2).bHasImpulse = TRUE;
    }
    if (ValueA < ValueB)
    {
        OutputLinks(3).bHasImpulse = TRUE;
    }
    if (ValueA >= ValueB)
    {
        OutputLinks(4).bHasImpulse = TRUE;
    }
}

struct USeqCond_Increment_ : public USeqCond_Increment
{
    void Activated();
};

// @baa 0x008e77f0
void USeqCond_Increment_::Activated()
{
    ValueA += IncrementAmount;

    // compare the values and set the appropriate output impulses
    if (ValueA <= ValueB)
    {
        OutputLinks(0).bHasImpulse = TRUE;
    }
    if (ValueA > ValueB)
    {
        OutputLinks(1).bHasImpulse = TRUE;
    }
    if (ValueA == ValueB)
    {
        OutputLinks(2).bHasImpulse = TRUE;
    }
    if (ValueA < ValueB)
    {
        OutputLinks(3).bHasImpulse = TRUE;
    }
    if (ValueA >= ValueB)
    {
        OutputLinks(4).bHasImpulse = TRUE;
    }
}

struct USeqCond_IncrementFloat_ : public USeqCond_IncrementFloat
{
    void Activated();
};

// @baa 0x008e79f0
void USeqCond_IncrementFloat_::Activated()
{
    ValueA += IncrementAmount;

    // compare the values and set the appropriate output impulses
    if (ValueA <= ValueB)
    {
        OutputLinks(0).bHasImpulse = TRUE;
    }
    if (ValueA > ValueB)
    {
        OutputLinks(1).bHasImpulse = TRUE;
    }
    if (ValueA == ValueB)
    {
        OutputLinks(2).bHasImpulse = TRUE;
    }
    if (ValueA < ValueB)
    {
        OutputLinks(3).bHasImpulse = TRUE;
    }
    if (ValueA >= ValueB)
    {
        OutputLinks(4).bHasImpulse = TRUE;
    }
}

#define RF_PendingKill ((QWORD)0x2000000000000000ULL)
struct USequence_ : public USequence
{
    void MarkSequencePendingKill();
};

// @baa 0x008be500
void USequence_::MarkSequencePendingKill()
{
    MarkPendingKill();

    for (INT Idx = 0; Idx < SequenceObjects.Num(); Idx++)
    {
        if (SequenceObjects(Idx) != NULL)
        {
            SequenceObjects(Idx)->MarkPendingKill();
        }
    }

    for (INT Idx = 0; Idx < NestedSequences.Num(); Idx++)
    {
        if (NestedSequences(Idx) != NULL)
        {
            ((USequence_*)NestedSequences(Idx))->MarkSequencePendingKill();
        }
    }
}

/* FString::operator* and the operator=(const TCHAR*) copy this unit links against (0x006b1140);
 * the kit's FString has neither. */
struct FString_ : public FString
{
    const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
    FString_& operator=(const TCHAR* Other);
};

/* slot 0x01c (vf_01c) is UObject::PostLoad; USequenceObject's is 0x009086f0 */
struct USequenceObject_ : public USequenceObject
{
    void PostLoad();
};

struct USeqEvent_Console_ : public USeqEvent_Console
{
    void PostLoad();
};

// @baa 0x00909a50
void USeqEvent_Console_::PostLoad()
{
    // always use the class's default name
    USeqEvent_Console* DefaultObj = (USeqEvent_Console*)GetClass()->GetDefaultObject();
    (FString_&)ObjName = *(FString_&)DefaultObj->ObjName;
    ((USequenceObject_*)this)->USequenceObject_::PostLoad(); // Super::PostLoad()
}

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Name_ : public USeqVar_Name
{
    FString GetValueStr();
};

// @baa 0x008bce40
FString USeqVar_Name_::GetValueStr()
{
    return NameValue.ToString();
}

/* FVector::ToString (UnMath.h, 0x008c3650); the kit's FVector has no methods. */
struct FVector_ : public FVector
{
    FString ToString() const;
};

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Vector_ : public USeqVar_Vector
{
    FString GetValueStr();
};

// @baa 0x008c8a60
FString USeqVar_Vector_::GetValueStr()
{
    return ((const FVector_&)VectValue).ToString();
}

// The game keeps TArray<USequenceOp*>::Remove out of line (0x008b3a80).
extern template void TArray<USequenceOp*>::Remove(INT Index, INT Count);
// @baa 0x008c1df0
/* the out-of-line TArray<USequenceOp*>::Pop instantiation (unreferenced in the exe) */
template USequenceOp* TArray<USequenceOp*>::Pop();

struct USeqAct_LevelStreaming_ : public USeqAct_LevelStreaming
{
    /* 0x008ac0e0: TRUE once the streaming level has finished its pending load/visibility change */
    UBOOL IsLevelStreamingComplete(ULevelStreaming* LevelStreamingObject);
    UBOOL UpdateOp(FLOAT DeltaTime);
};

// @baa 0x008ac210
UBOOL USeqAct_LevelStreaming_::UpdateOp(FLOAT DeltaTime)
{
    return IsLevelStreamingComplete(Level);
}

/* slot 0x174 (vf_174) is USequenceOp::Activated */
struct USeqAct_SetString_ : public USeqAct_SetString
{
    void Activated();
};

// @baa 0x008e6490
void USeqAct_SetString_::Activated()
{
    Target = Value;
}

struct USequence__008abb30 : public USequence
{
    UBOOL IsEnabled() const;
};

// @baa 0x008abb30
/* a sequence is only enabled if all of its parents are */
UBOOL USequence__008abb30::IsEnabled() const
{
    return bEnabled && (ParentSequence == NULL || ((USequence__008abb30*)ParentSequence)->IsEnabled());
}

/* slot 0x180 (vf_180) */
struct USequenceOp_ : public USequenceOp
{
    void CopyPlayerFrom(USequenceOp* Other, INT Unused);
};

// @baa 0x008aba80
void USequenceOp_::CopyPlayerFrom(USequenceOp* Other, INT Unused)
{
    if (Other != NULL)
    {
        PlayerIndex = Other->PlayerIndex;
        GamepadID = Other->GamepadID;
    }
}

/* slot 0x04c (vf_04c) is UObject::PostEditChange(UProperty*); UObject's is 0x005c1a10 */
struct UObject_ : public UObject
{
    void PostEditChange(UProperty* PropertyThatChanged);
    void MarkPackageDirty(UBOOL InDirty = TRUE) const; /* 0x005d9570 (declared on UAnimSequence in the kit) */
};

struct USequenceObject__008abad0 : public USequenceObject
{
    void PostEditChange(UProperty* PropertyThatChanged);
};

// @baa 0x008abad0
void USequenceObject__008abad0::PostEditChange(UProperty* PropertyThatChanged)
{
    ((UObject_*)this)->UObject_::PostEditChange(PropertyThatChanged); // Super::PostEditChange()
    ((UObject_*)this)->MarkPackageDirty(TRUE);
}

// @baa 0x008c1e40
/* the out-of-line TArray<USequenceOp*>::ContainsItem instantiation (USequence::QueueSequenceOp's ActiveSequenceOps) */
template UBOOL TArray<USequenceOp*>::ContainsItem(USequenceOp* const& Item) const;

// @baa 0x008c12c0
/* the out-of-line TArray<USeqAct_Latent*>::ContainsItem instantiation (AActor::LatentActions) */
template UBOOL TArray<USeqAct_Latent*>::ContainsItem(USeqAct_Latent* const& Item) const;

/* FString::operator== (UnString.h, case-insensitive; 0x00544d40); the kit's FString has none. */
struct FString__008bd7b0 : public FString
{
    UBOOL operator==(const FString& Other) const;
};

struct USequenceOp__008bd7b0 : public USequenceOp
{
    UBOOL ActivateNamedOutputLink(const FString& LinkDesc);
};

// @baa 0x008bd7b0
UBOOL USequenceOp__008bd7b0::ActivateNamedOutputLink(const FString& LinkDesc)
{
    UBOOL bActivated = FALSE;
    for (INT Idx = 0; Idx < OutputLinks.Num(); Idx++)
    {
        if ((const FString__008bd7b0&)OutputLinks(Idx).LinkDesc == LinkDesc)
        {
            bActivated = sub_008bd720(Idx); // ActivateOutputLink(Idx)
            break;
        }
    }
    return bActivated;
}

struct USeqAct_ParticleEventGenerator_ : public USeqAct_ParticleEventGenerator
{
    void HandleEnableInputs();
};

// @baa 0x008bc130
/* inputs 1/2/3 ("Enable", "Disable", "Toggle"), called from Activated (0x008bee30) */
void USeqAct_ParticleEventGenerator_::HandleEnableInputs()
{
    if (InputLinks(1).bHasImpulse)
    {
        bEnabled = TRUE;
    }
    else if (InputLinks(2).bHasImpulse)
    {
        bEnabled = FALSE;
    }
    else if (InputLinks(3).bHasImpulse)
    {
        bEnabled = !bEnabled;
    }
}

/* FString::operator* and the copy of FString::Printf this unit links against (0x005495f0); not in the kit's FString. */
struct FString__008cb850 : public FString
{
    const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
    static FString Printf(const TCHAR* Fmt, ...);
};

/* FName != NAME_None (UnName.h); the kit's FName has no operators. */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Named_ : public USeqVar_Named
{
    FString GetValueStr();
};

// @baa 0x008cb850
FString USeqVar_Named_::GetValueStr()
{
    if (FindVarName != NAME_None)
    {
        return FString__008cb850::Printf(TEXT("< %s >"), *(const FString__008cb850&)FindVarName.ToString());
    }
    return FString(TEXT("< ??? >"));
}

/* FString::operator* and the copy of FString::Printf this unit links against (0x005495f0); not in the kit's FString. */
struct FString__008c84a0 : public FString
{
    const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
    static FString Printf(const TCHAR* Fmt, ...);
};

/* UObject::GetName (0x0043bbb0); the kit doesn't declare it. */
struct UObject__008c84a0 : public UObject
{
    FString GetName() const;
};

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Object_ : public USeqVar_Object
{
    FString GetValueStr();
};

// @baa 0x008c84a0
FString USeqVar_Object_::GetValueStr()
{
    return FString__008c84a0::Printf(TEXT("%s"), ObjValue != NULL ? *(const FString__008c84a0&)ObjValue->GetName() : TEXT("???"));
}

/* slot 0x19c (vf_19c) is USeqAct_Latent::AbortFor */
struct USeqAct_Latent_ : public USeqAct_Latent
{
    void AbortFor(AActor* LatentActor);
};

// @baa 0x008be9e0
void USeqAct_Latent_::AbortFor(AActor* LatentActor)
{
#line 4890 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp"
    check(LatentActor != NULL && "Trying abort Latent action with a NULL actor");
    if (!bAborted)
    {
        // only abort if the actor is one of ours
        UBOOL bFoundEntry = FALSE;
        for (INT Idx = 0; Idx < LatentActors.Num() && !bFoundEntry; Idx++)
        {
            if (LatentActors(Idx) == LatentActor)
            {
                bFoundEntry = TRUE;
            }
        }
        if (bFoundEntry)
        {
            bAborted = TRUE;
        }
    }
}

#line 515 "candidate.cpp"

// The game keeps ~TArray<UObject**> out of line (0x008c26a0).
extern template TArray<UObject**>::~TArray();
/* USequenceOp::GetObjectVars (0x008e9100) isn't declared in Classes.h. */
struct USequenceOp__008f7e00 : public USequenceOp
{
    void GetObjectVars(TArray<UObject**>& outObjVars, const TCHAR* inDesc = NULL);
};

/* slot 0x174 (vf_174) is USequenceOp::Activated */
struct USeqAct_ModifyObjectList_ : public USeqAct_ModifyObjectList
{
    void ActivateAddRemove_Helper(); /* 0x008f6b60: handles the Add/Remove/Empty inputs */
    void Activated();
};

// @baa 0x008f7e00
void USeqAct_ModifyObjectList_::Activated()
{
    ActivateAddRemove_Helper();

    // count the entries attached to the list variable
    TArray<UObject**> ObjVars;
    this->GetObjectVars(ObjVars, TEXT("ObjectListVar"));
    ListEntriesCount = ObjVars.Num();
}

struct USeqAct_ModifyObjectList__008f6b60 : public USeqAct_ModifyObjectList
{
    /* 0x008e9c30: adds (0), removes (1) or empties (2) the attached object lists */
    void ModifyList(INT InputIdx);
    void ActivateAddRemove_Helper();
};

// @baa 0x008f6b60
void USeqAct_ModifyObjectList__008f6b60::ActivateAddRemove_Helper()
{
    if (InputLinks(0).bHasImpulse)
    {
        ModifyList(0);
    }
    else if (InputLinks(1).bHasImpulse)
    {
        ModifyList(1);
    }
    else if (InputLinks(2).bHasImpulse)
    {
        ModifyList(2);
    }
}

// The game keeps TArray<FSeqOpOutputLink>::Empty out of line (0x008dc430).
extern template void TArray<FSeqOpOutputLink>::Empty(INT Slack);
/* TArray<FSeqOpOutputLink>'s copy constructor (0x008e6bf0), destructor (0x008dc1e0) and operator+=
 * (0x008dcec0), all out of line in the exe; the kit's TArray has no copy constructor or operator+=. */
struct FSeqOpOutputLinkArray : public TArray<FSeqOpOutputLink>
{
    FSeqOpOutputLinkArray(const TArray<FSeqOpOutputLink>& Other);
    ~FSeqOpOutputLinkArray();
    TArray<FSeqOpOutputLink>& operator+=(const TArray<FSeqOpOutputLink>& Other);
};

/* slot 0x140 (vf_140) is USequenceObject::UpdateObject; USequenceOp's is 0x00902260 */
struct USequenceOp__00907d90 : public USequenceOp
{
    void UpdateObject();
};

struct USeqAct_Switch_ : public USeqAct_Switch
{
    void UpdateObject();
};

// @baa 0x00907d90
void USeqAct_Switch_::UpdateObject()
{
    // keep the output links, which the switch creates itself
    FSeqOpOutputLinkArray SavedOutputLinks(OutputLinks);
    ((USequenceOp__00907d90*)this)->USequenceOp__00907d90::UpdateObject(); // Super::UpdateObject()
    OutputLinks.Empty();
    ((FSeqOpOutputLinkArray&)OutputLinks) += SavedOutputLinks;
}
