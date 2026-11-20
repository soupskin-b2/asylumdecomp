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
UBOOL USeqCond_SwitchBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ff200
UBOOL USeqCond_SwitchClass::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ff350
UBOOL USeqCond_SwitchName::HasParentClassChanged() const
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
FString USeqVar_Float::GetValueStr()
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

// @baa 0x008e7290
void USeqCond_CompareFloat::Activated()
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

// @baa 0x008e74a0
void USeqCond_CompareInt::Activated()
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

// @baa 0x008e77f0
void USeqCond_Increment::Activated()
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

// @baa 0x008e79f0
void USeqCond_IncrementFloat::Activated()
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

// @baa 0x008be500
void USequence::MarkSequencePendingKill()
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
            ((USequence*)NestedSequences(Idx))->MarkSequencePendingKill();
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

// @baa 0x00909a50
void USeqEvent_Console::PostLoad()
{
    // always use the class's default name
    USeqEvent_Console* DefaultObj = (USeqEvent_Console*)GetClass()->GetDefaultObject();
    (FString_&)ObjName = *(FString_&)DefaultObj->ObjName;
    USequenceObject::PostLoad(); // Super::PostLoad()
}

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
// @baa 0x008bce40
FString USeqVar_Name::GetValueStr()
{
    return NameValue.ToString();
}

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
// @baa 0x008c8a60
FString USeqVar_Vector::GetValueStr()
{
    return ((const FVector&)VectValue).ToString();
}

// The game keeps TArray<USequenceOp*>::Remove out of line (0x008b3a80).
extern template void TArray<USequenceOp*>::Remove(INT Index, INT Count);
// @baa 0x008c1df0
/* the out-of-line TArray<USequenceOp*>::Pop instantiation (unreferenced in the exe) */
template USequenceOp* TArray<USequenceOp*>::Pop();

// @baa 0x008ac210
UBOOL USeqAct_LevelStreaming::UpdateOp(FLOAT DeltaTime)
{
    return ((USeqAct_LevelStreaming*)this)->IsLevelStreamingComplete(Level);
}

/* slot 0x174 (vf_174) is USequenceOp::Activated */

// @baa 0x008e6490
void USeqAct_SetString::Activated()
{
    Target = Value;
}

// @baa 0x008abb30
/* a sequence is only enabled if all of its parents are */
UBOOL USequence::IsEnabled() const
{
    return bEnabled && (ParentSequence == NULL || ((USequence*)ParentSequence)->IsEnabled());
}

/* slot 0x180 (vf_180) */

// @baa 0x008aba80
void USequenceOp::OnReceivedImpulse(USequenceOp* ActivatorOp, INT InputLinkIndex)
{
    if (ActivatorOp != NULL)
    {
        PlayerIndex = ActivatorOp->PlayerIndex;
        GamepadID = ActivatorOp->GamepadID;
    }
}

/* slot 0x04c (vf_04c) is UObject::PostEditChange(UProperty*); UObject's is 0x005c1a10 */

// @baa 0x008abad0
void USequenceObject::PostEditChange(UProperty* PropertyThatChanged)
{
    ((UObject*)this)->UObject::PostEditChange(PropertyThatChanged); // Super::PostEditChange()
    ((UObject*)this)->MarkPackageDirty(TRUE);
}

// @baa 0x008c1e40
/* the out-of-line TArray<USequenceOp*>::ContainsItem instantiation (USequence::QueueSequenceOp's ActiveSequenceOps) */
template UBOOL TArray<USequenceOp*>::ContainsItem(USequenceOp* const& Item) const;

// @baa 0x008c12c0
/* the out-of-line TArray<USeqAct_Latent*>::ContainsItem instantiation (AActor::LatentActions) */
template UBOOL TArray<USeqAct_Latent*>::ContainsItem(USeqAct_Latent* const& Item) const;

// @baa 0x008bd7b0
UBOOL USequenceOp::ActivateNamedOutputLink(const FString& LinkDesc)
{
    UBOOL bActivated = FALSE;
    for (INT Idx = 0; Idx < OutputLinks.Num(); Idx++)
    {
        if ((const FString&)OutputLinks(Idx).LinkDesc == LinkDesc)
        {
            bActivated = ActivateOutputLink(Idx); // ActivateOutputLink(Idx)
            break;
        }
    }
    return bActivated;
}

// @baa 0x008bc130
/* inputs 1/2/3 ("Enable", "Disable", "Toggle"), called from Activated (0x008bee30) */
void USeqAct_ParticleEventGenerator::HandleEnableInputs()
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

/* FName != NAME_None (UnName.h); the kit's FName has no operators. */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
// @baa 0x008cb850
FString USeqVar_Named::GetValueStr()
{
    if (FindVarName != NAME_None)
    {
        return FString::Printf(TEXT("< %s >"), *(const FString&)FindVarName.ToString());
    }
    return FString(TEXT("< ??? >"));
}

/* UObject::GetName (0x0043bbb0); the kit doesn't declare it. */
/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
// @baa 0x008c84a0
FString USeqVar_Object::GetValueStr()
{
    return FString::Printf(TEXT("%s"), ObjValue != NULL ? *(const FString&)ObjValue->GetName() : TEXT("???"));
}

// @baa 0x008be9e0
void USeqAct_Latent::AbortFor(AActor* LatentActor)
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
/* slot 0x174 (vf_174) is USequenceOp::Activated */

// @baa 0x008f7e00
void USeqAct_ModifyObjectList::Activated()
{
    ((USeqAct_ModifyObjectList*)this)->ActivateAddRemove_Helper();

    // count the entries attached to the list variable
    TArray<UObject**> ObjVars;
    this->GetObjectVars(ObjVars, TEXT("ObjectListVar"));
    ListEntriesCount = ObjVars.Num();
}

// @baa 0x008f6b60
void USeqAct_ModifyObjectList::ActivateAddRemove_Helper()
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

// @baa 0x00907d90
void USeqAct_Switch::UpdateObject()
{
    // keep the output links, which the switch creates itself
    FSeqOpOutputLinkArray SavedOutputLinks(OutputLinks);
    Super::UpdateObject();
    OutputLinks.Empty();
    ((FSeqOpOutputLinkArray&)OutputLinks) += SavedOutputLinks;
}
