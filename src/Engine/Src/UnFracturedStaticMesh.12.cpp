// UnFracturedStaticMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

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

// @baa 0x007b8990
/* Slot 0x37c (unnamed in the kit; UE3's RemoveDecals): resets the decals attached to fragment IndexToRemove. */
void AFracturedStaticMeshActor::RemoveDecals(INT IndexToRemove)
{
	for (INT i = 0; i < Components.Num(); i++)
	{
		UDecalComponent* DecalComp = Cast<UDecalComponent>(((TArrayAt_<UActorComponent*>&)Components).At(i));
		if (DecalComp && DecalComp->FracturedStaticMeshComponentIndex == IndexToRemove)
		{
			DecalComp->ResetToDefaults();
		}
	}
}

#line 36 "candidate.cpp"
