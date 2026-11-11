// BmGame_1700000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

typedef AActor* (__thiscall* FSlot)(void*);

// @baa 0x017083b0
void ARExplosiveGooMine::execConditionalSetupPosition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = ((FSlot)(*(void***)this)[0x354 / 4])(this);
}

struct ARBatarangCamera_ : public ARBatarangCamera
{
	void sub_016a9f20(FLOAT);
};

// @baa 0x01709b40
void ARBatarangCamera::execUpdateTrackingPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARBatarangCamera_*)this)->sub_016a9f20(DeltaTime);
}

struct ARLineLauncherDirectorCamera_ : public ARLineLauncherDirectorCamera
{
	void sub_016b0e10(FLOAT);
};

// @baa 0x0170a180
void ARLineLauncherDirectorCamera::execSetupPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARLineLauncherDirectorCamera_*)this)->sub_016b0e10(DeltaTime);
}

struct ARMultiTargetCamera_ : public ARMultiTargetCamera
{
	void sub_016b70c0(FLOAT);
};

// @baa 0x0170a2d0
void ARMultiTargetCamera::execUpdatePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARMultiTargetCamera_*)this)->sub_016b70c0(DeltaTime);
}
