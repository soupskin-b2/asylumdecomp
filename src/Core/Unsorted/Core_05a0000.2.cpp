// Core_05a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UObject_ : public UObject
{
	void sub_005aecc0(FFrame&, UBOOL);
};

// @baa 0x005aeed0
void UObject::execPopState(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bPopAll, 0);
	P_FINISH;
	((UObject_*)this)->sub_005aecc0(Stack, bPopAll);
}
