// UnrealEd_1270000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0127c0e0
/* bool InsertNode(const out UILayerNode NodeToInsert, optional int InsertIndex = INDEX_NONE) */
void UUILayer::execInsertNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FUILayerNode, NodeToInsert);
	P_GET_INT_OPTX(InsertIndex, INDEX_NONE);
	P_FINISH;
	*(UBOOL*)Result = this->InsertNode(NodeToInsert, InsertIndex);
}
