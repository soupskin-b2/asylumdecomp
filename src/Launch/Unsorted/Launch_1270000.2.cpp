// Launch_1270000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UUILayer_ : public UUILayer
{
	INT sub_014a25c0(INT);
};

// @baa 0x0127c210
void UUILayer::execFindNodeIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(NodeIndex);
	P_FINISH;
	*(INT*)Result = ((UUILayer_*)this)->sub_014a25c0(NodeIndex);
}
