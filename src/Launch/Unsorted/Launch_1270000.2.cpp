// Launch_1270000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0127c210
void UUILayer::execFindNodeIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(NodeIndex);
	P_FINISH;
	*(INT*)Result = sub_014a25c0(NodeIndex);
}

/* UILayer.uc's UILayerNode (const out parameter of RemoveNode); the kit doesn't declare it.
 * Stand-in with UE3's members; only its size (0xc, from the exec's frame) matters here. */
struct FUILayerNode
{
    BITFIELD bLocked : 1;
    BITFIELD bHidden : 1;
    UObject* LayerObject;
    UUILayerBase* ParentLayer;
};

/* UUILayer::RemoveNode (014a7e10, UILayerBrowser.cpp) isn't declared in the kit. */
struct UUILayer_ : public UUILayer
{
    UBOOL RemoveNode(const FUILayerNode& NodeToRemove);
};

// @baa 0x0127c190
void UUILayer::execRemoveNode(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FUILayerNode, NodeToRemove);
    P_FINISH;
    *(UBOOL*)Result = ((UUILayer_*)this)->RemoveNode(NodeToRemove);
}
