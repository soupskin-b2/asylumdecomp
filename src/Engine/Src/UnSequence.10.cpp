// UnSequence.cpp (part 10 of 10): 18 functions
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
/* UObject::MarkPendingKill (inline in UE3's UnObjBas.h; not in Classes.h). */
static inline void MarkPendingKill(UObject* Object)
{
    *(QWORD*)&Object->ObjectFlags |= RF_PendingKill;
}

struct USequence_ : public USequence
{
    void MarkSequencePendingKill();
};

// @baa 0x008be500
void USequence_::MarkSequencePendingKill()
{
    MarkPendingKill(this);

    for (INT Idx = 0; Idx < SequenceObjects.Num(); Idx++)
    {
        if (SequenceObjects(Idx) != NULL)
        {
            MarkPendingKill(SequenceObjects(Idx));
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
