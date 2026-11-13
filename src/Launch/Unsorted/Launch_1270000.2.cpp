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

// @baa 0x0127c190
void UUILayer::execRemoveNode(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FUILayerNode, NodeToRemove);
    P_FINISH;
    *(UBOOL*)Result = this->RemoveNode(NodeToRemove);
}
