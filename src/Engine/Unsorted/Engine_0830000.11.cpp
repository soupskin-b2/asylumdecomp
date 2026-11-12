// Engine_0830000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x008358f0
void ANavigationPoint::GetBoundingCylinder(FLOAT& CollisionRadius, FLOAT& CollisionHeight)
{
	if (CylinderComponent)
	{
		CollisionRadius = CylinderComponent->CollisionRadius;
		CollisionHeight = CylinderComponent->CollisionHeight;
	}
	else
	{
		Super::GetBoundingCylinder(CollisionRadius, CollisionHeight);
	}
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

/* Kit gaps: RF_PendingKill and UObject::MarkPendingKill (UnObjBas.h); ObjectFlags is an FQWord here. */
#define RF_PendingKill ((QWORD)0x2000000000000000)

// @baa 0x0083eb20
/* Slot 0x31c (unnamed in the kit): after the actor handling, kills the node's reach specs unless the flag is set. */
void ANavigationPoint::vf_31c(UBOOL bFlag)
{
	Super::vf_31c(bFlag);
	if (!bFlag)
	{
		for (INT PathIdx = 0; PathIdx < PathList.Num(); PathIdx++)
		{
			if (((TArrayAt_<UReachSpec*>&)PathList).At(PathIdx) != NULL)
			{
				((UObject*)((TArrayAt_<UReachSpec*>&)PathList).At(PathIdx))->MarkPendingKill();
			}
		}
	}
}

#line 58 "candidate.cpp"
