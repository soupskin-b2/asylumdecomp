// RBmRouterClass.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_P_7ca0
{
    DWORD V;
    DWORD sub_00757ca0();
};

// @baa 0x01610e50
void __stdcall sub_01610e50(C_P_7ca0* P)
{
    if (P->V == 0)
        P->V = P->sub_00757ca0();
}

// @baa 0x0161ba70
/* Where path node Index is; the origin when there's no such node. */
FVector URBMRouterPath::GetNodePos(INT Index)
{
	if (PathNodes.IsValidIndex(Index))
	{
		return PathNodes(Index).pos;
	}
	return FVector(0.f, 0.f, 0.f);
}

struct C_A_5ef50
{
    INT sub_0075ef50(UINT* P);
};

// @baa 0x0161d510
void ARPontoonBase::vf_340(INT A)
{
    ARPathNode_Pontoon* P;
    if (PontoonPathNode == NULL)
        return;
    ((C_A_5ef50*)A)->sub_0075ef50((UINT*)&(P = PontoonPathNode));
}

/* The router's direct-move test for a pawn (a file-static helper, 016163c0). */
UBOOL sub_016163c0(class ARBMPawnAI* Pawn, FVector TestPos, UBOOL bKnowVisible);
// @baa 0x01616470
/* Whether this router's pawn can move straight to a point. */
UBOOL ARBMRouter::CanMoveDirectlyToPos(FVector TestPos, UBOOL bKnowVisible)
{
	return sub_016163c0(HostPawn, TestPos, bKnowVisible);
}

/* Kit gaps: UE3's ConstructObject<T> (UnObjBas.h; this instantiation is out of line at 01629710) isn't declared,
 * nor is the router's path-building helper (0161b520). */
#define INVALID_OBJECT ((UObject*)-1)
template<class T> T* ConstructObject(UClass* Class, UObject* Outer = INVALID_OBJECT, FName Name = NAME_None,
	QWORD SetFlags = 0, UObject* Template = NULL, UObject* SubobjectRoot = NULL, struct FObjectInstancingGraph* InstanceGraph = NULL);
struct ARBMRouter_ : public ARBMRouter
{
	void sub_0161b520(FVector Dest, class URBMRouterPath* Path, class ANavigationPoint* StartAnchor, class ANavigationPoint* EndAnchor);
};

// @baa 0x016298d0
/* A new path to Dest between two anchors. */
class URBMRouterPath* ARBMRouter::BuildPathTo(FVector Dest, class ANavigationPoint* StartAnchor, class ANavigationPoint* EndAnchor)
{
	URBMRouterPath* NewPath = ConstructObject<URBMRouterPath>(URBMRouterPath::StaticClass());
	((ARBMRouter_*)this)->sub_0161b520(Dest, NewPath, StartAnchor, EndAnchor);
	return NewPath;
}
