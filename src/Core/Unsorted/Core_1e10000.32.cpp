// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// ARPawnPlayerChallengeJokerBase's script natives that the kit's class does not declare.
struct ARPawnPlayerChallengeJokerBase_ : public ARPawnPlayerChallengeJokerBase
{
	void execResetCameraToJoker(FFrame& Stack, RESULT_DECL);
	void execUpdateJokerSounds(FFrame& Stack, RESULT_DECL);
	void execCalculateJacketFlapsWindValue(FFrame& Stack, RESULT_DECL);
	void execSetupJokerCustomPhysics(FFrame& Stack, RESULT_DECL);
	void execGetFlapsWindValue(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ARPawnPlayerChallengeJokerBase_::*ARPawnPlayerChallengeJokerBaseNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ARPawnPlayerChallengeJokerBaseNativeInfo
{
	const TCHAR* Name;
	ARPawnPlayerChallengeJokerBaseNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ARPawnPlayerChallengeJokerBase_::name },
// @baa 0x01e1eee0
ARPawnPlayerChallengeJokerBaseNativeInfo GBmGameARPawnPlayerChallengeJokerBaseNatives[] =
{
	MAP_NATIVE(ARPawnPlayerChallengeJokerBase, execResetCameraToJoker)
	MAP_NATIVE(ARPawnPlayerChallengeJokerBase, execUpdateJokerSounds)
	MAP_NATIVE(ARPawnPlayerChallengeJokerBase, execCalculateJacketFlapsWindValue)
	MAP_NATIVE(ARPawnPlayerChallengeJokerBase, execSetupJokerCustomPhysics)
	MAP_NATIVE(ARPawnPlayerChallengeJokerBase, execGetFlapsWindValue)
	{ NULL, NULL }
};
