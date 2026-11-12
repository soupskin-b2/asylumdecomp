// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// ARRemoveableGrate's script natives that the kit's class does not declare.
struct ARRemoveableGrate_ : public ARRemoveableGrate
{
	void execTermGrateConstraint(FFrame& Stack, RESULT_DECL);
	void execInitGrateConstraint(FFrame& Stack, RESULT_DECL);
	void execResetGrateRBCollision(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ARRemoveableGrate_::*ARRemoveableGrateNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ARRemoveableGrateNativeInfo
{
	const TCHAR* Name;
	ARRemoveableGrateNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ARRemoveableGrate_::name },
// @baa 0x01e1efc0
ARRemoveableGrateNativeInfo GBmGameARRemoveableGrateNatives[] =
{
	MAP_NATIVE(ARRemoveableGrate, execTermGrateConstraint)
	MAP_NATIVE(ARRemoveableGrate, execInitGrateConstraint)
	MAP_NATIVE(ARRemoveableGrate, execResetGrateRBCollision)
	{ NULL, NULL }
};
