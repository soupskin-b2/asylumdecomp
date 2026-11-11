// BmGame_16f0000.cpp: 40 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016f0370
void ARPawn::execTeleportPhysics( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_490();
}

// @baa 0x016f0440
void ARPawnCharacter::execModifyPoseNode( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4ac();
}

// @baa 0x016f0480
void ARPawnCharacter::execBeginChangePose( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4b0();
}

// @baa 0x016f09a0
void ARPawnCharacter::execInstantChangePose( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4d8();
}

// @baa 0x016f4890
void ARPawnCharacter::execStopMoveTo( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_580();
}

// @baa 0x016f48d0
void ARPawnCharacter::execInstantStopMoveTo( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_584();
}

// @baa 0x016f4c60
void ARPawnCharacter::execStopAimAt( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_598();
}

// @baa 0x016f4ca0
void ARPawnCharacter::execStopAllOverlays( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_59c();
}

// @baa 0x016f4ce0
void ARPawnCharacter::execSnapAimAt( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_5a0();
}

// @baa 0x016f5050
void ARPawnCharacter::execStopLookAt( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_5c0();
}

// @baa 0x016f5240
void ARPawnCharacter::execStopFaceAt( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_5d0();
}

// @baa 0x016f5780
void ARPawnCharacter::execSnapFloorCorrection( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_60c();
}

struct ARPawnCombat_ : public ARPawnCombat
{
	UBOOL IsTargetted();
	void execIsTargetted(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f60c0
void ARPawnCombat_::execIsTargetted( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsTargetted();
}

// @baa 0x016f6100
void ARBMPawnAIAnim::execResetXrayEnvironments( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_640();
}

// @baa 0x016f6930
void ARPawnPlayerCombat::execDetectStrikes( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_640();
}

// @baa 0x016f7800
void ARCombatMove::execClearAllTimers( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

struct ARSpecialMoveInstance_LineLauncher_ : public ARSpecialMoveInstance_LineLauncher
{
	void CheckForRailingComingUp();
	void execCheckForRailingComingUp(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016fbb10
void ARSpecialMoveInstance_LineLauncher_::execCheckForRailingComingUp( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CheckForRailingComingUp();
}

struct ARSpecialMoveInstance_ResonateObject_ : public ARSpecialMoveInstance_ResonateObject
{
	void AlignCamera();
	void execAlignCamera(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016fbfb0
void ARSpecialMoveInstance_ResonateObject_::execAlignCamera( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	AlignCamera();
}

struct ARCornerPoint_ : public ARCornerPoint
{
	void UpdateDisplayLines();
	void execUpdateDisplayLines(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016fe4a0
void ARCornerPoint_::execUpdateDisplayLines( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateDisplayLines();
}

struct ARHidePoint_ : public ARHidePoint
{
	void ActivateForGrapple();
	void execActivateForGrapple(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffa10
void ARHidePoint_::execActivateForGrapple( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ActivateForGrapple();
}

struct ARHidePoint__016ffa40 : public ARHidePoint
{
	void DeactivateForGrapple();
	void execDeactivateForGrapple(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffa40
void ARHidePoint__016ffa40::execDeactivateForGrapple( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DeactivateForGrapple();
}

struct ARHidePoint__016ffa70 : public ARHidePoint
{
	void SaveDestroyedState();
	void execSaveDestroyedState(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffa70
void ARHidePoint__016ffa70::execSaveDestroyedState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	SaveDestroyedState();
}

struct ARHidePoint__016ffaa0 : public ARHidePoint
{
	void LoadDestroyedState();
	void execLoadDestroyedState(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffaa0
void ARHidePoint__016ffaa0::execLoadDestroyedState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	LoadDestroyedState();
}

struct ARGargoyleBombBase_ : public ARGargoyleBombBase
{
	void ActivateBomb();
	void execActivateBomb(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffd70
void ARGargoyleBombBase_::execActivateBomb( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ActivateBomb();
}

// @baa 0x016fee30
void URBMRouterPath::execClearPath(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_130();
}

typedef UBOOL (__thiscall* FSlot)(void*);

// @baa 0x016f00c0
void ARPawn::execIsSafe(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x478 / 4])(this);
}

// @baa 0x016f0100
void ARPawn::execGetSafePoint(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = (AActor*)vf_47c();
}

// @baa 0x016f0330
void ARPawn::execIsIncapacitated(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_48c();
}

// @baa 0x016f3b30
void ARPawnCharacter::execIsPoseMirrored(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_52c();
}

// @baa 0x016f3b70
void ARPawnCharacter::execIsInWeaponTransition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_530();
}

// @baa 0x016f46b0
void ARPawnCharacter::execIsPlayingAnyOverlay(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_570();
}

// @baa 0x016f5610
void ARPawnCharacter::execIsFalling(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_5f4();
}

// @baa 0x016f5650
void ARPawnCharacter::execIsFallingOrLanding(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_5f8();
}

// @baa 0x016f5700
void ARPawnCharacter::execGetMoveToPhase(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_604();
}

// @baa 0x016f5740
void ARPawnCharacter::execGetMoveToPhaseTime(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_608();
}

// @baa 0x016f5af0
void ARPawnCombat::execGetNormalisedTimeThroughCurrentTransition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_618();
}

// @baa 0x016f5d90
void ARPawnCombat::execIsUsingCombatPoint(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_624();
}

// @baa 0x016f5dd0
void ARPawnCombat::execIsLunatic(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_628();
}

// @baa 0x016f61b0
void ARBMPawnAIAnim::execCanBeSeenByBatsForXray(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_648();
}

// @baa 0x016f7840
void ARCombatMove_BatmanStrike::execSetStrikeInfo(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x358 / 4])(this);
}
