// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// ARPawnVillain's script natives that the kit's class does not declare.
struct ARPawnVillain_ : public ARPawnVillain
{
	void execMonitorRagdollForHighVelocity(FFrame& Stack, RESULT_DECL);
	void execCancelBarkSetLoading(FFrame& Stack, RESULT_DECL);
	void execInitBarkSet(FFrame& Stack, RESULT_DECL);
	void execLoadBarkSet(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (ARPawnVillain_::*ARPawnVillainNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct ARPawnVillainNativeInfo
{
	const TCHAR* Name;
	ARPawnVillainNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &ARPawnVillain_::name },
// @baa 0x01e1ef60
ARPawnVillainNativeInfo GBmGameARPawnVillainNatives[] =
{
	MAP_NATIVE(ARPawnVillain, execMonitorRagdollForHighVelocity)
	MAP_NATIVE(ARPawnVillain, execIsIncapacitated)
	MAP_NATIVE(ARPawnVillain, execCancelBarkSetLoading)
	MAP_NATIVE(ARPawnVillain, execInitBarkSet)
	MAP_NATIVE(ARPawnVillain, execLoadBarkSet)
	{ NULL, NULL }
};
