// UnAnimTreeDraw.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps, with UE3's definitions (UnObjBas.h, UnLinkedObjEditor.h): FIntPoint has no constructor, and
 * the linked-object editor's connector types and layout constant aren't defined. */
struct FIntPoint_ : public FIntPoint
{
	FIntPoint_(INT InX, INT InY) { X = InX; Y = InY; }
};

enum EConnectorHitProxyType { LOC_INPUT, LOC_OUTPUT, LOC_VARIABLE, LOC_EVENT };

#define LO_CONNECTOR_LENGTH (10)

// @baa 0x00cb9260
FIntPoint UAnimNodeBlendBase::GetConnectionLocation(INT ConnType, INT ConnIndex)
{
	if (ConnType == LOC_INPUT)
	{
#line 271 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
		check(ConnIndex == 0);
		return FIntPoint(NodePosX - LO_CONNECTOR_LENGTH, OutDrawY);
	}
	else if (ConnType == LOC_OUTPUT)
	{
#line 276 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
		check(ConnIndex >= 0 && ConnIndex < Children.Num());
		return FIntPoint(NodePosX + DrawWidth + LO_CONNECTOR_LENGTH, Children(ConnIndex).DrawY);
	}

	return FIntPoint(0, 0);
}

#line 61 "candidate.cpp"


// @baa 0x00cb9070
FIntPoint UAnimTree::GetConnectionLocation(INT ConnType, INT ConnIndex)
{
	if (ConnType == LOC_INPUT)
	{
#line 32 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
		check(ConnIndex == 0);
		return FIntPoint(NodePosX - LO_CONNECTOR_LENGTH, OutDrawY);
	}
	else if (ConnType == LOC_OUTPUT)
	{
		// the animation tree, the morph nodes, then one connector per skel control list
		if (ConnIndex == 0)
		{
			return FIntPoint(NodePosX + DrawWidth + LO_CONNECTOR_LENGTH, Children(0).DrawY);
		}
		else if (ConnIndex == 1)
		{
			return FIntPoint(NodePosX + DrawWidth + LO_CONNECTOR_LENGTH, MorphConnDrawY);
		}
		else
		{
			return FIntPoint(NodePosX + DrawWidth + LO_CONNECTOR_LENGTH, SkelControlLists(ConnIndex - 2).DrawY);
		}
	}

	return FIntPoint(0, 0);
}

#line 98 "candidate.cpp"
