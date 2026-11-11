// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Callees the kit doesn't declare, under their addresses. */
struct UObject_ : public UObject
{
	UBOOL sub_00402b40(UClass* SomeBase) const;		/* UObject::IsA */
};

struct FString_ : public FString
{
	const TCHAR* sub_00439b40() const;			/* FString::operator* */
};

FString sub_005495f0(const TCHAR* Fmt, ...);
		/* FString::Printf */
UClass* sub_00781c50();
					/* APlayerController::StaticClass */
struct UWorld_ : public UWorld
{
	AController* sub_009c8570();				/* UWorld::GetFirstController */
};

/* The kit's FName has no constructors and no EName: UE3's FName(EName) (UnName.h:
 * "FName( EName N ) : Index( N ), Number( NAME_NO_NUMBER_INTERNAL ) {}") builds the
 * by-value argument in place, which a brace/aggregate FName doesn't. */
enum EName_ { NAME_None_ = 0 };

struct FNameArg : public FName
{
	FNameArg(EName_ N) { Index = N; Number = 0; }
};

struct APlayerController_ : public APlayerController
{
	void sub_008c3830(const FString& S, FNameArg Type, FLOAT MsgLifeTime);	/* eventClientMessage */
};

/* USeqAct_Delay::UpdateOp (vtable 0x170) is declared only as vf_170 in Classes.h. */
struct USeqAct_Delay_ : public USeqAct_Delay
{
	UBOOL UpdateOp(FLOAT DeltaTime);
};

// @baa 0x008cbe40
UBOOL USeqAct_Delay_::UpdateOp(FLOAT DeltaTime)
{
	// check for a start
	if (InputLinks(0).bHasImpulse)
	{
		bDelayActive = TRUE;
	}
	// check for a stop
	else if (InputLinks(1).bHasImpulse)
	{
		bDelayActive = FALSE;
		return TRUE;
	}
	// check for a pause
	else if (InputLinks(2).bHasImpulse)
	{
		bDelayActive = FALSE;
	}

	// if the delay is active and we haven't already updated this tick
	if (bDelayActive && GWorld->GetWorldInfo()->TimeSeconds != LastUpdateTime)
	{
		RemainingTime -= DeltaTime;
		if (RemainingTime <= 0.f)
		{
			if (GEngine->bOnScreenKismetWarnings && bOutputObjCommentToScreen)
			{
				for (AController* Controller = ((UWorld_*)GWorld)->sub_009c8570(); Controller != NULL; Controller = Controller->NextController)
				{
					if (((UObject_*)Controller)->sub_00402b40(sub_00781c50()))
					{
						((APlayerController_*)Controller)->sub_008c3830(sub_005495f0(TEXT("END DELAY: %s"), ((FString_&)ObjComment).sub_00439b40()), NAME_None_, 0.f);
					}
				}
			}
			// activate the output
			FSeqOpOutputLink& Link = OutputLinks(0);
			if (!Link.bDisabled)
			{
				Link.bHasImpulse = TRUE;
			}
			return TRUE;
		}
	}
	return FALSE;
}
