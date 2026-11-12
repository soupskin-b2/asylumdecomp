// UnrealEd_1270000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gaps: UnrealEd's UILayerNode struct (bLocked/bVisible bits, the widget and the layer it lives in) and
 * UUILayer::InsertNode (0x014a2530) aren't declared (UILayer is native-only). */
struct FUILayerNode
{
	BITFIELD bLocked : 1;
	BITFIELD bVisible : 1;
	class UObject* Object;
	class UUILayer* ParentLayer;
};

struct UUILayer_ : public UUILayer
{
	UBOOL InsertNode(const FUILayerNode& NodeToInsert, INT InsertIndex);
};

// @baa 0x0127c0e0
/* bool InsertNode(const out UILayerNode NodeToInsert, optional int InsertIndex = INDEX_NONE) */
void UUILayer::execInsertNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FUILayerNode, NodeToInsert);
	P_GET_INT_OPTX(InsertIndex, INDEX_NONE);
	P_FINISH;
	*(UBOOL*)Result = ((UUILayer_*)this)->InsertNode(NodeToInsert, InsertIndex);
}
