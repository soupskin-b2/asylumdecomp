// UnAnimTreeDraw.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* Kit gaps, with UE3's definitions (UnObjBas.h, UnLinkedObjEditor.h): FIntPoint has no constructor, and
 * the linked-object editor's connector types and layout constant aren't defined. */
struct FIntPoint_ : public FIntPoint
{
	FIntPoint_(INT InX, INT InY) { X = InX; Y = InY; }
};

enum EConnectorHitProxyType { LOC_INPUT, LOC_OUTPUT, LOC_VARIABLE, LOC_EVENT };

#define LO_CONNECTOR_LENGTH (10)
/* UAnimNodeBlendBase::GetConnectionLocation (editor drawing) isn't declared in Classes.h. */
struct UAnimNodeBlendBase_ : public UAnimNodeBlendBase
{
	FIntPoint_ GetConnectionLocation(INT ConnType, INT ConnIndex);
};

// @baa 0x00cb9260
FIntPoint_ UAnimNodeBlendBase_::GetConnectionLocation(INT ConnType, INT ConnIndex)
{
	if (ConnType == LOC_INPUT)
	{
#line 271 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
		check(ConnIndex == 0);
		return FIntPoint_(NodePosX - LO_CONNECTOR_LENGTH, OutDrawY);
	}
	else if (ConnType == LOC_OUTPUT)
	{
#line 276 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
		check(ConnIndex >= 0 && ConnIndex < Children.Num());
		return FIntPoint_(NodePosX + DrawWidth + LO_CONNECTOR_LENGTH, ((TArrayAt_<FAnimBlendChild>&)Children).At(ConnIndex).DrawY);
	}

	return FIntPoint_(0, 0);
}

#line 61 "candidate.cpp"

/* UAnimTree::GetConnectionLocation (editor drawing) isn't declared in Classes.h. */
struct UAnimTree_ : public UAnimTree
{
	FIntPoint_ GetConnectionLocation(INT ConnType, INT ConnIndex);
};

// @baa 0x00cb9070
FIntPoint_ UAnimTree_::GetConnectionLocation(INT ConnType, INT ConnIndex)
{
	if (ConnType == LOC_INPUT)
	{
#line 32 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
		check(ConnIndex == 0);
		return FIntPoint_(NodePosX - LO_CONNECTOR_LENGTH, OutDrawY);
	}
	else if (ConnType == LOC_OUTPUT)
	{
		// the animation tree, the morph nodes, then one connector per skel control list
		if (ConnIndex == 0)
		{
			return FIntPoint_(NodePosX + DrawWidth + LO_CONNECTOR_LENGTH, ((TArrayAt_<FAnimBlendChild>&)Children).At(0).DrawY);
		}
		else if (ConnIndex == 1)
		{
			return FIntPoint_(NodePosX + DrawWidth + LO_CONNECTOR_LENGTH, MorphConnDrawY);
		}
		else
		{
			return FIntPoint_(NodePosX + DrawWidth + LO_CONNECTOR_LENGTH, ((TArrayAt_<FSkelControlListHead>&)SkelControlLists).At(ConnIndex - 2).DrawY);
		}
	}

	return FIntPoint_(0, 0);
}

#line 98 "candidate.cpp"
