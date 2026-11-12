// UnSequence.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

/* FVector's subtraction and Size() (UnMath.h); the kit's FVector has neither. */
struct FVector_ : public FVector
{
    FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
};

/* slot 0x198 (vf_198) is USequenceEvent::CheckActivate */
struct USeqEvent_AISeeEnemy_ : public USeqEvent_AISeeEnemy
{
    UBOOL CheckActivate(AActor* InOriginator, AActor* InInstigator, UBOOL bTest, TArray<INT>* ActivateIndices, UBOOL bPushTop);
};

// @baa 0x008e83a0
UBOOL USeqEvent_AISeeEnemy_::CheckActivate(AActor* InOriginator, AActor* InInstigator, UBOOL bTest, TArray<INT>* ActivateIndices, UBOOL bPushTop)
{
    // only activate if the enemy is within sight distance (when one is set)
    if (InOriginator != NULL && InInstigator != NULL &&
        (MaxSightDistance <= 0.f ||
         (((const FVector_&)InOriginator->Location) - InInstigator->Location).Size() <= MaxSightDistance))
    {
        return sub_008abba0(InOriginator, InInstigator, bTest, ActivateIndices, bPushTop); // Super::CheckActivate
    }
    return FALSE;
}

// @baa 0x008e57e0
void USeqAct_AddFloat::Activated()
{
	FloatResult = ValueA + ValueB;
	OutputLinks(0).bHasImpulse = TRUE;
	IntResult = appRound(FloatResult);
}

// @baa 0x008e5900
void USeqAct_AddInt::Activated()
{
	FloatResult = ValueA + ValueB;
	OutputLinks(0).bHasImpulse = TRUE;
	IntResult = appRound(FloatResult);
}

// @baa 0x008e5f70
void USeqAct_MultiplyFloat::Activated()
{
	FloatResult = ValueA * ValueB;
	OutputLinks(0).bHasImpulse = TRUE;
	IntResult = appRound(FloatResult);
}

// @baa 0x008e6580
void USeqAct_SubtractFloat::Activated()
{
	FloatResult = ValueA - ValueB;
	OutputLinks(0).bHasImpulse = TRUE;
	IntResult = appRound(FloatResult);
}

// @baa 0x008e66a0
void USeqAct_SubtractInt::Activated()
{
	FloatResult = ValueA - ValueB;
	OutputLinks(0).bHasImpulse = TRUE;
	IntResult = appRound(FloatResult);
}

// @baa 0x008e6090
void USeqAct_MultiplyInt::Activated()
{
	FloatResult = (FLOAT)ValueA * (FLOAT)ValueB;
	OutputLinks(0).bHasImpulse = TRUE;
	IntResult = appRound(FloatResult);
}

// @baa 0x008e5c40
void USeqAct_DivideFloat::Activated()
{
	// avoid dividing by zero
	if (ValueB == 0.f)
	{
		ValueB = 1.f;
	}
	FloatResult = ValueA / ValueB;
	OutputLinks(0).bHasImpulse = TRUE;
	IntResult = appRound(FloatResult);
}

// @baa 0x008e5d80
void USeqAct_DivideInt::Activated()
{
	// avoid dividing by zero
	if (ValueB == 0)
	{
		ValueB = 1;
	}
	FloatResult = (FLOAT)ValueA / (FLOAT)ValueB;
	OutputLinks(0).bHasImpulse = TRUE;
	IntResult = appRound(FloatResult);
}

// @baa 0x008e5b20
void USeqAct_CastToInt::Activated()
{
	OutputLinks(0).bHasImpulse = TRUE;
	if (bTruncate)
	{
		IntResult = (INT)Value;
	}
	else
	{
		IntResult = appRound(Value);
	}
}
